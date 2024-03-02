#include<iostream>
#include<algorithm>
using namespace std;
//氮
//ans1块い程い计(案计块Τㄢい计珼)
//ans2块いΤ碭い计(㎝い计)
//ans3┮Τ俱计い才A(案计块ざㄢい计;┪计块い计)
int main(){
    int n, mid;
    int ans1, ans2, ans3;
    while(cin>>n){
        int *x = new int[n];
        for(int i=0; i<n; i++)
            cin>>x[i];
        //sort
        sort(x+0, x+n);
        mid = n/2;
        if(n%2==1)
        {
            ans1 = x[mid];
            ans3 = 1;
            ans2 = 0;
            for(int j=0; j<n; j++)
            {
                if(x[j]==x[mid])
                    ans2++;
            }
            cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;

        }
        else
        {
            ans1 = x[mid-1];
            ans3 = x[mid]-x[mid-1]+1;
            ans2 = 0;
            for(int j=0; j<n; j++)
            {
                if(x[j] == x[mid-1] || x[j]==x[mid])
                    ans2++;

            }
            cout<<ans1<<" "<<ans2<<" "<<ans3<<endl;
        }
        delete [] x;
    }
}
