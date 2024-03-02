#include<iostream>
#include<iomanip>
using namespace std;
//重疊者做(x2, y2);
//向量加法：(x1-x2, y1-y2)+(x3-x2, y3-y2)=(x4-x2, y4-y2)
int main(){
    double tmp[8], x[3], y[3];
    int index[2];
    while(cin>>tmp[0]>>tmp[1]>>tmp[2]>>tmp[3]>>tmp[4]>>tmp[5]>>tmp[6]>>tmp[7]){
        //找重複
        for(int i=0; i<4; i++)
        {
            for(int j=i+1; j<4; j++)
            {
                if(tmp[i*2]==tmp[j*2] && tmp[i*2+1]==tmp[j*2+1])
                {
                    index[0] = i;
                    index[1] = j;
                    x[1] = tmp[i*2];
                    y[1] = tmp[i*2+1];
                }
            }
        }
        int k=0;
        for(int i=0; i<4; i++)
        {
            if(i!=index[0] && i!=index[1])
            {
                x[k]=tmp[i*2];
                y[k]=tmp[i*2+1];
                k++;
            }
            if(k==1)k++;
            if(k==3) break;
        }
        //向量加法
        double dx = (x[0]-x[1]+x[2]-x[1]);
        double dy = (y[0]-y[1]+y[2]-y[1]);
        cout<<fixed<<setprecision(3)<<x[1]+dx<<" "<<y[1]+dy<<endl;

    }
}
