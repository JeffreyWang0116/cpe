#include<iostream>
using namespace std;

int main(){

    int t, n, p;
    while(cin>>t)
    {
        for(int i=0; i<t; i++)
        {
            cin>>n;//day
            cin>>p;//#p
            int cnt =0;
            int *pi = new int[p];
            for(int j=0; j<p; j++)
                cin>>pi[j];

            //run days
            for(int k=1; k<=n; k++)
            {
                // not fri sa
                if(k%7==0 || k%7==6)
                    continue;
                //run pi
                for(int m=0; m<p; m++){
                    if(k%pi[m]==0)
                    {
                        cnt++;
                        break;
                    }
                }

            }
            cout<<cnt<<endl;
            delete [] pi;

        }

    }
}
