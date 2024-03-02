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

//����W�h
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
        //  Ū�@��
        getline(cin, s);

        //  ��l��
        alphebet a[26];
        for(int i=0; i<26; i++)
        {
            a[i].alp = (char)((int)'A'+i);
            a[i].times = 0;
        }

        //  �έp�X�{����
        for(int i=0; i<n; i++)
        {
            getline(cin, s);
            for(int j=0; j<s.length(); j++)
            {
                if(s[j]-'A'>=0 && s[j]-'A'<26) //�j�g
                    a[s[j] - 'A'].times++;
                else if(s[j]-'a'>=0 && s[j]-'a'<26) //�p�g
                    a[s[j] - 'a'].times++;
            }
        }
        //  �Ƨ�
        sort(a, a+26, cmp);
        //  �L
        for(int i=0; i<26; i++)
        {
            if(a[i].times<1)
                break;
            cout<<a[i].alp<<" "<<a[i].times<<endl;
        }

    }
}

