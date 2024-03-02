#include <iostream>
//displacement: 位移=平均速度*時間
//因為是等加速度，0~2t的平均速度=t時刻的順時速度
#include<iostream>

using namespace std;

int main(){
	int v, t;
	while(cin>>v>>t){
	    cout<<v*(2*t)<<endl;
	}
	return 0;
}
