#include<iostream>
using namespace std;

int main(){
    int gx, gy;
    int rx, ry, rdir;
    char ror;
    string s;
    char dir[4] = {'N', 'E', 'S', 'W'};
    char dir_pos[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};

    while(cin>>gx>>gy)
    {
        //紀錄曾掉落位置
        int lost[gx][gy];
        for(int i=0; i<gx; i++)
                for(int j=0; j<gy; j++)
                    lost[gx][gy] = 0;

        while(cin>>rx>>ry>>ror)
        {
            cin.get();
            getline(cin, s);

            //init
            for(int i=0; i<4; i++)
            {
                if(ror == dir[i])
                {
                    rdir = i;
                    break;
                }
            }

            int i;
            for(i=0; i<s.length(); i++){
                if(s[i] == 'L')
                {
                   rdir = (rdir+3)%4;

                }
                else if(s[i] == 'R')
                {
                    rdir = (rdir+1)%4;
                }
                else if(s[i] == 'F')
                {
                    rx = rx+dir_pos[rdir][0];
                    ry = ry+dir_pos[rdir][1];


                    if(rx<0 || rx>gx || ry<0 ||ry>gy)
                    {
                        //上一步位置有曾記錄過，則機器人會忽略此指令
                        if(lost[rx-dir_pos[rdir][0]][ry-dir_pos[rdir][1]] == 1)
                        {
                            //復原
                            rx -= dir_pos[rdir][0];
                            ry -= dir_pos[rdir][1];
                        }
                        else    //掉落
                        {
                            if(rx>gx) rx = gx;
                            else if(rx<0) rx = 0;

                            if(ry>gy) ry = gy;
                            else if(ry<0) ry = 0;

                            lost[rx][ry] = 1;

                            break;
                        }
                    }
                }
            }
            cout<<rx<<" "<<ry<<" "<<dir[rdir];
            if(i<s.length())
                cout<<" LOST";
            cout<<endl;
        }
    }
}
