#include <iostream>
using namespace std;

int main(){
    string snum;
    int inum;
    //base至少要大於input所有位元的最小值
    int min_base = 1;
while(cin>>snum)
{
    min_base = 1;
    inum = 0;
    //inum
    for(int i=0; i<snum.length(); i++)
    {

        int tmp;
        if(snum[i]>='0' && snum[i]<='9')
            tmp = snum[i]-'0';
        else if(snum[i]>='A' && snum[i]<='Z')
            tmp = 10+snum[i]-'A';
        else if(snum[i]>='a' && snum[i]<='z')
            tmp = 36+snum[i]-'a';
        else
            continue;

        inum += tmp;
        if(tmp+1>min_base)
            min_base = tmp+1;
    }

    int i;
    for(i=min_base; i<=62; i++)
    {
        if(i>1 && inum%(i-1)==0)
        {
            cout<<i<<endl;
            break;
        }
    }
    if(i>62)
        cout<<"such number is impossible!"<<endl;

}
return 0;
}

