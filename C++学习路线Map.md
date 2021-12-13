# C++学习路线Map

## 学习资料

### 语言资料

>   [OpenFOAM编程入门 · GitBook](http://dyfluid.com/docs/book/_book/)
>
>   [现代 C++ 教程: 高速上手 C++ 11/14/17/20](https://changkun.de/modern-cpp/zh-cn/00-preface/)
>
>   [Introduction - CPP-17-STL-Cookbook](https://zoupers.gitbook.io/cpp-17-stl-cookbook/)
>
>   [Effective-Modern-Cpp-Zh (gitbooks.io)](https://vivym.gitbooks.io/effective-modern-cpp-zh/content/)
>
>   [C++并发编程实战 (gitbooks.io)](https://nj.gitbooks.io/c/content/)
>
>   [W3School C++ 教程 (gitbooks.io)](https://wizardforcel.gitbooks.io/w3school-cpp/content/index.html)
>
>   [📚 C/C++ 技术面试基础知识总结 (github.com)](https://github.com/huihut/interview)
>
>   [C++那些事 (light-city.club)](https://light-city.club/sc/)
>
>   [STL教程：C++ STL快速入门](http://c.biancheng.net/stl/)
>
>   [C++入门教程，C++基础教程](http://c.biancheng.net/cplus/)
>
>   [STL教程：C++ STL快速入门](http://c.biancheng.net/stl/)
>
>   



### 计算机基础

>   [free-programming-books (ebookfoundation.github.io)](https://ebookfoundation.github.io/free-programming-books/books/free-programming-books-zh.html)
>
>   





### 数据结构与算法



#### 博客专栏

>   [Blackstar's Space](https://blackstar.pro/)
>
>   [c++_e891377的专栏博客](https://blog.csdn.net/e891377/category_5881679.html)
>
>   



## 工具

### IDE



### 编译器

>   [详解三大编译器：gcc、llvm 和 clang](https://zhuanlan.zhihu.com/p/357803433)
>
>   [(29 条消息) GCC/G++、ICC、Clang、MSVC、BCC等C/C++编译器有什么特长和不足？](https://www.zhihu.com/question/23789676)
>
>   [VSCode配置C++环境的方法步骤（MSVC）](https://www.w3cschool.cn/article/20666604.html)
>
>   [Windows下使用vscode、clang以及mingw进行C语言开发 ](https://zhuanlan.zhihu.com/p/34520938)
>
>   [VsCode+Vcpkg+MSVC——C++开发环境配置](https://zhuanlan.zhihu.com/p/350194582)
>
>   



### 构建工具

#### Cmake



#### Xmake

>   [xmake](https://xmake.io/#/zh-cn/getting_started)
>
>   



### 开发框架

#### Qt

>   [《Qt 学习之路 2》](https://www.devbean.net/2012/08/qt-study-road-2-catelog/)
>
>   [Qt教程，Qt5编程入门教程](http://c.biancheng.net/qt/)
>
>   



#### MFC

>   [MFC 桌面应用程序 | Microsoft Docs](https://docs.microsoft.com/zh-cn/cpp/mfc/mfc-desktop-applications?view=msvc-170)
>
>   [VS2010/MFC编程入门教程之目录和总结-软件开发-鸡啄米 (jizhuomi.com)](http://www.jizhuomi.com/software/257.html)
>
>   [MFC学习日志（一）](https://blog.csdn.net/Pepto_bismal/article/details/77725739?spm=1001.2014.3001.5502)
>
>   [C++的图像界面学习（MFC） 简单入门](https://blog.csdn.net/qq_35307005/article/details/87347326)
>
>   [MFC入门教程：1天深入浅出MFC](http://c.biancheng.net/cpp/mfc/)
>
>   [每日一学\]MFC学习笔记——Hello World](https://blog.csdn.net/kingsollyu/article/details/8104546)
>
>   





## 项目实践

### MFC

#### HelloMFC

在用VS创建工程和解决方案后，以HelloMFC工程的文件结构为例，讲解一下MFC应用程序工程中文件的组成结构。

 用应用程序向导生成框架程序后，我们可以在之前设置的位置下看到以解决方案名命名的文件夹，此文件夹中包含了几个文件和一个以工程名命名的子文件夹，这个子文件夹中又包含了若干个文件和一个res文件夹，创建工程时的选项不同，工程文件夹下的文件可能也会有所不同。

如果已经以Debug方式编译链接过程序，则会在解决方案文件夹下和工程子文件夹下各有一个名为“Debug”的文件夹，而如果是Release方式编译则会有名为“Release”的文件夹。这两种编译方式将产生两种不同版本的可执行程序：**Debug版本和Release版本**。Debug版本的可执行文件中包含了用于调试的信息和代码，而Release版本则没有调试信息，不能进行调试，但可执行文件比较小。

1.   工程相关文件

     工程相关文件包括工程文件夹下的.vcxproj文件和.vcxproj.filters文件。

     .vcxproj文件是MFC生成的工程文件，它包含当前工程的设置和工程所包含的文件等信息。.vcxproj.filters文件存放工程的虚拟目录信息，也就是在解决方案浏览器中的目录结构信息。

2.   应用程序头文件和源文件

     应用程序向导会根据应用程序的类型（单文档、多文档或基于对话框的程序）自动生成一些头文件和源文件，这些文件是工程的主体部分，用于实现主框架、文档、视图等。

     1.   HelloMFC.h：应用程序的主头文件。主要包含由CWinAppEx类派生的CHelloMFCApp类的声明，以及CHelloMFCApp类的全局对象theApp的声明。
     2.   HelloMFC.cpp：应用程序的主源文件。主要包含CHelloMFCApp类的实现，CHelloMFCApp类的全局对象theApp的定义等。
     3.   MainFrm.h和MainFrm.cpp：通过这两个文件从CFrameWndEx类派生出CMainFrame类，用于创建主框架、菜单栏、工具栏和状态栏等。
     4.   HelloMFCDoc.h和HelloMFCDoc.cpp：这两个文件从CDocument类派生出文档类CHelloMFCDoc，包含一些用来初始化文档、串行化（保存和装入）文档和调试的成员函数。
     5.   HelloMFCView.h和HelloMFCView.cpp：它们从CView类派生出名为CHelloMFCView的视图类，用来显示和打印文档数据，包含了一些绘图和用于调试的成员函数。
     6.   ClassView.h和ClassView.cpp：由CDockablePane类派生出CClassView类，用于实现应用程序界面左侧面板上的Class View。
     7.   FileView.h和FileView.cpp：由CDockablePane类派生出CFileView类，用于实现应用程序界面左侧面板上的File View。
     8.   OutputWnd.h和OutputWnd.cpp：由CDockablePane类派生出COutputWnd类，用于实现应用程序界面下侧面板Output。
     9.   PropertiesWnd.h和PropertiesWnd.cpp：由CDockablePane类派生出CPropertiesWnd类，用于实现应用程序界面右侧面板Properties。
     10.   ViewTree.h和ViewTree.cpp：由CTreeCtrl类派生出CViewTree类，用于实现出现在ClassView和FileView等中的树视图。

3.   资源文件

     一般我们使用MFC生成窗口程序都会有对话框、图标、菜单等资源，应用程序向导会生成资源相关文件：res目录、HelloWorld.rc文件和Resource.h文件。

     1.   res目录：工程文件夹下的res目录中含有应用程序默认图标、工具栏使用图标等图标文件。
     2.   HelloWorld.rc：包含默认菜单定义、字符串表和加速键表，指定了默认的About对话框和应用程序默认图标文件等。
     3.   Resource.h：含有各种资源的ID定义。

4.   预编译头文件

     几乎所有的MFC程序的文件都要包含afxwin.h等文件，如果每次都编译一次则会大大减慢编译速度。所以把常用的MFC头文件都放到了stdafx.h文件中，然后由stdafx.cpp包含stdafx.h文件，编译器对stdafx.cpp只编译一次，并生成编译之后的预编译头HelloWorld.pch，大大提高了编译效率。

5.   编译链接生成文件

     如果是Debug方式编译，则会在解决方案文件夹和工程文件夹下都生成Debug子文件夹，而如果是Release方式编译则生成Release子文件夹。

     工程文件夹下的Debug或Release子文件夹中包含了编译链接时产生的中间文件，解决方案文件夹下的Debug或Release子文件夹中主要包含有应用程序的可执行文件。











