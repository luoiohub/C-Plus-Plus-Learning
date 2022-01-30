/*
 * @Date: 2021-12-15 13:21:34
 * @LastEditTime: 2021-12-15 13:24:43
 * @FilePath: \C-Plus-Plus-Learning\模拟笔记本\main.c
 */
#include <conio.h> //用于getch（）
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
    init();
    /*load_desktop();//直接进入桌面
    if_start = 1;
    if_into_desktop = 1;*/
    while (1)
    {                  //主循环
        flag = move(); //move提取读取的键盘按键并判断类型
        switch (flag)
        {
        case 0:
            break; //暂无效果的按键
        case 1:
            put_letter_to_computer(letter);
            break; //返回字符型按键给电脑
        case 2:
            put_function_to_computer(function);
            break; //返回功能型按键给电脑
        }
    }
    getchar();
}