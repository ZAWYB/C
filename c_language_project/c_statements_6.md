# C语言中的6种语句

### • 标号语句（Labeled Statements）
标号语句是用来给代码行标记一个名字，通常用于与跳转语句结合使用。标号后跟着一个语句，可以用于控制程序流的跳转。
start:      
    printf("This is a labeled statement.\n");

### • 复合语句（Compound Statement）
复合语句，由一对大括号 {} 包围，可以包含多个语句。它允许在需要单一语句的地方使用多个语句。
if (x > 0) {
    printf("Positive\n");
    x = x - 1;
}

### • 表达式语句（Expression Statement）
表达式语句是包含一个表达式的语句。它用于执行一个表达式并产生副作用，如函数调用、变量赋值等。
x = 10;  
printf("Hello, World!\n");

### • 选择语句（Selection Statement）
选择语句用于根据条件选择不同的代码块进行执行。常见的选择语句有 if、if-else 和 switch。
if (x > 0) {
    printf("Positive\n");
} else {
    printf("Non-positive\n");
}

switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    default:
        printf("Invalid day\n");
}

### • 迭代语句（Iteration Statement）
迭代语句用于执行重复的任务，常见的迭代语句有 for、while 和 do-while。
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}

int i = 0;
while (i < 5) {
    printf("%d\n", i);
    i++;
}

do {
    printf("%d\n", i);
    i++;
} while (i < 5);

### • 跳转语句（Jump Statement）
跳转语句用于在程序中跳转控制流，常见的跳转语句有 break、continue、goto 和 return。
for (int i = 0; i < 10; i++) {
    if (i == 5) {
        break;  
    }
    printf("%d\n", i);
}

for (int i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        continue;  
    }
    printf("%d\n", i);
}

goto label;  
return 0;  
