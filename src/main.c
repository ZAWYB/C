// #include <stdio.h>
//
// int main(void) {
//     printf("Hello, World!\n");
//     return 0;
// }
// #include <stdio.h>

// int main(void) {
//     printf("Hello, World!\n");
//     return 0;
// }
//#define _CRT_SECURE_NO_WARNINGS
//程序清单2.1 frist.c 程序
//#include <stdio.h>
//int main(void)
//{
//	int num;
//	num = 1;
//
//	printf("I am a simple\n");
//	printf("computer.\n");
//	printf("My favorite number is %d because it is first.\n", num);
//
//	return 0;
//}

//#include <stdio.h>
//int main(void)
//{
//	int feet, fathoms;
//
//	fathoms = 2;
//	feet = 6 * fathoms;
//
//	printf("There are %d feet in %d fathoms!\n", feet, fathoms);
//	printf("Yes, I said %d feet!\n", feet);
//
//	return 0;
//}

//程序清单2.3 two_func.c
/*一个文件夹包含两个函数*/
//#include <stdio.h>
//void butler(void);
//int main(void)
//{
//	printf("I will summon the bulter function.\n");
//	butler();
//	printf("Yes. Bring me some tea and writeable DVDS.\n");
//
//	return 0;
//
//}
//void butler(void)
//{
//
//	printf("You rang,sir.\n");
//}

//#include <stdio.h>
//int main(void)
//{
//	float weight;
//	float value;
//
//	printf("Are you worth your weight in platinum?\n");
//	printf("Let's check it out.\n");
//	printf("Please enter your weight in poundes: ");
//
//	scanf("%f", &weight);
//
//	value = 1700.0 * weight * 14.5833;
//
//	printf("Your weight in platinum id=s worth $%.2f.\n", value);
//	printf("You are easily worth that! If platinum prices drop,\n");
//	printf("eat more to main your value.\n");
//
//	return 0;
//
//}


//以十进制，八进制，十六进制打印十进制数100
//#include<stdio.h>
//int main(void)
//{
//	int x = 100;
//
//
//	printf("dec = %d; oceal = %o hex= %x\n", x, x, x);
//	printf("dec = %d; oceal = %#o hex= %#x\n", x, x, x);
//
//
//	return 0;
//

//
//#include <stdio.h>
//int main(void)
//{
//	unsigned int un = 3000000000;
//	short end = 200;
//	long big = 65537;
//	long long verybig = 12345678908642;
//
//
//	printf("un= %u and not %d\n", un, un);
//	printf("end= %hd and %d\n", end, end);
//	printf("big = %ld and not %hd\n", big, big);
//	printf("verybig = %lld and not %ld\n", verybig, verybig);
//
//
//	printf("int size =%d\n", sizeof(int));
//
//	return 0;
//
//}

//程序清单3.7 showf_pt.c程序
//#include <stdio.h>
//int main(void)
//{
//
//	float aboat = 32000.0;//32000.0存储的是double类型，可能存在精度丢失，可改为32000.0f;
//	double abet = 2.14e9;
//	long double dip = 5.32e-5L;//C99
//	long long age = 33LL;
//
//	printf("%f can be written %e\n", aboat, aboat);
//	printf("And it's %e in hexadecimal,power of 2 notation\n", aboat);
//	printf("%f can be written %e \n", abet, abet);
//	printf("%Lf can be weiteen %Le\n", dip, dip);
//
//
//	return 0;
//}


//浮点数涉入错误
//#include <stdio.h>
//int main(void)
//{
//	float a, b;
//
//	a = 2.0e20 + 1;
//	b = a - 2.0e20;
//
//	printf("%f\n", b);
//
//	return 0;
//
//}

//程序清单3.10 escape.c程序
//#include <stdio.h>
//int main(void)
//{
//	float salary;
//
//	printf("\aEnter your desired monthly salary:");
//	printf("$_____\b\b\b\b\b");
//	scanf("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
//	printf("\rgee!\n");
//
//		return 0;
//}


//程序清单4.1 talkback.c  演示与用户交互
//#include <stdio.h>
//#include <string.h>
//#define DENSITY 62.4
//int main(void)
//{
//	float weight, volume;
//	int size, letters;
//
//	char name[40];
//
//	printf("Hi,What's your first name?\n");
//	scanf("%s", &name);
//
//	printf("%s,What's your weight in pounds?\n", name);
//	scanf("%f", &weight);
//
//	size = sizeof(name);
//	letters  = strlen(name);
//	volume = weight / DENSITY;
//
//	printf("Well, %s, your volume is %2.2f cubic feet.\n",name,volume);
//	printf("Also your first name has %d letters,\n", letters);
//	printf("and we have %d bytes to store it.\n", size);
//
//	return 0;
//}


//程序清单4.5 defines.c 程序
//使用limit.h和float头文件中定义的明示常量
//#include <stdio.h>
//#include <limits.h>
//#include <float.h>
//int main(void)
//{
//	printf("Some number limits foor this systhem:\n");
//	printf("Biggest int : %d\n", INT_MAX);
//	printf("Smallest long long: %lld\n", LLONG_MIN);
//	printf("One byte = %d bits on this system.\n", CHAR_BIT);
//	printf("Largest  double: % e\n", DBL_MAX);
//	printf("Smallest normal  float: %e\n", FLT_MIN);
//	printf("float precision = %d digits\n", FLT_DIG);
//	printf("float espilon = %e\n", FLT_EPSILON);
//
//	return 0;
//}


//程序清单4.7 width.c程序
//#include<stdio.h>
//#define PAGES 959
//int main(void)
//{
//	printf("*%d*\n", PAGES);
//	printf("*%2d*\n", PAGES);
//	printf("*%10d*\n", PAGES);
//	printf("*%-10d*\n", PAGES);
//
//	return 0;
//}

//程序清单4.8 floats.c程序
//
//#include <stdio.h>
//int main(void)
//{
//	const double RENT = 3852.99;

//}


////程序清单4.15 input.c
////input.c 何时使用&
//#include <stdio.h>
//int main(void)
//{
//	int age;
//	float assets;
//
//	char pet[30];
//
//	printf("Enter your age, assets,and favorite pet.\n");
//
//	scanf("%d %f", &age, &assets);//attention 参数是什么，就要输入什么 包括中间的%d和%f中间的空格。
//
//	scanf("%s", pet);
//
//	printf("%d $%.2f %s\n", age,assets, pet);
//
//	return 0;
//}

//程序清单5.11
//#include <stdio.h>
//#define ADJUST 7.31
//int main(void)
//{
//	const double SCALE = 0.333;
//	double shoe, foot;
//
//	printf("shoe size (men's)	foot length\n");
//	shoe = 3.0;
//
//	while (shoe < 18.5)
//	{
//		foot = SCALE * shoe + ADJUST;
//		printf("%10.1f %15.2f inches\n", shoe, foot);
//		shoe = shoe + 1.0;
//	}
//
//	printf("If the shoe fits,wear it.\n");
//
//	return 0;
//
//}


// #include <stdio.h>
// int main(void)
// {
// 	int num = 0;
// 	int total = 0;
//
//
// 	while (num++ < 100)
// 	{
// 		total = total + num;
//
//
// 	}
// 	printf("1+2+3+...+100=%d", total);
//
// 	return 0;
// }

//程序清单5.4 计算1-20平方
//#include<stdio.h>
//int main(void)
//{
//	int num = 1;
//
//	while (num<=20)
//	{
//		printf("%4d %6d\n", num, num * num);
//		num = num + 1;
//	}
//
//	return 0;
//}


//程序清单5.5 wheat.c程序 指数增长
//#include<stdio.h>
//#define SQUARES 64
//int main(void)
//{
//	const double CROP = 2E16;
//
//	double current;//当前格子中小麦粒数
//	double total;
//
//	int count = 1;//表示循环到几次
//
//	printf("square		grains		total		");
//	printf("fraction of \n");
//	printf("			added		grains		");
//	printf("world total\n");
//
//	current = 1.0;
//	total = 1.0;
//
//	printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//			total, total / CROP);
//
//	while (count < SQUARES)
//	{
//		count = count + 1;
//		current = 2.0 * current;
//		total = total + current;
//		printf("%4d %13.2e %12.2e %12.2e\n", count, current,
//				total, total / CROP);
//
//	}
//	printf("That's all.\n");
//
//	return 0;
//}

//程序清单5.6 divide.c程序
//#include<stdio.h>
//int main(void)
//{
//	printf("integer division: 5/4 is %d \n", 5 / 4);
//	printf("integer division: 6/3 is %d \n", 6 / 3);
//	printf("integer division: 7/4 is %d \n", 7 / 4);
//
//	printf("floating division: 7./4. is %1.2f\n", 7.0/ 4.0);
//	printf("mixed  division: 7./4. is %1.2f\n", 7.0 / 4);
//
//	return 0;
//}

//程序清单5.7 rules.c程序
//#include<stdio.h>
//int main(void)
//{
//	int top;
//	int score;
//
//	top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
//
//	printf("top= %d,score= %d\n", top, score);
//
//	return 0;
//}

//程序清单5.8  sizeof.c程序
//#include<stdio.h>
//int main(void)
//{
//	int n = 0;
//	size_t intsize;
//
//	intsize = sizeof(int);
//
//	printf("n= %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof (n), intsize);
//
//	return 0;
//}

//程序清单5.9 min_sec.c程序  把秒数转换成分和秒
// #include<stdio.h>
// #define SEC_PER_MIN  60				//一分钟60秒
// int main(void)
// {
// 	int sec, min, left;
//
// 	printf("Convert seconds to minutes and seconds!\n");
// 	printf("Enter the number of seconds (<=0 to quit): \n ");
//
// 	scanf("%d", &sec);				//读取秒数
//
// 	while (sec > 0)
// 	{
// 		min = sec / SEC_PER_MIN;	//截断分钟数
// 		left = sec % SEC_PER_MIN;	//截断秒数
//
// 		printf("%d seconds is %d minutes, %d seconds!\n",sec,min,left);
// 		printf("Enter next value (<=0 toquit): \n");
//
// 		scanf ("%d", &sec);
//
// 	}
//
// 	printf("Done!\n");
//
// 	return 0;
// }

// #include <stdio.h>
//
// int main(void)
// {
//     int ultra = 0;
//     int super = 0;
//
//     while(super<5)
//     {
//         super++;
//         ++ultra;
//         printf("super = %d, ultra = %d \n",super,ultra);
//     }
//
//     return 0;
// }

//程序清单5.11 post_pre.c程序 前缀和后缀
// #include <stdio.h>
//
// int main(void)
// {
//     int a = 1;
//     int b = 1;
//     int a_post,per_b;
//
//     a_post = a++;
//     per_b = ++b;
//
//     printf("a a_post b per_b \n");
//     printf("%1d %5d %5d %5d\n", a, a_post, b, per_b);
//
//     return 0;
// }


//程序清单5.14 convert.c程序  自动类型转换
//#include <stdio.h>

// int main(void)
// {
//     char ch;
//     int i;
//     float fl;
//
//     fl = i = ch = 'C';
//     printf("ch = %c ,i = %d ,fl = %2.2f\n", ch, i, fl);
//
//     ch = ch + 1;
//     i = fl + 2 * ch;
//     fl = 2.0 * ch + i;
//     printf("ch = %c ,i = %d ,fl = %2.2f\n", ch, i, fl);
//
//     ch = 1107;
//     printf("Now ch = %c\n", ch);
//
//     ch = 80.89;
//     printf("Now ch = %c\n", ch);
//
//     return 0;
// }

//5.6带参数的函数
// #include <stdio.h>
//
// void pound(int n); //ANSI 函数原型声明  强制转换
// int main(void)
// {
//     int times = 5;;
//     char ch = '!';
//     float f = 6.0;
//
//     pound(times);
//     pound(ch);
//     pound(f);
//
//
//     return 0;
// }
//
// void pound(int n)       /*定义函数 形式参数n的范围，只在pound内有效,表示函数只接受整型参数，int n称为形式参数*/
// {
//     while (n-- > 0)
//     {
//         printf("#");
//     }
//
//     printf("\n");
// }

//程序清单6.1 summing.c程序
//#include <stdio.h>

// int main(void)
// {
//     long num;
//     long sum = 0l;
//
//     int status;
//
//     printf("Please enter an integer to be summed");
//     printf("(q to quit):");
//
//     status = scanf("%ld", &num);    //scanf的返回值是读取的字符数，如果读取成功，返回值是1，否则返回0
//
//     while (status == 1)
//     {
//         sum = sum + num;
//         printf("Please enter next integer (q to quit):");
//
//         status = scanf("%ld", &num);
//     }
//
//     printf("Those integer sum to %ld.\n.", sum);
//
//     return 0;
// }


//6.1改
//#include <stdio.h>

// int main(void)
// {
//     long num;
//     long sum = 0l;
//
//     printf("Please enter an integer to be summed (q to quit):");
//
//     while (scanf("%ld", &num) == 1)
//     {
//         sum = sum + num;
//         printf("Please enter next integer (q to quit):");
//     }
//
//     printf("Those integers sum to %ld.\n", sum);
//
//     return 0;
// }

//程序清单6.5 cmpflt.c程序 --浮点数的比较
//#include <stdio.h>
//#include<math.h>
// int main(void)
// {
//     const double ANSWER =3.14159;
//     double response;
//
//     printf("What is the value of pi?\n");
//     scanf("%lf", &response);
//
//     while(fabs(response - ANSWER)>0.0001)
//     {
//         printf("Try again!\n");
//         scanf("%lf",&response);
//
//     }
//     printf("Close enough!\n");
//
//
//     return 0;
// }

//程序清单6.9 boolean.c程序 --布尔值
//#include <stdio.h>

// int main(void)
// {
//     long num;
//     long sum = 0l;
//     _Bool input_is_good;
//
//     printf("Please enter an integer to be summed (q to quit):");
//     input_is_good = (scanf("%ld",&num) == 1);
//
//     while (input_is_good)
//     {
//         sum = sum + num;
//         printf("Please enter next integer (q to quit):");
//         input_is_good = (scanf("%ld",&num) == 1);
//     }
//
//     printf("Those integers sum to %ld.\n", sum);
//
//     return 0;
// }

//程序清单6.11 sweetie.2程序 --使用for循环的计数循环
/*
 for 循环的执行步骤
    1.第一步：第一个表达式进行初始化操作，并且只进行一次。
    2.第二步：判断条件进行判断，如果为真，则执行循环体，否则跳出循环。
    3.第三步：执行循环体中的语句
    4.第四步：执行第三个表达式
    5.第五步：回到第二步，继续判断条件是否成立，如果成立，则执行循环体，否则跳出循环。
 */
//#include <stdio.h>

// int main(void)
// {
//     const int NUMBER = 22;
//     int count;
//     for (count = 1;count <= NUMBER; count++）
//     {
//         printf("Be my Valentine!\n");
//     }
//
//     return 0;
// }

//程序清单6.12 for_cube.c --使用for循环创建一个立方表
// #include <stdio.h>
// int main(void)
// {
//     int num;
//
//     printf("    n     n cubed\n");
//
//     for(num = 1; num<=6; ++num)
//     {
//         printf("%5d %5d\n",num,num*num*num);
//     }
//
//     return 0;
//
// }

// 程序清单6.13 post.c程序 --一类邮资 逗号运算符
// #include <stdio.h>
// int main(void)
// {
//     const int FIRST_OZ = 46;
//     const int NEXT_OZ = 20;
//     int ounces,cost;
//
//     printf(" ounces cost\n");
//
//     for(ounces = 1,cost= FIRST_OZ; ounces <=16; ounces++,cost +=NEXT_OZ)
//     {
//         printf("%5d  $%4.2f\n",ounces,cost /100.0);
//     }
//
//     return 0;
// }

//程序清单6.14 zeno.c程序 --求序列的和
// #include <stdio.h>
// int main(void)
// {
//     int t_ct;   //项计数
//     double time, power_of_2;
//     int limit;
//
//     printf("Enter the number of term you want: ");
//     scanf("%d",&limit);
//
//     for (time = 0,power_of_2 =1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *=2.0)
//     {
//         time +=1.0 /power_of_2;
//         printf("time = %f when terms = %d.\n",time,t_ct);
//
//     }
//
//     return 0;
// }

//程序清单6.15 do_while.c程序
// int main(void)
// {
//     const int secret_code = 13;
//     int code_entered;
//     do
//     {   /*循环体中的语句，至少循环一次*/
//         printf("To enter the triskaidekaphobia therapy club,\n");
//         printf("please enter the secret code number: ");
//         scanf("%d",&code_entered);
//     }   while (code_entered != secret_code);
//
//     printf("Congratulations, you have entered the therapy club!\n");
//
//    return 0;
// }

//程序清单6.15 do_while.c程序（等价的while循环）
// int main(void)
// {
//     const int secret_code = 13;
//     int code_entered;
//
//     printf("To enter the triskaidekaphobia therapy club,\n");
//     printf("please enter the secret code number: ");
//     scanf("%d", &code_entered);
//
//     while(code_entered != secret_code)
//     {
//         printf("To enter the triskaidekaphobia therapy club");
//         printf(", please enter the secret code number: ");
//         scanf("%d", &code_entered);
//     }
//
//     printf("Congratulations, you have entered the therapy club!\n");
//
//     return 0;
// }

//程序清单6.17 rowsl.c程序 --使用嵌套循环
// #include <stdio.h>
// #define ROWS 6
// #define CHARS 10
// int main(void)
// {
//     int row;
//     char ch;
//
//     for (row = 0; row<ROWS; row++)
//     {
//         for (ch= 'A';ch< ('A'+CHARS); ch++)
//            printf("%c",ch);
//         printf("\n");
//
//     }
//
//
//     return 0;
//
// }

//程序清单6.19 scores_in.c程序 --使用for循环处理数组
// #include <stdio.h>
// #define SIZE 10
// #define PAR 72
//
// int main(void)
// {
//     int index;//角标
//     int score[SIZE];
//
//     int sum = 0;    //总分
//
//     float average;  //平均分
//
//     printf("Enter %d golf scores:\n",SIZE);
//     for (index = 0; index < SIZE; index++)
//     {
//         scanf("%d", &score[index]); //读取分数，并存到数组对应的元素中。
//     }   //此时，数组中的每一个元素都存储了一个分数。
//         //数据存到数组中时，需要取地址符&.
//
//     printf("The scores read in are as follows:\n");
//     for (index = 0; index < SIZE; index++)
//     {
//         printf("%5d", score[index]);    //验证读取的分数。
//     }                                   //通过数组名【】角标就能取出数组中对应角标元素中的值。
//                                         //从数组中取出元素中的值，是通过数组名【】角标来实现的。不需要取地址符&.
//     printf("\n");
//
//     for (index = 0; index < SIZE; index++)
//     {
//         sum += score[index];
//     }
//
//     average = (float)sum / SIZE;
//
//     printf("Sum of scores = %d,average = %.2f\n",sum,average);
//     printf("That's  a handicap of %.0f.\n",average - PAR);
//
//     return  0;
// }

//程序清单6.20 power.c程序 --计算数的整次幂
// #include <stdio.h>
// double power(double n, int p);
//
// int main(void)
// {
//     double x;   //底数
//     double xpow;    //接受函数返回结果
//
//     int exp;
//
//     printf("Enter a number and the positive integer power");
//     printf(" to which\nthe number will be raised. Enter q");
//     printf(" to quit.\n");
//
//     while(scanf("%lf%d",&x,&exp) == 2)
//     {
//         xpow = power(x,exp);    //调用power函数，并返回函数的结果给到xpow.
//         printf("%.3g to the power %d is %.5g\n",x,exp,xpow);
//         printf("Enter next pair of number or q to quit.\n");
//
//     }
//     printf("Hope you enjoyed this power trip --bye!\n");
//
//     return 0;
// }
// double power(double n,int p)
// {
//     double pow = 1;
//
//     int i;
//
//     for(i= 1; i<= p; i++)
//     {
//
//         pow*=n;
//     }
//
//     return pow;
// }

//程序清单7.1 colddays.c程序 --找出0℃以下的天数占总天数的百分比
// #include <stdio.h>
//
// int main(void)
// {
//     const int FREEZING = 0;     //零度
//
//     float temperature;
//
//     int cold_days = 0;
//     int all_days = 0;
//
//     printf("Enter the list of daily  low temperatures.\n ");
//     printf("Use Celsius,and enter qto quit.\n");
//
//     while (scanf("%f", &temperature) == 1)
//     {
//         all_days++; //对所有天数进行累加
//
//         if (temperature < FREEZING)
//         {
//             cold_days++;
//         }
//     }
//
//     if(all_days != 0)
//     {
//
//         printf("%d days toatl: %.1f%% of were below freezing.\n",
//             all_days, 100.0 *(float)cold_days / all_days);
//     }
//
//     else
//     {
//         printf("No data entered!\n");
//     }
//
//     return 0;
// }

//程序清单7.2 cypherl.c程序 --更改输入，空格不变。
// #include <stdio.h>
// #define SPACE ' '
//
// int main(void)
// {
//     char ch;
//     ch = getchar();
//     while (ch != '\n')
//     {
//         if (ch == SPACE)
//         {
//             putchar(ch);
//         }
//
//         else
//         {
//             putchar(ch + 1);
//         }
//
//         ch = getchar();
//     }
//
//     putchar(ch);
//
//     return 0;
// }

//程序清单7.3 ctype.c程序 --使用ctype.h头文件
// #include <stdio.h>
// #include <ctype.h>
//
//
// int main(void)
// {
//     char ch;
//
//     while ((ch = getchar()) != '\n')
//     {
//         if (isalpha(ch))    //isalpha函数判断ch字符是否为字母。
//         {
//             putchar(ch+1);
//         }
//
//         else
//         {
//             putchar(ch);
//         }
//
//
//     }
//
//     putchar(ch);
//
//     return 0;
// }


// #include <stdio.h>
// #include <ctype.h>
//
// int main(void)
// {
//
//    printf("%c",tolower('A'));
//     return 0;
// }

//程序清单7.4 electic.c程序 --电费计算器
// #include <stdio.h>
// #define RATE1 0.13230
// #define RATE2 0.15040
// #define RATE3 0.30025
// #define RATE4 0.34025
//
// #define BREAK1 360.0
// #define BREAK2 468.0
// #define BREAK3 720.0
//
// #define BASE1 (RATE1 *BREAK1)
// #define BASE2 (BASE1+(RATE2 *(BREAK2 - BREAK1)))
// #define BASE3 (BASE2 + (RATE3*(BREAK3 - BREAK2)))
//
// int main(void)
// {
//     double kwh;
//     double bill;
//
//     printf("Please enter the  kwh used.\n");
//     scanf("%lf",&kwh);
//
//     if(kwh <= BREAK1)
//     {
//         bill = RATE1 * kwh;
//
//     }
//     else if (kwh <= BREAK2)
//     {
//         bill = BASE1+(RATE2 *(kwh- BREAK1));
//     }
//
//     else if (kwh <= BREAK3)
//     {
//         bill = BASE2 + (RATE3*(kwh - BREAK2));
//     }
//
//     else
//     {
//         bill = BASE3 + (RATE4*(kwh - BREAK3));
//     }
//
//     printf("The charge for %.1f kwh is $%1.2f.\n",kwh,bill);
//
//     return 0;
// }

//程序清单7.5   divisors.c程序 --使用if语句显示一个数的约数
// #include <stdio.h>
// #include <stdbool.h>
//
// int main(void)
// {
//     unsigned long num;
//     unsigned long div;
//     bool isPrime;
//
//     printf("Please enter an integer for analysis;");
//     printf("Enter q to quit.\n");
//
//     while (scanf("%lu", &num) == 1)
//     {
//         for (div = 2, isPrime = true; (div * div) <= num; div++)
//         {
//             if (num % div == 0)
//             {
//                 if (div * div != num)
//                 {
//                     printf("%lu is divisible by %lu and %lu.\n"
//                           , num, div, num / div);
//                 }
//
//                 else
//                 {
//                      printf("%lu is divisible by %lu.\n", num, div);
//                 }
//
//
//
//                 isPrime = false;
//             }
//         }
//
//         if (isPrime)
//         {
//             printf("%lu is prime.\n", num);
//         }
//
//         printf("Please enter anothor integer for analysis; ");
//         printf("Enter q to quit.\n");
//     }
//
//     printf("Bye.\n");
//
//     return 0;
// }

// 7.5改 模块化
//  #include<stdio.h>
//  #include<stdbool.h>
//
//  bool isPrime(long num);
//
//  int main(void)
//  {
//      unsigned long num;
//
//
//
//      printf("Please enter an integer for analysis;");
//      printf("Enter q to quit.\n");
//
//      while (scanf("%lu", &num) == 1)
//      {
//
//
//          if (isPrime(num))
//          {
//              printf("%lu is prime.\n", num);
//          }
//
//          printf("Please enter anothor integer for analysis; ");
//          printf("Enter q to quit.\n");
//      }
//
//      printf("Bye.\n");
//
//      return 0;
//  }
//
//  bool isPrime(long num)
//  {
//
//      bool isPrime;
//      unsigned long div;
//
//      for (div = 2, isPrime = true; (div * div) <= num; div++)
//      {
//          if (num % div == 0)
//          {
//              if (div * div != num)
//              {
//               printf("%lu is divisible by %lu and %lu.\n"
//                    , num, div, num / div);
//              }
//
//               else
//              {
//               printf("%lu is divisible by %lu.\n", num, div);
//               }
//
//          isPrime = false;
//          }
//      }
//      return  isPrime;
//  }


//程序清单7.6 chcount.c程序 --使用逻辑与运算符
// #include <stdio.h>
// #define PERIOD '.'
//
// int main(void)
// {
//     char ch;
//
//     int charCount = 0;
//
//     while ((ch = getchar()) != PERIOD)
//     {
//         if (ch != '"' && ch != '\'' )
//         {
//             charCount++;
//         }
//
//     }
//
//     printf("They are %d non-quote characters.\n",charCount);
//
//     return 0;
//
// }

//程序清单7.7 wordcnt.c程序 --统计字符数，单词数，行数。
// #include <stdio.h>
// #include <ctype.h>
// #include <stdbool.h>
//
// #define STOP '|'
//
// int main (void)
// {
//     char c;
//     char prev;
//
//     long n_chars = 0l;
//
//     int n_lines = 0;
//     int n_words = 0;
//     int p_lines = 0;
//
//     bool inword = false;
//
//     printf("Enter text to be analyzed (| to terminate ):\n");
//     prev = '\n';
//
//     while ((c= getchar()) != STOP)
//     {
//         n_chars++;
//
//         if (c == '\n')
//         {
//             n_lines++;
//         }
//
//         if (!isspace(c) && !inword)
//         {
//             inword = true;
//             n_words++;
//
//         }
//
//         if (isspace(c) && inword)
//         {
//             inword = false;
//         }
//
//         prev = c;
//     }
//
//     if (prev != '\n')
//     {
//         p_lines++;
//     }
//
//     printf("characters = %ld, words = %d, lines = %d,",
//             n_chars, n_words, n_lines);
//
//     printf("partial lines = %d\n",p_lines);
//
//     return 0;
//
// }

//程序清单7.8 paint.c程序 --使用条件运算符
// #include <stdio.h>
// #define COVRAGE 350
//
// int main(void)
// {
//     int sq_feet;
//     int cans;
//
//     printf("Enter number of square feet to be painted:\n");
//
//     while(scanf("%d",&sq_feet) == 1)
//     {
//         cans = sq_feet / COVRAGE;
//         cans += (sq_feet % COVRAGE == 0) ? 0 : 1;
//
//         printf("You need %d %s of paint.\n",cans,cans == 1 ? "can" : "cans");
//         printf("Enter next value (q to quit):\n");
//     }
//
//     return 0;
// }

//程序清单7.9 skippart.c程序 --使用countinue语句跳过部分代码
// #include <stdio.h>
// int main(void)
// {
//     const float MIN = 0.0f;
//     const float MAX = 100.0f;
//
//     float score;
//     float total = 0.0f;
//     int n = 0;
//     float min = MAX;
//     float max = MIN;
//
//     printf("Enter the first score (q to quit): ");
//     while (scanf("%f",&score) == 1)
//     {
//         if (score < MIN || score > MAX)
//         {
//             printf("%0.1f is an invalid. Try again: ",score);
//             continue;
//         }
//
//         printf("Accepting %0.1f:\n",score);
//         min = (score <min) ? score : min;
//         max = (score >max) ? score : max;
//         total += score;
//         n++;
//         printf("Enter next score (q to quit): ");
//
//     }
//
//     if(n>0)
//     {
//         printf("Average of %d scores is %0.1f.\n",n,total/n);
//         printf("Low = %0.1f, high = %0.1f.\n",min,max);
//     }
//
//     else
//     {
//         printf("No valid scoers were etered.\n");
//     }
//
//     return 0;
// }

//程序清单7.11 animais.c程序 --使用switch语句
// #include<stdio.h>
// #include <ctype.h>
//
// int main(void)
// {
//     char ch;
//
//     printf("Give me a letter of the alphabet, and I will give an animal name\n");
//     printf("beginning with that letter.\n");
//     printf("Please type in a letter; type # to end my act.\n");
//
//     while ((ch = getchar()) != '#')
//     {
//         if ('\n' == ch)
//             continue;
//
//         if (islower(ch))
//             switch (ch)
//             {
//             case 'a':
//                 printf("argali, a wild sheep of Asia\n");
//                 break;\
//
//             case 'b':
//                 printf("babirusa,a wild pig of Malay\n");
//                 break;
//
//             case 'c':
//                 printf("coati,racoonlike mammal\n");
//                 break;
//
//             case 'd':
//                 printf("dodo, a small bird of Africa\n");
//                 break;
//
//             case 'e':
//                 printf("elephant, a large mammal of Africa\n");
//                 break;
//
//             case 'f':
//                 printf("flamingo, a small bird of the Pacific\n");
//                 break;
//
//             dafault:
//                 printf("That's a stumper!\n");
//
//             }
//
//         else
//             printf("I recognize only lowercase letters.\n");
//
//         while (getchar() != '\n')
//             continue;
//         printf("Please type another letter or a #.\n");
//     }
//
//     printf("Bye!\n");
//
//     return 0;
// }


// #include <stdio.h>
// int main(void)
// {
//     char ch;
//
//     while((ch = getchar()) != '#')
//     {
//       putchar(ch);
//     }
//     return 0;
// }

            //程序清单8.2 echo_eof.c程序 --重复输入，直到文件结尾。
// #include <stdio.h>
// int main(void)
// {
//     int ch;
//
//     while ((ch = getchar()) != EOF)
//     {
//
//         putchar(ch);
//     }
//
//     return 0;
// }

            //程序清单8.3 file_eof.c程序 --打开一个文件并显示该文件
// #include <stdio.h>
// #include <stdlib.h>
// int main(void)
// {
//     int ch;
//     FILE * fp;
//     char fname[50];
//
//     printf("Enter the name of the file:");
//     scanf("%s",fname);
//
//     fp = fopen(fname,"r");
//
//     if(fp == NULL)
//     {
//         printf("Failed to open file.Bye.\n");
//         exit(1);
//
//     }
//
//     while((ch  = getc(fp)) != EOF)
//     {
//
//         putchar(ch);
//
//     }
//
//     fclose(fp);
//
//     return 0;
//
// }

            //程序清单8，4 guess.c程序 --猜数字游戏
// #include<stdio.h>
//  int main(void)
// {
//     int guess = 1;
//      char respones;
//
//     printf(" Pick an integer from 1 to 100. I will try to guess");
//     printf("it.\nRespond with a y if my guess is correct and with");
//     printf("an n if it wrong.\n");
//
//      while (getchar() != 'y')
//      {
//         if(respones =='n')
//         {
//          printf("Well,then,is it %d?\n",++guess);
//         }
//          else
//          {
//            printf("Sorry, I  understand only y or n.\n");
//          }
//
//          while (getchar() != '\n')//清空输入缓冲区中的字符，直到遇到换行符（\n）
//              continue;
//
//      }
//
//     printf("I knew I know do it!\n");
//
//
//      return 0;
//
//  }

            //程序清单8.5 showcharl.c程序 --有较大I/O问题的程序
// #include <stdio.h>
// void display(char cr,int lines,int width);
// int main(void)
// {
//     int ch;
//     int rows,cols;
//
//     printf("Enter a character and two intergers:\n");
//
//
//     //c 2 3 \n 循环检测到 c 2 3 后结束，\n还在缓冲区中，下次循环时会读到\n
//     while ((ch = getchar()) != '\n')
//     {
//
//          if(scanf("%d %d",&rows,&cols) != 2)
//          {
//              break;
//          }
//         display(ch,rows,cols);
//         while (getchar() != '\n') //过滤\n，保证程序的正确性
//         {
//             continue;
//         }
//         printf("Enter another character and two intergers;\n");
//         printf("Enter a newline to quit.\n");
//     }
//     printf("Bye.\n");
//
//     return 0;
// }
//
// void display(char cr,int lines,int width)
// {
//     int row,col;
//
//     for (row = 1; row <= lines; row++)
//     {
//         for (col = 1; col <= width; col++)
//         {
//             putchar(cr);
//         }
//
//         putchar('\n');
//     }
//
// }

            //程序清单9.1.1 lethead.c程序 --创建并使用简单函数
// #include <stdio.h>
//
// #define NAME "GIGATHNK, INC"
// #define ADDRESS "101 MEGABUCK PLAZA"
// #define PLACE "MEGAPOLIS, CA 94904"
// #define WIDTH 40
//
// void starbar(void);
//
// int main(void)
// {
//     starbar();
//
//     printf("%s\n",NAME);
//     printf("%s\n",ADDRESS);
//     printf("%s\n",PLACE);
//
//     starbar();
//
//     return 0;
//
// }
//
// void starbar(void)
// {
//     int count;
//
//     for(count = 1; count <= WIDTH; count++)
//     {
//         putchar('*');
//     }
//
//     putchar('\n');
// }

            //程序清单9.2 lethead2.c程序 --创建并使用带参数的函数
#include <stdio.h>
#include <string.h>

// #define NAME "GIGATHNK, INC"
// #define ADDRESS "101 MEGABUCK PLAZA"
// #define PLACE "MEGAPOLIS, CA 94904"
// #define WIDTH 40
// #define SPACE ' '
//
// void show_n_char(char ch,int num);
//
// int main(void)
// {
//     int space;
//     char border_char;
//
//     border_char = getchar();
//
//
//     while (getchar() != '\n')
//     {
//         continue;
//     }
//     show_n_char(border_char,WIDTH);
//     putchar('\n');
//    show_n_char(SPACE,12);
//     printf("%s\n",NAME);
//     space = (WIDTH - strlen(ADDRESS)) / 2;
//
//     show_n_char(SPACE,space);
//     printf("%s\n",ADDRESS);
//     show_n_char(SPACE,(WIDTH - strlen(PLACE)) / 2);
//
//     printf("%s\n",PLACE);
//     show_n_char(border_char,WIDTH);
//     putchar('\n');
//
//     return 0;
//
// }
//
// void show_n_char(char ch,int num)
// {
//     int count;
//
//     for(count = 1; count <= num; count++)
//     {
//         putchar(ch);
//     }
//
//
// }

            //程序清单9.6 recur.c程序 --递归演示
// #include <stdio.h>
//
// void up_and_down(int n);
//
// int main(void)
// {
//     up_and_down(1);
//     return 0;
// }
//
// void up_and_down(int n)
// {
//     printf("Level %d: n location %p\n",n,&n);
//
//     if(n<4)
//     {
//      up_and_down(n + 1);
//         printf("LEVEL %d: n location %p\n",n,&n);
//     }
// }

// long rfact(int n) {
//     long ans;
//
//     if (n>0)
//         ans = n * rfact(n-1)
//
//     else {
//         ans = 1;
//     }
//
//     return 0;
//
// }

// 递归调用的顺序解释：
// 1. 调用 rfact(3) --> 3 * rfact(2)
// 2. 调用 rfact(2) --> 2 * rfact(1)
// 3. 调用 rfact(1) --> 1 * rfact(0)
// 4. 调用 rfact(0) --> 返回 1（因为 n == 0）
// 返回过程：
// 5. 从 rfact(0) 返回 1 给 rfact(1) --> 返回 1 * 1 = 1
// 6. 从 rfact(1) 返回 1 给 rfact(2) --> 返回 2 * 1 = 2
// 7. 从 rfact(2) 返回 2 给 rfact(3) --> 返回 3 * 2 = 6
// 最终结果：rfact(3) 返回 6，即 3! 的结果


//程序清单9.4.5 使用头文件
//https://www.bilibili.com/video/BV1FP4y1u7ae/?p=18&spm_id_from=pageDriver&vd_source=da06173a72d1931f0f4e3ebc6dc82a1f

            //程序清单 9.12 locheck.c --查看变量被储存在何处
#include <stdio.h>

// void mikado(int);
//
// int main(void)
// {
//     int pooh = 2;
//     int bah = 5;
//
//     printf("In main(): pooh = %d and &pooh = %p\n",pooh,&pooh);
//     printf("In main(): bah = %d and &bah = %p\n",bah,&bah);
//
//     mikado(pooh);
//
//     return 0;
// }
//
// void mikado(int bah)
// {
//     int pooh = 10;
//
//     printf("In  mikado (),pooh = %d and &pooh = %p\n",pooh,&pooh);
//     printf("In  mikado (),bah = %d and &bah = %p\n",bah,&bah);
//
// }

            //程序清单 9.15 --使用指针解决交换函数的问题
#include <stdio.h>

// void interchange(int *u,int *v);
// int main(void)
// {
//     int x = 5;
//     int y = 10;
//
//     printf("Orriginally x = %d  and y = %d\n",x,y);
//
//     printf("%p\n",&x);
//
//     interchange(&x,&y);
//
//
//
//     printf("Now x = %d and y = %d\n",x,y);
//
//     return 0;
// }
//
// void interchange(int *u,int*y)
// {
//     int temp;
//
//     temp = *u;
//
//     *u = *y;
//
//     *y = temp;
// }

            //程序清单10.1 day_monl.c --打印每个月的天数
#include <stdio.h>

// #define MONTHS 12
// int main(void)
// {
//     const int days[MONTHS] = {31,28,31,30,31,30,31,31,30,31,30,31};
//
//     int index;
//
//
//
//     for (index = 0; index < MONTHS; index++)
//     {
//         printf("MONTH %2d has %2d days.\n",index + 1, days[index]);
//     }
//
//
// return 0;
//
// }

            //程序清单10.2 --未初始化数组的错误
// #include  <stdio.h>
//
// #define SIZE 4
//
// int main(void){
//     int no_data[SIZE] = {1,2,3,4};
//
//     int i;
//
//     printf("%2s%14s\n", "i", "no_data[i]");
//
//     for (i=0; i< 5;i++)
//     {
//         printf("%2d%14d\n",i,no_data[i]);
//     }
//
//
//     return 0;
//
// }

            //程序清单10.8 --指针地址
// #include <stdio.h>
// #define SIZE 4
// int main(void)
// {
//     short dates[SIZE];
//
//     short *pti;
//
//     short index;
//
//     double bills[SIZE];
//
//     double *ptf;
//
//     pti = dates;
//
//     ptf = bills;
//
//     printf("%23s %15s\n","short","double");
//
//     for (index = 0; index < SIZE; index++)
//     {
//         printf("pointers + %d: %10p %10p\n",index, pti + index,ptf + index);
//     }
//
//
//     return 0;
//
// }

                //程序清单10.10 --数组元素之和
#include <stdio.h>
// #define SIZE 10
// int sum(int ar[],int n);
// int main(void)
// {
//     int marbles[SIZE] = {20,10,5,39,4,16,19,26,31,30};
//     long answer;
//
//     answer = sum(marbles,SIZE);
//     printf("The total number of marbles is %ld.\n",answer);
//     printf("The size of marbles is %zd bytes.\n",sizeof(marbles));
//
//     return 0;
// }
//
// int sum(int ar[],int n)
// {
//     int i;
//     int total = 0;
//
//     for (i = 0; i < n; i++)
//     {
//         total += ar[i];
//     }
//
//     printf("The size of ar is %zd bytes.\n",sizeof(ar));
//
//     return total;
// }

            //程序清单10.13 --指针操作
#include <stdio.h>
int main(void) {
    int urn[5] = {100,200,300,400,500};
    int *ptr1, *ptr2, *ptr3;

    ptr1 = urn;
    ptr2 = &urn[2];

    printf("pointer value, dereferenced pointer,pointer adderess:\n");
    printf("ptrl = %p, *ptrl = %d, &ptrl = %p\n",ptr1, *ptr1, &ptr1);

    //指针加法
    ptr3 = ptr1 + 4;
    printf("\nadding an int to a pointfer:\n");
    printf("ptrl + 4 = %p, *ptrl + 4 = %d\n",ptr1 + 4,*(ptr1 + 4));

    ptr1++;
    printf("\nvalues after ptr1++:\n");
    printf("ptr1 = %p, *ptr1 = %d &prt1 = %p\n",ptr1, *ptr1, &ptr1);

    ptr2--;
    printf("\nvaules after --ptr2:\n");
    printf("ptr2 = %p,*ptr2 = %d &ptr2 = %p\n",ptr2, *ptr2, &ptr2);

    --ptr1;//恢复初始值
    ++ptr2;


    printf("\nPointfers reset to original values:\n");
    printf("ptr1 = %p, ptr2 = %p\n",ptr1,ptr2);

    //一个指针减去另一个指针
    printf("\nsubtracting one pointer from another:\n");
    printf("ptr2 = %p,*ptr1  = %p ,ptr2 - ptr1  = %td\n",ptr2, *ptr1, ptr2 - ptr1);

    //一个指针减去一个整数
    printf("\nsubtracting an int from a pointer:\n");
    printf("ptr3 = %p ,ptr3-2 = %p",ptr3,ptr3-2);

    return 0;
}