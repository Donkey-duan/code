/*scanf:
double: %lf(printf 則不用)
long long int: %lld
八進位整數：%o
十六進位整數：%x
scanf("%*%d", &a):會忽略讀到的第一個數字，將第二個數字存進a

printf:
％-5d: 靠左對齊幾格
%#x %#o:輸出8, 16進位
％.nf:規定到小數點後第幾位(若最後一位沒有四捨五入，就用double，
                    非必要時不要用，很佔記憶體)
若儲存數字會overflow:就用long long int