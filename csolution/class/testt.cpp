#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	int count;
	cin>>count>>ws;
	for(int q = 0;q<count;q++){
		int len=0,i;
		char s[500];//定義一個 陣列 
		char word[20]={0};//裝著每一單詞 
		char maxword[40];//最大的單詞 
		char mwordlist[40];//最大單字列
		int num=0;//每個單詞字母數量 
		int maxnum=0;//每個單詞最大字母數量 
		char max=0;

		do{	
			gets(s);
			len=strlen(s);
			
		}while(len>500||s[len-1]!='.');//輸入合法性檢驗 
		
		

		
		for(i=0;i<len;i++)
		{
			if(s[i]==' '||s[i]=='.')
			{
			if(maxnum<num)//比較大小 
			{
				maxnum=num;
				strcpy(maxword,word);
			}
				num=0;
			}
			else
			{ 
			word[num]=s[i];//把每單詞 放進陣列 
			num++ ;
			}	
			
			
		}
		
			cout<<maxword;
	}
	
	return 0;
}