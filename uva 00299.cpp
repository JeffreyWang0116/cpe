#include<iostream>
using namespace std;

int main(){
    int n, l;
    while(cin>>n){
        for(int k=0; k<n; k++)
        {
            cin>>l;
            int cnt = 0;
            int *c = new int[l];
            for(int i=0; i<l; i++)
                cin>>c[i];

            //bubble sort
            for(int i=0; i<l-1; i++) 
            {
                for(int j=0; j<l-1-i; j++) 
                {
                    if(c[j]>c[j+1])
                    {
                        int tmp = c[j];
                        c[j] = c[j+1];
                        c[j+1] = tmp;
                        cnt++;
                    }
                }
            }
            cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
        }

    }
}
