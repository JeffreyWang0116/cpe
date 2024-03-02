 //.19
#include <iostream>

using namespace std;

int main(){

    string a, b;

    while(getline(cin, a))// 這裡使用getline是因為輸入包含"空字串"!!!
    {
        int cnt_a[26]={0};  // a中各字母出現次數
        int cnt_b[26]={0};  // b中各字母出現次數

        getline(cin, b);

        for(int i=0; i<a.length(); i++)
        {
            cnt_a[a[i]-'a']++;
        }
        for(int i=0; i<b.length(); i++)
        {
            cnt_b[b[i]-'a']++;
        }

        for(int i=0; i<26; i++)
        {
            int min_cnt = min(cnt_a[i], cnt_b[i]);
            for(int j=0; j<min_cnt; j++)
                cout<<(char)('a'+i);
        }
        cout<<endl;
    }
}

