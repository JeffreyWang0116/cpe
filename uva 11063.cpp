#include <iostream>
#include <map>
using namespace std;

int main(){
int t = 0;
int n, sum;
int* b;
map<int, int> m;
string s;
bool flag;
while(cin>>n)
{
    flag = true;
    t++;
    b = new int[n];
    for(int i=0; i<n; i++)
    {
        cin>>b[i];
        //�ˬd�ɧ�
        if(b[i]<1 || (i>0 && b[i]<=b[i-1]))
            flag = false;
    }
    //�ˬdsum
    if(flag)
    {

        int i;
        for(i=0; i<n; i++)
        {
            for(int j=i; j<n; j++){

                sum = b[i]+b[j];
                m[sum]++;
                if(m[sum]>=2)
                {

                    flag = false;
                    break;
                }

            }
            if(!flag)
                break;

        }
    }


    if(flag)
        cout<<"Case #"<<t<<": It is a B2-Sequence."<<endl;
    else
        cout<<"Case #"<<t<<": It is not a B2-Sequence."<<endl;

    //�n�Ŧ�
    cout<<endl;

    delete b;
    m.clear();
    //Ū�ťզ�
    getline(cin, s);
}
}

