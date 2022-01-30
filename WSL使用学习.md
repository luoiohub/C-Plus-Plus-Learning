# WSL使用学习

WSL 2 是适用于 Linux 的 Windows 子系统体系结构的一个新版本，它支持适用于 Linux 的 Windows 子系统在 Windows 上运行 ELF64 Linux 二进制文件。

## 安装

以管理员 PowerShell 或 Windows 命令提示符中输入此命令，然后重启计算机来安装运行适用于 Linux 的 Windows 子系统 (WSL) 所需的全部内容。

```powershell
wsl --install
```

--install 命令执行以下操作：

-   启用可选的 WSL 和虚拟机平台组件
-   下载并安装最新 Linux 内核
-   将 WSL 2 设置为默认值
-   下载并安装 Ubuntu Linux 发行版（可能需要重新启动）

>   [手动安装](https://docs.microsoft.com/zh-cn/windows/wsl/install-manual)

首次启动新安装的 Linux 发行版时，将打开一个控制台窗口，要求你等待将文件解压缩并存储到计算机上。 未来的所有启动时间应不到一秒。

### 更改默认安装的 Linux 发行版

默认情况下，安装的 Linux 分发版为 Ubuntu。 可以使用 `-d` 标志进行更改。

-   若要更改安装的发行版，请输入：`wsl --install -d <Distribution Name>`。 将 `<Distribution Name>` 替换为要安装的发行版的名称。
-   若要查看可通过在线商店下载的可用 Linux 发行版列表，请输入：`wsl --list --online` 或 `wsl -l -o`。
-   若要在初始安装后安装其他 Linux 发行版，还可使用命令：`wsl --install -d <Distribution Name>`。			

### 设置 Linux 用户信息

安装 WSL 后，需要为新安装的 Linux 发行版创建用户帐户和密码，使用“开始”菜单打开该发行版（默认情况下为 Ubuntu）。 系统将要求你为 Linux 发行版创建“用户名”和“密码”。

>   遇到用户名错误？ [StackExchange：在 Linux 上的用户名中，应使用或不使用哪些字符？](https://serverfault.com/questions/73084/what-characters-should-i-use-or-not-use-in-usernames-on-linux)

若要更改或重置密码，请打开 Linux 发行版并输入命令：`passwd`。 系统会要求你输入当前密码，然后要求输入新密码，之后再确认新密码。

如果忘记了 Linux 分发版的密码：

1.  请打开 PowerShell，并使用以下命令进入默认 WSL 分发版的根目录：`wsl -u root`

    >   如果需要在非默认分发版中更新忘记的密码，请使用命令：`wsl -d Debian -u root`，并将 `Debian` 替换为目标分发版的名称。

2.   在 PowerShell 内的根级别打开 WSL 发行版后，可使用此命令更新密码：`passwd <username>`，其中 `<username>` 是发行版中帐户的用户名，而你忘记了它的密码。
3.   系统将提示你输入新的 UNIX 密码，然后确认该密码。 在被告知密码已成功更新后，请使用以下命令在 PowerShell 内关闭 WSL：`exit`。

### 检查正在运行的 WSL 版本

可列出已安装的 Linux 发行版，并通过在 PowerShell 或 Windows 命令提示符中输入以下命令来检查每个发行版的 WSL 版本：`wsl -l -v`。

要在安装新的 Linux 发行版时将默认版本设置为 WSL 1 或 WSL 2，请使用命令 `wsl --set-default-version <Version#>`，将 `<Version#>` 替换为 1 或 2。

要设置与 `wsl` 命令一起使用的默认 Linux 发行版，请输入 `wsl -s <DistributionName>` 或 `wsl --setdefault <DistributionName>`，将 `<DistributionName>` 替换为要使用的 Linux 发行版的名称。 例如，从 PowerShell/CMD 输入 `wsl -s Debian`，将默认发行版设置为 Debian。 现在从 Powershell 运行 `wsl npm init` 将在 Debian 中运行 `npm init` 命令。

要在 PowerShell 或 Windows 命令提示符下运行特定的 WSL 发行版而不更改默认发行版，请使用命令 `wsl -d <DistributionName>`，将 `<DistributionName>` 替换为要使用的发行版的名称。

### 使用 WSL 运行多个 Linux 发行版的方法

安装后，有几种方法可以运行 Linux 发行版：

1.  [安装 Windows 终端](https://docs.microsoft.com/en-us/windows/terminal/get-started)（推荐）：使用 Windows 终端支持你想要安装的任意数量的命令行，并允许你在多个标签或窗口窗格中打开它们并在多个 Linux 发行版或其他命令行（PowerShell、命令提示符、PowerShell、Azure CLI 等）之间快速切换。 可使用独特的配色方案、字体样式、大小、背景图像和自定义键盘快捷键来完全自定义终端。 [了解详细信息。](https://docs.microsoft.com/en-us/windows/terminal)
2.  通过访问 Windows“开始”菜单并键入已安装的发行版的名称，可以直接打开 Linux 发行版。 例如：“Ubuntu”。 这会在其自己的控制台窗口中打开 Ubuntu。
3.  在 Windows 命令提示符或 PowerShell 中，可以输入已安装的发行版的名称。 例如：`ubuntu`
4.  在 Windows 命令提示符或 PowerShell 中，可以在当前命令行中打开默认的 Linux 发行版，方法是输入：`wsl.exe`。
5.  在 Windows 命令提示符或 PowerShell 中，可以在当前命令行中使用默认的 Linux 发行版，而无需输入新的发行版名称，方法是输入：`wsl [command]`。 将 `[command]` 替换为 WSL 命令，例如，替换为 `wsl -l -v` 以列出已安装的发行版，或 `wsl pwd` 以查看当前目录路径在 WSL 中的装载位置。 在 PowerShell 中，命令 `get-date` 将提供 Windows 文件系统中的日期，而 `wsl date` 将提供 Linux 文件系统中的日期。

选择的方法应取决于所执行的操作。 如果已在 Windows 提示符或 PowerShell 窗口中打开 WSL 命令行并想退出，请输入命令：`exit`。

### 添加其他发行版

若要添加其他 Linux 发行版，可以通过 [Microsoft Store](https://aka.ms/wslstore)、通过 [--import 命令](https://docs.microsoft.com/zh-cn/windows/wsl/use-custom-distro)或通过[旁加载你自己的自定义发行版](https://docs.microsoft.com/zh-cn/windows/wsl/build-custom-distro)进行安装。

### [设置 Windows Terminal](https://docs.microsoft.com/zh-cn/windows/wsl/setup/environment#set-up-windows-terminal)

## 设置



## C/C++



