#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    /*int amount = 100;
    int price = 0;

    printf("请输入金额（元）：");
    scanf("%d", &price);

    printf("请输入票面");
    scanf("%d", &amount);

    int change = amount - price;
    printf("找您%d元。\n", change);*/

    /*int a;
    int b;
    
    printf("请输入两个整数：");
    scanf("%d %d", &a, &b);
    printf("%d + %d = %d\n", a, b, a + b);*/

    /*printf("请分别输入身高的英尺和英寸，""如输入\"5 7\"表示5英尺7英寸：");
    double foot;
    double inch;

    scanf("%lf %lf", &foot, &inch);

    printf("身高是%f米。\n", ((foot + inch / 12) * 0.3048));*/


    /*int hour1, minute1;
    int hour2, minute2;
    
    scanf("%d %d", &hour1, &minute1);
    scanf("%d %d", &hour2, &minute2);

    int t1 = hour1 * 60 + minute1;
    int t2 = hour2 * 60 + minute2;

    int t = t2 - t1;
    
    printf("时间差是%d小时%d分。", t / 60, t % 60);*/


    int a = 5;
    int b = 6;
    int t;
    t = a;
    a = b;
    b = t;
    printf("a=%d,b=%d\n", a, b);


    return 0;
}