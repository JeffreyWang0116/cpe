#include<iostream>
#include<iomanip>
#include<string>
#include<map>

using namespace std;

int main(){
    int n;
    string s;
    map<string, int> cnt;
    int num=0;
    while(cin>>n){
        //\n
        cin.get();
        //ªÅ¥Õ
        getline(cin, s);
        for(int i=0; i<n; i++)
        {

            if(i!=0)
                cout<<endl;

            num = 0;

            while(getline(cin, s)){
                if(s=="") break;

                //cnt
                cnt[s]++;
                num++;
            }
            map<string, int>::iterator it;
            for(it=cnt.begin(); it!=cnt.end(); it++){
                cout<<it->first<<" "<<fixed<<setprecision(4)<<(double)(it->second)/num*100.0<<endl;
            }
            cnt.clear();
        }
    }
}
