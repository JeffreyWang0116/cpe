#include<iostream>
using namespace std;

// 999999999999999999999 => 189 => 18 => 9
int main(){
    string s;
    int sum, cnt;
    while(cin>>s)
    {
        if(s=="0")
            break;
        cnt = 0;
        sum = 0;
        for(int i=0; i<s.length(); i++)
            sum+=s[i]-'0';
        cnt++;

        while(sum>=10)
        {
            int tmp = sum;
            sum = 0;
            while(tmp>0)
            {
                sum += tmp%10;
                tmp/=10;
            }
            cnt++;
        }

        if(sum == 9)
            cout<<s<<" is a multiple of 9 and has 9-degree "<<cnt<<"."<<endl;
        else
            cout<<s<<" is not a multiple of 9."<<endl;
    }
}

