#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    int number = rand() % 1000 + 1;
    int guess;
    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess.\n");
    while(1)
    {
        scanf("%d", &guess);
        if(guess == number)
        {
            printf("Excellent! You guessed the number!\n");
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
    }
    return 0;
}