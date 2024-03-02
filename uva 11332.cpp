#include<iostream>
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)
		break;
		while(n>=10){
			int temp = n;
			int sum = 0;
			while(temp>0){
				sum += temp%10;
				temp/=10;
			}
			n = sum;
		}
		cout<<n<<endl;
	}
}
