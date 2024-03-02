#include<iostream>
using namespace std;

int main(){
long long i, p=0;
string b="";
while(cin>>i)
{
    p = 0;
    b = "";
    if(i==0) break;

    while(i!=0)
    {
        if(i%2==1)
        {
            b = "1"+b;
            p++;
        }
        else
            b = "0"+b;

        i/=2;
    }
    cout<<"The parity of "<<b<<" is "<<p<<" (mod 2)."<<endl;
}
}
