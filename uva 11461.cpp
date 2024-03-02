#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//浪琩腹b 
	int a, b, cnt = 0;
	while(cin>>a>>b){
		cnt = 0;
		if(a==0 && b ==0)
		    break;
		if(a > b || b < 0)
		    cout<<0<<endl;
		else{
			if(a<0)
			    a = 0;
			//b程Чキよ计秨腹 - a程Чキよ计秨腹 + 1 = a,b丁Чキよ计计秖    
			cnt = (int)floor(sqrt(b)) - (int)ceil(sqrt(a))+1;
			cout<<cnt<<endl;   
		}    
	}
}
