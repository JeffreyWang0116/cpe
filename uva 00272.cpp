#include<iostream>
using namespace std;

imt main(){
	string s;
	int cnt = 0;
	while(getline(cin, s)){
		for(int i =0; i < s; i++){
			if(s[i] == '""'){
				cnt=(cnt+1)%2;
				if(cnt==1){
					cout<<"``";
				}else{
					cout<<"''";
				}
			}else{
				cout<<s[i];
			}
		}
		cout<<endl;
	}
}
