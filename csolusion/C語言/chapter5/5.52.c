#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int subject(void);
int compute(int, int);
int main()
{
    int studentans, ans;
    int score = 0;
        for(int i = 1; i <= 10; i++)
        {
            int num1 = subject(), num2 = subject();
        srand(time(NULL));
        printf("How much is %d times %d?", num1, num2);
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
    return 0;
}
int subject(void)
{
    int x = rand() % 10;
    return x;
}
int compute(int x, int y)
{
    return x*y;
}