#include <iostream>
using namespace std;

int main(){
	int n;
	int m;
	while(cin>>n){
	    for(int i=0; i<n; i++)
	    {
	      cin>>m;
	      
	      int tm=m, b1=0;
	      while(tm!=0)
	      {
	          if(tm%2==1) b1++;
	          tm/=2;
	      }
	      //�Q���i��C������|��G�i��
	      tm = m;
	      int hm=0, b2=0;
	      while(tm!=0)
	      {
	      	//�C�����Q���i��@�� �A��G�i�� 
	          hm = (tm%10);
	          while(hm!=0)
	          {
	              if(hm%2==1) b2++;
	              hm/=2;
	          }
	
	          tm/=10;
	      }
	
	      cout<<b1<<" "<<b2<<endl;
	
	    }
	}

}
