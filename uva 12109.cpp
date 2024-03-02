#include <iostream>
using namespace std;

int main(){
    string day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    int num_day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int n, m, d;
   
    //��4/4���O�Ӧ~�ĴX��
    int base_day = 4;
    for(int i=0; i<3; i++)
        base_day+=num_day[i];

    //��1/1���O�P���X
    int base = 6-((base_day-1)%7);
    while(cin>>n)
    {
        for(int i=0; i<n; i++)
        {
            cin>>m>>d;

            // �ĴX��
            int days = 0;
            for(int j=0; j<m-1; j++)
                days+=num_day[j];

            days+=d;

            //�P���X
            int day_index = (days + base)%7;
            cout<<day[day_index]<<endl;

        }


    }
}
