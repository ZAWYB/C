                                                //第一章初识C语言
/*编程练习1.13（16）（5）*/
//1.定义目标程序：将英寸转换成厘米。
/*2.设计程序：提示用户输入需要转化的英寸值。
               用户输入需要转换的英寸值。
               程序读取用户输入的英寸值。
               程序通过 1 = 2.54cm 的公式，将英寸转换成厘米
               反馈结果
               等待用户下一次输入*/
/*
 #include <stdio.h>
int main(void)
{
    float  cent = 0;
    float  inch = 0;


    printf("Please enter the required conversion to inches:___");

    scanf("%f",&inch);

    cent = inch * 2.54;

    printf("The inch %0.2f convert cent is %0.2f",inch,cent);

    return 0;

}
*/



                                                    //第二章初识C语言
            //程序清单2.1 简单的C语言程序示例
/*
#include <stdio.h>          //预处理指令，把stdio.h文件中的所有内容都输入到该行所在的位置。（“拷贝——粘贴”）
int main(void)   //main() 函数是整个可执行函数的入口。一个程序只能有一个。“()”的作用：用于识别main()是一个函数。
{   //函数体的开始
    int num;    //声明 此处num是一个标识符，也就是一个变量。
    num = 1;    //赋值

    printf("I am a simple\n");  //printf()是一个标准的输出函数.
    printf("computer\n");
    printf("My favorite number is %d because it is first",num); //%d相当于一个占位符，用于指明输出num的值。

    return 0;
}   //函数体的结束
*/

/*
            //程序清单2.3 一个程序包含两个函数，一个main函数，一个自己创建。
#include <stdio.h>
void butler(void);
int main() {

    printf("I will summon the butler function.\n");

    butler();

    printf("Yes,Bring me some tea and writeable DVDS.\n");


    return 0;
}

void butler()
{
    printf("You rang,sir\n");
}

*/



