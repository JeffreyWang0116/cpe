//先用建表法存好費氏數列，因為測資的範圍，可以開 40 格就夠 (因為 [40] = 102334155 超過範圍)
//input是postive

#include <iostream>

using namespace std;

int f[40]={0,1};
//產生f
void generate_f(){

    for(int i=2; i<40; i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
}
int main(){
    int n, number, flag;
    //產生費氏數列
    generate_f();
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>number;
            flag = false;
            cout<<number<<" = ";
            for(int i=39; i>=2; i--)
            {
                if(number>=f[i])
                {

                    number -= f[i];
                    //已有開頭1'
                    flag = true;
                    cout<<"1";
                }
                else if(flag)
                    cout<<"0";

            }
            cout<<" (fib)"<<endl;

        }

    }

}
