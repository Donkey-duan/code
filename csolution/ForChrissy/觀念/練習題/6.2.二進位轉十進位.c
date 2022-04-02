#include<stdio.h>
#include<math.h>
int main()
{
    int num;
    while(1)
    {
        scanf("%d", &num);
        if(num == 0)
        {
            break;
        }
        int sum = 0,counter = 0;
        for(int i = 1;num != 0;i++)
        {
            sum += num % 2 * pow(2,counter);
            num /= 10;
            counter++;
        }
        printf("%d\n", sum);
    }
    return 0;
}