#include <iostream>
using namespace std;

//non-negative integer
//big -small = d
//big + small = s
//big = (s+d)/2
//small = s-(s+d)/2

int main(){
    int n, s, d, big, small;
    while(cin>>n){

        for(int i=0; i<n; i++)
        {
            cin>>s>>d;
            //�Ys��d���t�A�hbig��small�i�ର�t
            //s<d,�hbig���t
            //s+d�������ơA�hbig�Msmall�������
            if(s<0 || d<0 || s<d || (s+d)%2==1)
            {
                cout<<"impossible"<<endl;
            }
            else
            {

                big = (s+d)/2;
                small = s-big;

                cout<<big<<" "<<small<<endl;
            }


        }
    }
}


