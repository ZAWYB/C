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

            //2.21程序练习
/*
1。
#include <stdio.h>
int main(void) {
    printf("Gustav Mahler\n");
    printf("Gustav\n");
    printf("Mahler\n");
    printf("Gustav Mahler\n");

    return 0;
}
*/

/*
//2.
#include <stdio.h>
int main(void) {
    printf("Dong ,huebi");

    return 0;
}
*/

/*
//3.
#include<stdio.h>
int main(void) {
    int age;
    int year;

    scanf("%d",&age);

    printf("%d",365*age);


    return 0;
}
*/

/*
//4.
#include <stdio.h>
void jolly(void);
void deny(void);
int main(void)
{
    jolly();
    jolly();
    jolly();

    deny();

    return 0;

}
void jolly(void) {
    printf("jolly\n");
}

void deny(void) {
    printf("deny\n");
}
*/

/*
//5.
#include <stdio.h>

void br(void);
void ic(void);
int main(void) {

    br();
    ic();
    printf("B,R");

    return 0;

}
void br(void) {

    printf("B\n");
}

void ic(void) {

    printf("R\n");
}
*/

/*
//6.
#include <stdio.h>
int main(void) {
    int t = 10;

    printf("%d,%d,%d",t,t*2,t*t);


    return 0;

}
*/


/*
//7.
#include <stdio.h>

void sli(void);
int main(void) {
    sli();sli();sli();
    printf("\n");
    sli();sli();
    printf("\n");
    sli();
    printf("\n");

   return 0;
}
void sli(void) {

    printf("Smile!");
}
*/

/*
//8.
#include<stdio.h>
void one_three(void);
void two(void);
int main(void) {

    printf("starting now:\n");
    one_three();

    printf("done!");


 return 0;
}
void one_three(void) {
    printf("one\n");

    two();

    printf("\n");

    printf("three\n");

}

void two(void)
{
    printf("two");
}

*/