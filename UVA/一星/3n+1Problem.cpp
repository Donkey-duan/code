#include <iostream>
using namespace std;

int main (){
	typedef unsigned int ui; 
	ui *ar = new ui[1000001]   {0,1,2};
	ui cl;
	
	for(ui i=3; i<1000001; i++){
		cl=0;
		ui j=i;
		while(j != 1){			
			if(j%2==1) { j= (3*j+1)/2; cl+=2;  }
			else { j /= 2; cl++;  }
			if(j<i) { cl += ar[j]; break;  }
		}
		ar[i] = cl;	
	}
		
	ui x,y;
	while(cin >> x >> y){
		cout << x << " " << y << " ";
		if(x>y) std::swap(x,y);
		ui max = ar[y];
		for(ui i=y-1; i>=x; i--){
			if(ar[i]>max) max=ar[i];
		}
		cout << max << "\n";
	}	
	
// delete[] ar;
return 0;	
}