#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//x!=0 && y==0 ==> 1
//x==0 && y==0  ==> 1
//x = = 0.©My< 0  ==> inf
int main(){
    vector<int> a;
    string s;
    int x, tmpa, n, d, powx;
while(cin>>x)
{
    d = 0;
    getline(cin, s);
    while(cin>>tmpa){
        a.push_back(tmpa);
        if(cin.get()=='\n')
            break;
    }

    n=a.size()-1;
    powx = 1;
    for(int i=n-1; i>=0; i--)
    {
        d+= a[i]*(n-i)*powx;
        powx*=x;
    }
    cout<<d<<endl;
    a.clear();
}

return 0;
}

