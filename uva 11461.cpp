#include<iostream>
#include<cmath>
using namespace std;

int main(){
	//�ˬd��ڸ�b 
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
			//b�H�U���̤j��������ƶ}�ڸ� - a�H�W���̤p��������ƶ}�ڸ� + 1 = a,b����������Ƽƶq    
			cnt = (int)floor(sqrt(b)) - (int)ceil(sqrt(a))+1;
			cout<<cnt<<endl;   
		}    
	}
}
