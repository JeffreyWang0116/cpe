#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n, m;
    bool flag = true;
    while(cin>>n>>m)
    {
        flag = true;
        //m==1時，無法脫離迴圈
        if(m==0 || n==0 || m==1 || n==1)
            flag = false;
        else
        {
            v.push_back(n);
            while(n>1)
            {
                //無法整除
                if(n%m!=0)
                {
                    flag = false;
                    break;
                }
                n/=m;
                v.push_back(n);
            }
        }
        if(flag)
        {
            for(int i=0; i<v.size(); i++)
            {
                cout<<v[i];
                if(i!=v.size()-1)
                    cout<<" ";
                else
                    cout<<endl;

            }
        }
        else
            cout<<"Boring!"<<endl;

        v.clear();
    }
}
