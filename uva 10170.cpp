#include <iostream>
using namespace std;

//s, s+1, s+2 + ...= d

int main(){
	long long s, d, days;
	while(cin>>s>>d)
	{
		days = 0;
		while(days<d)
		{
			days+=s;
			s++;
		}
		cout<<s-1<<endl;
		
	}
		
}
