//���Ϋت�k�s�n�O��ƦC�A�]�����ꪺ�d��A�i�H�} 40 ��N�� (�]�� [40] = 102334155 �W�L�d��)
//input�Opostive

#include <iostream>

using namespace std;

int f[40]={0,1};
//����f
void generate_f(){

    for(int i=2; i<40; i++)
    {
        f[i] = f[i-1]+f[i-2];
    }
}
int main(){
    int n, number, flag;
    //���ͶO��ƦC
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
                    //�w���}�Y1'
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
