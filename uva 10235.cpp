#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    bool flag;
    while(cin>>n)
    {
        flag = false;

        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
            {
                flag = true;
                break;
            }

        }
        // 0 �M 1���Oprime
        if(flag || n<2)
        {
            cout<<n<<" is not prime."<<endl;
        }
        else
        {
            //reverse
            int tmp = n, re = 0;
            while(tmp!=0)
            {
                re = re*10 + tmp%10;
                tmp/=10;
            }
            flag = false;
            for(int i=2; i<=sqrt(re); i++)
            {
                if(re%i==0)
                {
                    flag = true;
                    break;
                }

            }
            //�Yreverse����ۤv(�Ddiffent prime)�A����emirp
            if(!flag && re!=n)
                cout<<n<<" is emirp."<<endl;
            else
              cout<<n<<" is prime."<<endl;


        }
    }
}
