#include<iostream>
using namespace std;

int main(){
char rect[100][100];
int t, m, n, q, ir, ic;
bool flag;
while(cin>>t){
    for(int i=0; i<t; i++){
        cin>>m>>n>>q;
        for(int j=0; j<m; j++)
            for(int k=0; k<n; k++)
                cin>>rect[j][k];

        cout<<m<<" "<<n<<" "<<q<<endl;
        for(int j=0; j<q; j++)
        {
            cin>>ir>>ic;
            char ch = rect[ir][ic];
            int l=0; //與rc距離
            while(ir-l>=0 && ic-l>=0 && ir+l<m && ic+l<n)
            {
                flag = true;
                //加左
                for(int k=ir-l; k<=ir+l; k++)
                {
                    if(rect[k][ic-l]!=ch)
                    {
                        flag = false;
                        break;
                    }
                }
                //加右
                for(int k=ir-l; k<=ir+l; k++)
                {
                    if(rect[k][ic+l]!=ch)
                    {
                        flag = false;
                        break;
                    }
                }
                //加上
                for(int k=ic-l; k<=ic+l; k++)
                {
                    if(rect[ir-l][k]!=ch)
                    {
                        flag = false;
                        break;
                    }
                }
                //加下
                for(int k=ic-l; k<=ic+l; k++)
                {
                    if(rect[ir+l][k]!=ch)
                    {
                        flag = false;
                        break;
                    }
                }
                if(flag == false)
                {
                    break;
                }
                l++;
            }
            cout<<2*(l-1)+1<<endl;
        }
    }
}
}
