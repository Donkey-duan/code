#include<iostream>
using namespace std;
int main(){
	int right[5];
	for(int i = 0;i<5;i++){
		cin>>right[i];
	}
	int yours[5];
	while(cin>>yours[0]){
		int count = 0;
		for(int i = 1;i<5;i++){
			cin>>yours[i];
		}
		for(int i = 0;i<5;i++){
			for(int j = 0;j<5;j++){
				if(right[i]==yours[j]){
					count++;
				}
			}
		}
		if(count == 3){
			cout<<"100"<<endl;
		}
		else if(count == 4){
			cout << "500"<<endl;
		}
		else if(count == 5){
			cout << "1000"<<endl;
		}
		else{
			cout<<"0"<<endl;
		}
	}
}