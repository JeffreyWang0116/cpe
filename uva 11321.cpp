#include<iostream>
#include<algorithm>
using namespace std;

int n, m;

bool cmp(int a, int b){
    if(a%m == b%m){
        if(a%2 != 0 && b%2 == 0) return true;   //不要寫a%2==1，因為負奇數%2為-1!!!!!!
        else if(a%2 == 0 && b%2 != 0) return false;
        else if(a%2 != 0 && b%2 != 0) return a>b;
        else  return a<b;
    }
    else
        return (a%m)<(b%m);
}
int main(){
    while(cin>>n>>m){
        cout<<n<<" "<<m<<endl;
        if(n==0 && m==0) break;

        int *num = new int[n];
        for(int i=0; i<n; i++)
        {
            cin>>num[i];
        }
        //sort
        sort(num, num+n, cmp);

        //cout
        for(int i=0; i<n; i++)
            cout<<num[i]<<endl;
    }
}
