#include<iostream>
using namespace std;
//�̫�Y�Ѩ�~�i�֪Ų~�A�i�H�h�ɤ@�~�Ų~�A�̫��٦^�h1�~ 
//�`�@�ɶW�L�@�~���|��

int main(){
    int n;
    int cola = 0;
    while(cin>>n){
       cola = n;

        while(n>=3){
            //�s�i��
            cola += n/3;
            //�s�ŪM
            n=n/3+n%3;

        }
        //�p�G�̫�Ѩ�~
        if(n==2)
            cola+=1;
        cout<<cola<<endl;
    }
}
