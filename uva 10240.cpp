#include<iostream>
#include<map>
#include<string>
using namespace std;
//��map�e�� 
int main(){
	int n;
	map<string, int>m;
	cin>>n;
	for(int i = 0; i < n; i++){
		string country;
		string name;
		
		cin>>country;
		getline(cin, name);//Ū�W�r 
		
		m[country]++;
	}
	map<string, int>::iterator it;
	for(it=m.begin(); it!=m.end(); it++){
		cout<<it->first<<" "<<it->second<<endl;
	}
	m.clear();
}
