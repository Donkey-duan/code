#include<stdio.h>
int main()
{
    printf("Decimal\tRoman-Numeral\n");
   int num, i;
   for(num = 1; num <= 100; num++)
   {
       printf("%d\t", num);
       if(num == 100)
       {
           printf("C");
       }
       if(num/10 == 9)
       {
           printf("XC");
       }
       if(num/10>=5 && num/10 <= 8)
       {
           printf("L");
           for(i = 1; i <= num/10-5; i++)
           {
               printf("X");
           }
       }
       if(num == 49)
       {
           printf("IL");
       }
       if(num/10==4 && num != 49)
       {
           printf("XL");
       }
       if(num/10>=1 && num/10 <= 3)
       {
           for(i = 1; i <= num/10; i++)
           {
               printf("X");
           }
       }
       if(num%10==9 && num != 49)
       {
           printf("IX");
       }
       if(num%10-5>=0&& num%10 != 9)
       {
           printf("V");
       }
       if(num%10 == 4)
       {
           printf("IV");
       }
       if(num%5<=3)
       {
           for(i = 1; i <= num%5; i++)
           {
               printf("I");
           }
       }
       puts("");
   }
    return 0;
}