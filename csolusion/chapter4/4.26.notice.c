#include<stdio.h>
#include<math.h>
int main()
{
    int i, counter = 1;
    double pi = 4;
    for(i = 1;;i++)
    {
        pi+=pow(-1, i)*4/(2*i+1);
        if(fabs(pi-3.14159)<0.000001)
        {
            break;
        }
        if(counter%999==0)
        {
            printf("a(%d)\t%.5f\n", i, pi);
        }
        counter++;
        
    }
    return 0;
}
//我搞不定如何break在準確值，不是啊，課本叫我們不准比較浮點數之間的大小，啊這不比較是要怎麼自然停止