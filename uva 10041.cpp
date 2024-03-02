#include<iostream>
#include<vector>
#include<algorithm>
//§ä¤¤¦ì¼Æ 

using namespace std;

int main(){
	int n, r ,s;
	
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>r;
		vector<int>vs;
		int mid = r / 2;
		for(int j = 0; j < r; j++){
			cin>>s;
			vs.push_back(s);
		}
		sort(vs.begin(), vs.end());
		int m  = vs[mid];
		int sum = 0;
		for(int j = 0; j < r; j++){
			int d = m -vs[j];
			if(d < 0)
			    d*= -1;
			sum += d;
			     
		}
		cout<<sum<<endl;
	}
}
