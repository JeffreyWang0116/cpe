#include <cctype>	
#include <iostream>
#include <algorithm>   
#include<vector>
#include <cctype>

using namespace std;

struct alphebet{
    char alp;   
    int times;  
};

//比較規則
bool cmp(alphebet x, alphebet y)
{
    if(x.times>y.times)
        return true;
    else if(x.times == y.times && (int)(x.alp)<(int)(y.alp))
        return true;

    return false;
}

int main(){
    int n;
    string s;
    while(cin>>n)
    {
        //  讀一行
        getline(cin, s);

        //  初始化
        alphebet a[26];
        for(int i=0; i<26; i++)
        {
            a[i].alp = (char)((int)'A'+i);
            a[i].times = 0;
        }

        //  統計出現次數
        for(int i=0; i<n; i++)
        {
            getline(cin, s);
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]-'A'>=0 && s[j]-'A'<26) //大寫
                    a[s[j] - 'A'].times++;
                else if(s[j]-'a'>=0 && s[j]-'a'<26) //小寫
                    a[s[j] - 'a'].times++;
            }
        }
        //  排序
        sort(a, a+26, cmp);
        //  印
        for(int i=0; i<26; i++)
        {
            if(a[i].times<1)
                break;
            cout<<a[i].alp<<" "<<a[i].times<<endl;
        }

    }
}

