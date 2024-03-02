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
            //若s或d為負，則big或small可能為負
            //s<d,則big為負
            //s+d不為偶數，則big和small不為整數
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


