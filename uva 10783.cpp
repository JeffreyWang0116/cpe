#include <iostream>
using namespace std;

int main(){
    int t, s, e, sum;
while(cin>>t)
{
    for(int i=0; i<t; i++)
    {
        cin>>s>>e;
        if(s%2==0) s+=1;

        sum = 0;
        for(int j=s; j<=e; j+=2)
            sum += j;
        cout<<"Case "<<i+1<<": "<<sum<<endl;
    }



}
return 0;
}

