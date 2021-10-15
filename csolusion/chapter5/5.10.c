#include<stdio.h>
#include<math.h>
int main()
{
    float num;
    while(1)
    {
        scanf("%f", &num);
        if(num == -1)
        {
            break;
        }
        printf("%f\t%f\n", num, ceil(num + .5));
    }
    return 0;
}
//這樣的結果是四捨五入...?不懂為什麼要額外加.5