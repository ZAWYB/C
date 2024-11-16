C 语言中的 6 种语句：

1. 标号语句 (Label Statement)
用于给代码中的某个位置标记一个标签，通常与跳转语句一起使用。
示例:
start:
    printf("Hello, World!\n");
    goto start;

2. 复合语句 (Compound Statement)
一组语句组成一个复合语句，用大括号 `{}` 包含。
示例:
{
    int x = 10;
    printf("Value of x is: %d\n", x);
}

3. 表达式语句 (Expression Statement)
任何合法的表达式都可以作为语句，通常用来执行一些计算。
示例:
x = 5 + 10;

4. 选择语句 (Selection Statement)
根据条件的真假，决定执行不同的代码块。
包括 if, if-else, switch 等。
示例:
if (x > 0) {
    printf("Positive number\n");
} else {
    printf("Negative or zero\n");
}

5. 迭代语句 (Iteration Statement)
通过循环来重复执行代码块，常见的有 for, while, do-while。
示例:
for (int i = 0; i < 5; i++) {
    printf("Iteration: %d\n")
