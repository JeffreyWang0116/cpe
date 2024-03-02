#include<iostream>
using namespace std;

int main(){
	int i, j;
	while(cin>>i>>j){
		int start, end;
		if(i>j){
			start = j;
			end = i;
		}else{
			start = i;
			end = j;
		}
		int max_cnt = 0;
		for(int a = start; a<= end; a++){
			int cnt = 0;
			int n = a;
			
			while(true){
				cnt++;
				if(n==1){
					break;
				}
				if(n%2==1){
					n = 3*n+1;
				}
				else{
					n = n/2;
				}
			}
			if(cnt>max_cnt){
				max_cnt = cnt;
			}
			
		}
		cout<<i<<" "<<j<<" "<<max_cnt<<endl;
	}
}
