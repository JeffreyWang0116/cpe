#include <iostream>
using namespace std;

int main(){
    int n, tmp;
    string s;
    while(cin>>n){
        if(n==0) break;

        //¬ö¿ýdie ¥¿¡B¥_¡B¦è
        int die[3] = {1, 2, 3};
        for(int i=0; i<n; i++)
        {
            cin>>s;
            if(s=="north")
            {
                tmp = die[0];
                die[0] = 7-die[1];  //top:south
                die[1] = tmp;    //north:top
            }
            else if(s=="south")
            {
                tmp = die[0];
                die[0] = die[1];
                die[1] = 7-tmp;

            }
            else if(s=="east")
            {
                tmp = die[0];
                die[0] = die[2];
                die[2] = 7-tmp;
            }
            else if(s=="west")
            {
                tmp = die[0];
                die[0] = 7-die[2];
                die[2] = tmp;
            }
        }

        cout<<die[0]<<endl;
    }
}
