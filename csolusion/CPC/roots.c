#include<stdio.h>
#include<math.h>
int how_many_roots(int, int, int);
int main()
{
    int a, b, c;
    while(~scanf("%d%d%d", &a, &b, &c))//就是EOF
{
    printf("%d\n",how_many_roots(a, b, c));
}
    return 0;
}

int how_many_roots(int x, int y, int z)
{
    int roots = pow(y, 2)-4*x*z;
    if(roots == 0)
    {
        return 1;
    }
    else if(roots < 0)
    {
        return 0;
    }
    else
    {
        return 2;
    }
}