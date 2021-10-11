#include<stdio.h>
int main()
{
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int eCount = 0;
    int counter = 0;
    puts("Enter the letter grades.");
    puts("Enter the EOF character to end input.");
    int grade;
    while((grade = getchar()) != EOF)
    {
        switch(grade)
        {
            case 'A':
            case 'a':
            aCount+=90;
            counter++;
            break;

            case 'B':
            case 'b':
            bCount+=80;
            counter++;
            break;

            case 'C':
            case 'c':
            cCount+=70;
            counter++;
            break;

            case 'D':
            case 'd':
            dCount+=60;
            counter++;
            break;

            case 'E':
            case 'e':
            eCount+=50;
            counter++;
            break;

            case '\n':
            case '\t':
            case ' ':
            break;

            default:
            printf("%s", "Incorrect letter grade entered.");
            puts("Enter a new grade.");
            break;
        }
    }
    int average = (aCount + bCount + cCount + dCount + eCount) / counter;
    puts("The average grade of this class is:");
    if(average >= 90)
    {
        puts("A");
    }
    if(average >= 80 && average < 90)
    {
        puts("B");
    }
    if(average >= 70 && average < 80)
    {
        puts("C");
    }
    if(average >= 60 && average < 70)
    {
        puts("D");
    }
    if(average >= 50 && average < 60)
    {
        puts("E");
    }
    return 0;
}