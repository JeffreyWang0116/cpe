#include<iostream>
using namespace std;
//(0, 0)��(x, y)step�G 
//�U�b�Y�Gx+y
//�W�b�Y�G0+1+2+3+...+(x+y-1)+x
//�W�b�Y +�U�b�Y=(0+(x+y))*(x+y+1)/2+x
//(sx, sy)��(dx, dy)step =  (0, 0)��(dx, dy)step - (0, 0)��(sx, sy)step
int main(){
    int n, sx, sy, dx, dy;
    while(cin>>n){
        for(int i=0; i<n; i++)
        {
            cin>>sx>>sy>>dx>>dy;
            //0-s
            int steps = (0+(sx+sy))*(sx+sy+1)/2+sx;
            //0-d
            int stepd = (0+(dx+dy))*(dx+dy+1)/2+dx;
            cout<<"Case "<<i+1<<": "<<stepd-steps<<endl;
        }
    }
}
