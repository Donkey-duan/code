#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int subject(void);
int compute(int, int);
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
            printf("Very good!\n");
            continue;
        }
        else
        {
            while(1)
            {
                printf("No. Please try again.\n");
                printf("How huch is %d times %d?", num1, num2);
                scanf("%d", &studentans);
                if(studentans == ans)
                {
                    printf("Very good!\n");
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