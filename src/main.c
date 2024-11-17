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

                            //第三章 数据与C
/*
//程序清单 3.1
#include <stdio.h>
int main(void) {
    float weight; //你的体重
    float value;  //相当重量的白金价值

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter you weight in pounds");

    scanf("%f",&weight); //获取用户输入

    value = weight * 1700 * 14.533; //把身高转换成价值

    printf("Your weight in platinum is worth $%.2f.\n",value);
    printf("You are easily worth that! If platinum prices drop,\n");

    return 0;
}
*/

/*
//程序清单3.3 以十进制，八进制，十六进制打印十进制数100
#include<stdio.h>
int main(void) {
    int x = 100;

    printf("dec = %d,octal = %o,hex = %x\n",x,x,x);
    printf("dec = %d,octal = %#o,hex = %#x\n",x,x,x);

    return 0;
}
*/

/*
//打印基本数据类型的大小
#include<stdio.h>
int main(void) {

    //整形
    printf("char = %zd\n",sizeof(char));
    printf("int = %zd\n",sizeof(int));
    printf("long = %zd\n",sizeof(long));
    printf("long long = %zd\n",sizeof(long long));

    //浮点型
    printf("float = %zd\n",sizeof(float));
    printf("double = %zd\n",sizeof(double));
    printf("long double = %zd\n",sizeof(long double));

    return 0;
}
*/

/*
//程序清单3.10 使用转义序列
#include <stdio.h>

int main(void) {
    float salary = 0;

    printf("\aEnter your desired monthly salary: $_____");
    printf("\b\b\b\b\b"); // 退格到需要输入的位置

    scanf("%f", &salary);

    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGREE!\n");

    return 0;
}
*/

                                                    //3.11编程练习
/*
//1.关于系统如何处理整数上溢，浮点数上溢，下溢。
#include <stdio.h>
#include <float.h>
#include <limits.h>

int main(void) {
    int big_int = 2147483647; //最大有符号int

    float big_float = 3.4e38; //最大float

    float small_float = 10.0/3; //最小float

    printf("big_int = %d\n",big_int+1);
    printf("big_float = %f\n",big_float*10);

    printf("big float %f\n",small_float);
    printf("max float = %f\n",FLT_MAX);
    printf("max int  = %d\n",INT_MAX);

    return 0;
}
*/

/*
//2.
#include<stdio.h>
int main(void) {
    int number;

    scanf("%d",&number);

    printf("%c",number);

     return 0;
 }
*/

/*
//3.
#include <stdio.h>
int main(void) {

    printf("\a");
    printf("S\n");
    printf("BY");

    return 0;
}
*/

/*
//4.
#include<stdio.h>
int main(void) {
    float number;

    printf("Enter a float_point value:");
    scanf("%f",&number);

    printf("fixed_point notation:%.6f\n",number);
    printf("exponential notation:%e\n",number);

    printf("p notation: %a\n",number);

    return 0;

}
*/

                                //第四章
/*
//4.2使用不同类型的字符串
#include<stdio.h>
#define P "sssssss"
int main(void) {
   char ch[40];

    printf("What is your name?\n");

    scanf("%s",ch);

    printf("%s,%s",ch,P);


    return 0;

}
*/

/*
#include<stdio.h>
int main(void) {


    printf("%c",'\41');

    return 0;
}
*/

/*
#include<stdio.h>
int main(void) {
    char x[20];
    char m[20];

    printf("Please input your first name:");
    scanf("%s",x);

    printf("Please input your last name:");
    scanf("%s",m);

    printf("%s,%s",m,x);

    return 0;

}
*/

/*
#include<stdio.h>
#include<string.h>
int main(void) {
    char name[50];
    int with ;

    printf("PLease enter your name:");
    scanf("%s",name);

    with= strlen(name);

    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("\"%*s\"\n",(with+3),name);


    return 0;

}
*/

/*
//3.
#include<stdio.h>
int main(void) {
    float x;

    printf("Enter a number:");

    scanf("%f",&x);

    printf("小数：%.1f,指数：%.1e\n",x,x);
    printf("小数：%+2.3f,指数：%.3E",x,x);

    return 0;

}
*/

/*
#include <stdio.h>
#define YC 12
int main(void) {

    float tall;

    printf("Please enter your tall:");

    scanf("%f",&tall);

    printf("shengao:%.3f",tall/YC);

    return 0;
}
*/

/*
#include <stdio.h>
int main(void) {

    float speed;
    float size;
    float time;

    printf("enter speed:");
    scanf("%f",&speed);

    printf("enter size；");
    scanf("%f",&size);

    time = (size*8)/speed;
    printf("time = %.2f",time);

    return 0;

}
*/

/*
#include<stdio.h>
#include<string.h>
int main(void) {
    char name_m[20];
    char name_x[20];



     printf("enter name_m");
    scanf("%s",name_m);




    printf("enter name_x");
    scanf("%s",name_x);

    printf("%s %s\n",name_x,name_m);
    printf("%*d,%*d",strlen(name_x),strlen(name_x),strlen(name_m),strlen(name_m));



    return 0;
}
*/

/*
#include<stdio.h>
#define MIN 60
int main(void) {

    int input;
    int hour;
    int minute;
    printf("enter minute:");
    scanf("%d",&input);


    while(input>0)
        {
        hour = input/MIN;
        minute = input% MIN;
        printf("%d,%d",hour,minute);

        scanf("%d",&input);
    }



    return 0;w
}
*/

/*
#include<stdio.h>
#define MIN_PER_HOU 60
int main(int argc,char argv[]) {
    int hours,minutes,input;

    printf("CONVERT MINUTE TO HOURS!\n");
    printf("PLEASE INPUT THE NUMBER OF MINUTE(<= 0 TO QUIT):");
    scanf("%d",&input);
    while(input>0) {

        hours = input/MIN_PER_HOU;
        minutes = input%MIN_PER_HOU;

        printf("CONVERT TO %d HOUR AND %d MINTUES\n",hours,minutes);

        printf("PLEASE CONTINUE INPUT THE NUMBER OF MINUTES(<= 0 TO QUIT):");
        scanf("%d",&input);
    }

    printf("PROGRAM EXIT!\n");
}
*/

/*
#include<stdio.h>
int main(void) {
    int number= 0;
    int max_number;

    printf("enter number:");
    scanf("%d",&max_number);

    while(number++<11) {

        printf("%d\n",max_number++);
    }

    return 0;
}
*/

/*3.
#include<stdio.h>

#define R 7
int main(void) {
    int input;
    int week = 0;
    int daily = 0;

    printf("enter input:");

    scanf("%d",&input);

    while(input>0) {
        week = input/R;
        daily = input%R;

        printf("week = %d,daily = %d",week,daily);

        scanf("%d",&input);
    }

    return 0;

}
*/

/*
#include<stdio.h>
int main(void) {
    int sum =0;
    int count;

    printf("enter count");
    scanf("%d",&count);

    while(count>0) {

        sum = sum + count*count;
        count--;
    }

    printf("total = %d",sum);

    return 0;

}
*/

/*
#include<stdio.h>
int double_t(int n);
int main(void) {
    int n;

    printf("enter n:");
    scanf("%d",&n);
    double_t(n);
    while(n>0) {

        printf("%d的次方为%d\n",n,double_t(n));

        scanf("%d",&n);
    }



    return 0;

}

int double_t(int n) {
    int t;
    t = n*n*n;

    return t;
}
*/

/*
#include<stdio.h>

int main(void) {
    int number_frist; //求模运算符第一运算对象。
    int number_second;//求模运算符第二运算对象。
    int number_result ; //函数，计算两数%结果。


    printf("enter number_second:");
    scanf("%d",&number_second);
    while (number_second == 0) {
        printf("number_second cannot be zero. Please enter again: ");
        scanf("%d", &number_second);
    }

    printf("enter number_frist:");
    scanf("%d",&number_frist);

    while(number_frist>0) {

        number_result = number_frist % number_second;

        printf("number_result = %d\n",number_result);

        printf("enter number_frist:");

        scanf("%d",&number_frist);

    }

    return 0;
}
*/


#include<stdio.h>
void Temperatures(double tem_hua);
int main(void) {
    double input;

    printf("enter tem_hua:");


     while (scanf("%lf", &input) == 1 && input>0 ) {
        Temperatures(input);
        printf("q to quit");

    }
    /*while (input>0 ) {
        Temperatures(input);
        printf("q to quit\n");
         printf("enter tem_hua:");
        scanf("%lf",&input);

    }*/

    return 0;

}
void Temperatures(double tem_hua) {
    double tem_she;
    double tem_kai;

    tem_she = 5.0/9.0*(tem_hua - 32);
    tem_kai = tem_she + 273.16;

    printf("tem_hua = %.2f,tem_she = %.2f,tem_kai = %.2f\n",tem_hua,tem_she,tem_kai);


}


/*
//优化
#include <stdio.h>
void Temperatures(double tem_hua);

int main(void) {
    double input;
    char buffer[100]; // 存储用户输入

    printf("Enter temperature in Fahrenheit (type 'q' to quit): ");
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // 检查是否输入了 'q'
        if (buffer[0] == 'q' || buffer[0] == 'Q') {
            break;
        }

        // 尝试将输入转换为浮点数
        if (sscanf(buffer, "%lf", &input) == 1 && input >= 0) {
            Temperatures(input);
        } else {
            printf("Invalid input. Please enter a valid number or 'q' to quit: ");
        }

        printf("Enter another temperature (type 'q' to quit): ");
    }

    printf("Program exited.\n");
    return 0;
}

void Temperatures(double tem_hua) {
    double tem_she; // 摄氏温度
    double tem_kai; // 开尔文温度

    tem_she = 5.0 / 9.0 * (tem_hua - 32);
    tem_kai = tem_she + 273.16;

    printf("Fahrenheit: %.2f, Celsius: %.2f, Kelvin: %.2f\n", tem_hua, tem_she, tem_kai);
}
*/