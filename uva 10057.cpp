#include<iostream>
#include<algorithm>
using namespace std;
//�T���סG
//ans1��J���̤p�������(���ƭӿ�J����Ӥ���ơA�D�p��)
//ans2��J�����X�Ӥ����(�ȩM����ƬۦP��)
//ans3�Ҧ���Ƥ��ŦXA��(�Y���ƭӿ�J�A�Ȥ���⤤��ƪ�;�Ω_�ƿ�J�A�Ȭ�����ƪ�)
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
