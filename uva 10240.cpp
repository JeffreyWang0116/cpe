#include<iostream>
#include<map>
#include<string>
using namespace std;
//用map容器 
int main(){
	int n;
	map<string, int>m;
	cin>>n;
	for(int i = 0; i < n; i++){
		string country;
		string name;
		
		cin>>country;
		getline(cin, name);//讀名字 
		
		m[country]++;
	}
	map<string, int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	m.clear();
}
