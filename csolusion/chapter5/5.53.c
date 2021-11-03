#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int simple(void);
int multiple(void);
int compute(int, int);
int main()
{
    srand(time(NULL));
    int studentans, point, score = 0;
     int num1, num2;
    printf("Enter the difficult point(1=one bits;2=2bits;-1 to end): ");
        scanf("%d", &point);
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
        printf("How much is %d times %d? ", num1, num2);
        int ans = compute(num1, num2);
        scanf("%d", &studentans);
        if(studentans == ans)
        {
            printf("Very good!\n");
            score++;
        }
        else
        {
            printf("Not this shit.\n");
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
int compute(int x, int y)
{
    return x*y;
}