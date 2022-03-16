#include<stdio.h>
int main()
{
    struct name
    {
        char *a;
        int b;
        float c;
        struct name *d;
    }acard={"Heart",4,4.5};
    printf("%s %d %f %p\n",acard.a,acard.b,acard.c,acard.d);
    return 0;
}