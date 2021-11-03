#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int simple(void);
int multiple(void);
int all(int, int);
int compute(int, int, int);
int main()
{
    srand(time(NULL));
    int studentans, point, score = 0;
     int num1, num2, type, option = 0;
    printf("Enter the difficult point(1=one bits;2=2bits;-1 to end): ");
    scanf("%d", &point);
    printf("Enter the type of operation you want to practice(1+;2-;3*;4all): ");
    scanf("%d", &type);
    for(int i = 1; i <= 10; i++)
    {
        switch(point)
        {
            case 1:
            num1 = simple(), num2 = simple();
            break;
            case 2:
            num1 = multiple(), num2 = multiple();
            break;
        }
        switch(type)
        {
            case 1:
            printf("How much is %d + %d? ", num1, num2);
            break;
            case 2:
            printf("How much is %d - %d? ", num1, num2);
            break;
            case 3:
            printf("How much is %d * %d? ", num1, num2);
            break;
            case 4:
            option = all(num1, num2);
            break;
        }
        int ans = compute(type, num1, num2);
        if(option != 0)
        {
            ans = compute(option, num1, num2);
        }
        scanf("%d", &studentans);
        if(studentans == ans)
        {
            printf("Very good!\n");
            score++;
        }
        else
        {
            printf("Not this shit.\n");
            printf("ans = %d\n", ans);
        }
    }
        if((float)score/10 >= 0.75)
        {
            printf("Congratulations, you are ready to go to the next level!\n");
        }
        else
        {
            printf("Please ask your teacherfor extra help.\n");
        }
        printf("Score:%d/10\n", score);
    return 0;
}
int simple(void)
{
    int x = rand() % 10;
    return x;
}
int multiple(void)
{
    int x = rand() % 90 + 10;
    return x;
}
int all(int a, int b)
{
    int x = rand() % 3 + 1;
    switch(x)
    {
        case 1:
        printf("How much is %d + %d? ", a, b);
        break;
        case 2:
        printf("How much is %d - %d? ", a, b);
        break;
        case 3:
        printf("How much is %d * %d? ", a, b);
        break;
    }
    return x;
}
int compute(int x, int y, int z)
{
    int sum;
    switch(x)
    {
        case 1:
        sum = y+z;
        break;
        case 2:
        sum = y-z;
        break;
        case 3:
        sum = y*z;
        break;
    }
    return sum;
}
