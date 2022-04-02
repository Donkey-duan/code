#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int number = rand() % 1000 + 1;
    int guess, counter = 0;
    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess.\n");
    while(1)
    {
        scanf("%d", &guess);
        if(guess == number)
        {
            if(counter > 10)
            {
                printf("You should be able to do better!\n");
            }
            else
            {
                printf("Either you know the secret or you got lucky!\n");
            }
            break;
        }
        if(guess < number)
        {
            printf("Too low. Try again.\n");
        }
        else
        {
            printf("Too high. Try again.\n");
        }
        counter++;
    }
    return 0;
}//能十次內猜對的方法，就是每次都猜範圍內最中間的數，快速縮小範圍