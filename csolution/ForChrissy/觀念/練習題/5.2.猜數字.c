#include<stdio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
char guess(void);
int main()
{
    srand(time(NULL));
    while(1)
    {
        printf("I have a number between 1 and 1000.\n");
        printf("Can you guess my number?\n");
        printf("Please type your first guess.\n");
        char final = guess();
        if(final == 'n')
        {
            break;
        }
    }
    return 0;
}
char guess(void)
{
    int ans = rand()%5+1;
    int num;
    char state[2];
    while(1)
    {
        scanf("%d", &num);
            if(num == ans)
            {
                printf("Excellent! You guessed the number!\n");
                printf("Would you want to play again?(y or n)\n");
                scanf("%s",state);
                return state[0];
            }
            else if(num < ans)
            {
                printf("Too low. Try again.\n");
            }
            else if(num > ans)
            {
                printf("Too high. Try again.\n");
            }
    }
}