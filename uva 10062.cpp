#include<iostream>
#include<algorithm>
using namespace std;
struct ch{
    int ascii;
    int freq;
};
bool cmp(ch a, ch b){
    if(a.freq == b.freq)
        return a.ascii>b.ascii;
    else
        return a.freq<b.freq;
}
int main(){
    string s;
    while(getline(cin, s)){
        //init
        ch allch[95]; // ascii 32-126
        for(int i=0; i<95; i++)
        {
            allch[i].ascii = i+32;
            allch[i].freq = 0;
        }
        //cnt
        for(int i=0; i<s.length(); i++)
        {
            allch[s[i]-32].freq += 1;
        }
        //sort
        sort(allch, allch+95, cmp);
        //cout
        for(int i=0; i<95; i++)
        {
            if(allch[i].freq>0)
            {
                cout<<allch[i].ascii<<" "<<allch[i].freq<<endl;
            }
        }
        cout<<endl;
    }
}
