#include<iostream>
using namespace std;

int GCD(int i, int j)
{
    if(j==0) return i;

    return GCD(j, i%j);
}
int main(){
    long long N, G;
    while(cin>>N)
    {
        if(N==0) break;

        G=0;
        for(int i=1;i<N;i++)
            for(int j=i+1;j<=N;j++)
            {
                G+=GCD(i,j);
            }
        cout<<G<<endl;
    }

}
