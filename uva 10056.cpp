#include <iostream>
#include<cmath> //pow()
#include<iomanip> //fixed & setprecision
using namespace std;
//��i�ӤHĹ�����vprob 
//prob = (q^(i-1))*p+(q^(i-1+n))*p+(q^(i-1+2n))*p+...
//�L�a����ż�:
//����:(q^(i-1))*p�A����:p^n�A�a�J���� 
//prob=(q^(i - 1) * p)*(1)/(1-q^n)
 
int main(){
	int in, n, i;
	double p, q, prob;
	while(cin>>in)
	{
		for(int k=0; k<in; k++)
		{
			cin>>n>>p>>i;
			q= 1.0-p;
			//�������w�q���p			
			if(q==1)
			{
				cout<<"0.0000"<<endl;
			}
			else
			{
				prob  = (pow(q, (i - 1)) * p)/(1-pow(q,n));
			
				cout<<fixed<<setprecision(4)<<prob<<endl;
			}
			
				
		}
	}
	return 0;
} 
