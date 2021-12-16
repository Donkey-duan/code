#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    srand(time(NULL));
    printf("I have a number between 1 and 1000.\n");
    printf("Can you guess my number?\n");
    printf("Please type your first guess.\n");
        int number = rand() % 10 + 1;
        int guess;
        while(1)
        {
            scanf("%d", &guess);
            if(guess == number)
            {
                printf("Excellent! You guessed the number!\n");
                printf("Would you want to play again?(y or n)\n");
                break;
            }
            else if(guess < number)
            {
                printf("Too low. Try again.\n");
            }
            else if(guess > number)
            {
                printf("Too high. Try again.\n");
            }
        }
        return 0;
}