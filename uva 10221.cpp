#include<iostream>
#include<cmath>
#include<iomanip>
//��double��
/*
Degrees (�X), minutes (��), seconds (��)
1�X = 60��
1�� = 60��
*/
//���� arc = 2 * PI * R * a / 360  (deg>180, a=360-deg; deg<180, a=deg)
//���� chord = 2*( R * cos((90 �V a / 2)) / 180 * PI)(�����u�k)

using namespace std;

int main(){
    double r = 6440.0;
    double s, a;
    string st;
    double arc, chord;
    while(cin>>s>>a>>st){
        //�@�ߴ���degree
        if(st == "deg")
        {
            if(a>180) a = 360 - a;
        }
        else
        {
            a/=60.0;
        }

        //arc
        arc = (2.0*M_PI*(r+s))*(a/360.0);
        //chord
        //cos(����)
        chord = (cos((90-a/2.0)/180.0*M_PI)*(r+s))*2;

        //cout
        cout<<fixed<<setprecision(6)<<arc<<" "<<chord<<endl;
    }
}

