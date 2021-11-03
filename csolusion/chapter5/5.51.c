#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int subject(void);
int compute(int, int);
void correct(void);
void wrong(void);
int main()
{
    int studentans, ans;
    while(1)
    {
        int num1 = subject(), num2 = subject();
        srand(time(NULL));
        printf("How much is %d times %d?", num1, num2);
        int ans = compute(num1, num2);
        scanf("%d", &studentans);
        if(studentans == -1)
        {
            break;
        }
        if(studentans == ans)
        {
            correct();
            continue;
        }
        else
        {
            while(1)
            {
                wrong();
                printf("How huch is %d times %d?", num1, num2);
                scanf("%d", &studentans);
                if(studentans == ans)
                {
                    correct();
                    break;
                }
            }
        }
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
void correct(void)
{
    int x = rand() % 4;
    switch(x)
    {
        case 0:
        puts("Very good!");
        break;
        case 1:
        puts("Excellent!");
        break;
        case 2:
        puts("Nice work!");
        break;
        case 3:
        puts("Keep up the good work!");
        break;
    }
}
void wrong(void)
{
    int y = rand() % 4;
    switch(y)
    {
        case 0:
        puts("No. Please try again.");
        break;
        case 1:
        puts("Wrong. Try once more.");
        break;
        case 2:
        puts("Don't give up!");
        break;
        case 3:
        puts("No. Keep trying.");
        break;
    }
}