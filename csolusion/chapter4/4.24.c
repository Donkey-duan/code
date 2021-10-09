#include<stdio.h>
int main()
{
    //若是判斷式，印出結果則為1/0(True or false)
    int i=5, j=7, k=4, m=-2;
    printf("%d\n", i == 5);//1
    printf("%d\n", j!= 3);//1
    printf("%d\n", i >= 5 && j < 4);//1, 0
    printf("%d\n", !m && k > m);//0, 1
    printf("%d\n", !k || m);//0, 1
    printf("%d\n",k-m<j||5-j>=k);//1, 0
    printf("%d\n", j + m <= i && !0);//1, 1(原本是0)
    printf("%d\n", !(j - m));//0
    printf("%d\n", !(k > m));//0
    printf("%d\n", !(j > k));//0
    return 0;
}
/*什麼是!value:
一般來說，！表NOT, 所以!0 == 1, !1 == 0,
但那是當變數的值很單純的為0, 1
若value = -1, 1000, 13.38呢？
實際上加了!的變數就會被當bool看待，所以他就只有0, 1
所以上面舉的非0的數都會視為1, 加了！就變0
*/