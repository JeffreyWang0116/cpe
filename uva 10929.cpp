#include<iostream>
#include<string>
using namespace std;
//ノ﹃弄;11计:(计计㎝-案计计㎝)11计 

int main(){
	string s;
	long long int sum;
	while(cin>>s){
		if(s=="0") break;
		sum = 0;
		for(int i = 0; i < s.length(); i++){ /*计计㎝-案计计㎝*/ 
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
