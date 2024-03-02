//non-negative and symmetric
//symmetric: 以中心點對稱
#include<iostream>
using namespace std;

int main(){
    string s1, s2;
	int t, n;
	long long **m;
	bool flag=true;
	while(cin>>t)
	{

		for(int i=0; i<t; i++)
		{
			cin>>s1>>s2;
			cin>>n;
			//也可直接long long m[n][n];
			m = new long long*[n];
			for(int j=0; j<n; j++)
				m[j] = new long long[n];
			flag=true;
			for(int j=0; j<n; j++)
			{
				for(int k=0; k<n; k++)
				{
					cin>>m[j][k];
					if(m[j][k]<0)
						flag = false;
				}
			}
			if(flag == true)
			{

				for(int j=0; j<n; j++)
					{
						for(int k=0; k<n; k++)
						{

						if(n%2==1)
							{
								//n為奇數時，中心為n/2
								if(m[j][k]!=m[(int)(n/2-(j-n/2))][(int)(n/2-(k-n/2))])
									flag = false;
							}
							else
							{
								//n為偶數時，中心為n/2-0.5
								if(m[j][k]!=m[(int)(n/2-0.5-(j-(n/2-0.5)))][(int)(n/2-0.5-(k-(n/2-0.5)))])
									flag = false;
							}

						}

					}
			}

			if(flag == true)
				cout<<"Test #"<<i+1<<": Symmetric."<<endl;
			else
				cout<<"Test #"<<i+1<<": Non-symmetric."<<endl;
			delete [] m;

		}
	}
	return 0;
}

