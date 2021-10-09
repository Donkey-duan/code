#include<stdio.h>
#include<math.h>
int main()
{
    int side1, side2, side3;
    for(side1 = 1; side1 <= 500; side1++)
    {
       for(side2 = 1; side2 <= 500; side2++)
        {
            for(side3 = 1; side3 <= 500; side3++)
            {
                if(pow(side1, 2) + pow(side2, 2) == pow(side3, 2))
                {
                    if(side2 >= side1)
                    {
                    printf("%d, %d, %d\n", side1, side2, side3);
                    }
                }
            }
        } 
    }

    return 0;
}