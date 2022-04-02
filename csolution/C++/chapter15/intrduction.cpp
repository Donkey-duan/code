#include<iostream>//iostream=input/output stream,c++的標頭檔不需要加.h，除非是自創標頭：#include"fuck.h"
using namespace std;//使用名稱空間std，用來省略std::cout, std::cin, std::endl的std::
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    cout << "The number is " << num << endl;//編譯器會自動判別式字元字串還是整數變數，故c++不需要格式控制字串
    //endl=end line=\n
}//c++不用return 0;
//檔名結尾改用.cpp .cxx .C