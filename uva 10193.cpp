#include<iostream>
#include<cmath>
using namespace std;
//目標找公因數,用輾轉相除法找gcd

int gcd(int a, int b)
{
    if(b==0) return a;
    return gcd(b, a%b);
}
int main(){
    int n;
    string s1, s2;
    long long num1, num2;
    while(cin>>n){
        for(int i=0; i<n; i++)
        {
            cin>>s1>>s2;
            num1 = 0;
            num2 = 0;
            //轉decimal
            for(int j=0; j<s1.length(); j++)
            {
                num1 = num1*2+(s1[j]-'0');
            }
            for(int j=0; j<s2.length(); j++)
            {
                num2 = num2*2+(s2[j]-'0');
            }
            //輾轉相除法
            int l = gcd(num1, num2);
            if(l!=1)
                cout<<"Pair #"<<i+1<<": All you need is love!"<<endl;

            else
                cout<<"Pair #"<<i+1<<": Love is not all you need!"<<endl;
        }
    }
}
