#include<stdio.h>
int main()
{
    int year, month, day, nyear, nmonth, nday;
    printf("Enter your birth(----/--/--斜線以空格代替): ");
    scanf("%d%d%d", &year, &month, &day);
    printf("Enter the date today(----/--/--斜線以空格代替): ");
    scanf("%d%d%d", &nyear, &nmonth, &nday);
    int age = nyear-year;
    if(nmonth - month < 0)
    {
        age -= 1;
    }
    printf("Your age is %d\n", age);
    printf("Your Max heart rate is %d\n", 220-age);
    printf("Your target heart rate is %.0f to %.0f\n", (220-age)*0.5, (220-age)*0.85);
    return 0;
}