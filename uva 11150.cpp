#include<iostream>
using namespace std;
//最後若剩兩瓶可樂空瓶，可以多借一瓶空瓶，最後還回去1瓶 
//總共借超過一瓶都會虧

int main(){
    int n;
    int cola = 0;
    while(cin>>n){
       cola = n;

        while(n>=3){
            //新可樂
            cola += n/3;
            //新空杯
            n=n/3+n%3;

        }
        //如果最後剩兩瓶
        if(n==2)
            cola+=1;
        cout<<cola<<endl;
    }
}
