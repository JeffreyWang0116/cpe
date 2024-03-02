#include<iostream>
using namespace std;

int main(){
    int dir[8][2] = {{-1, -1}, {0, -1}, {1, -1}, {1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}};
    int n, m, cnt;
    int testnum =0;
    while(cin>>n>>m){
        if(n==0 && m==0) break;

        testnum++;
        if(testnum!=1)
            cout<<endl;
        cout<<"Field #"<<testnum<<":"<<endl;

        //cin
        char f[n][m];
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin>>f[i][j];
        }
        //run field
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
            {
                cnt = 0;
                if(f[i][j]!='*')
                {
                    for(int k=0; k<8; k++)
                    {
                        if(j+dir[k][0]>=0 && j+dir[k][0]<m && i+dir[k][1]>=0 && i+dir[k][1]<n)
                        {
                            if(f[i+dir[k][1]][j+dir[k][0]]=='*')
                                cnt++;
                        }
                    }
                    cout<<cnt;
                }
                else
                    cout<<"*";
            }
            cout<<endl;
        }
    }
}
