#include<iostream>
#include<string>
using namespace std;
//�Φr��Ū��;11����:(�_�Ʀ�Ʀr�M-���Ʀ�Ʀr�M)��11���� 

int main(){
	string s;
	long long int sum;
	while(cin>>s){
		if(s=="0") break;
		sum = 0;
		for(int i = 0; i < s.length(); i++){ /*�_�Ʀ�Ʀr�M-���Ʀ�Ʀr�M*/ 
			if(i%2 == 0) sum+=(int)(s[i]-'0');
			else sum -=(int)(s[i]-'0');
		}
		if(sum%11 == 0){
			cout<<s<<"is a multiple of 11."<<endl;
		}else{
			cout<<"is not a mutiple of 11."<<endl;
		}
	}
}
