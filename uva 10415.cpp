//29
#include<iostream>

using namespace std;

int main(){
    char c[14] = {'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C', 'D', 'E', 'F', 'G', 'A', 'B'};
    int finger[14][10] = {
        {0, 1, 1, 1, 0, 0, 1, 1, 1, 1},
        {0, 1, 1, 1, 0, 0, 1, 1, 1, 0},
        {0, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {0, 1, 1, 1, 0, 0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0, 0, 0, 0, 0, 0},
        {0, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 1, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 1, 0, 0, 1, 1, 1, 0},
        {1, 1, 1, 1, 0, 0, 1, 1, 0, 0},
        {1, 1, 1, 1, 0, 0, 1, 0, 0, 0},
        {1, 1, 1, 1, 0, 0, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0, 0, 0, 0, 0},
        {1, 1, 0, 0, 0, 0, 0, 0, 0, 0},
    };
    int t;
    string s;
    int last = -1;  //�O���W�@�ӭ�
    while(cin>>t){
        //\n
        cin.get();
        for(int i=0; i<t; i++){
            //��getline�קK�ť�notes�SŪ��
            getline(cin, s);
            int cnt[10] = {0};

            for(int j=0; j<s.length(); j++)
            {
                //run c
                for(int k=0; k<14; k++)
                {
                    if(s[j] == c[k])
                    {
                        //run finger
                        for(int l=0; l<10; l++)
                        {
                            if(j==0)
                            {
                                cnt[l]+=finger[k][l];
                            }
                            else
                            {
                                //�W�@�ӭ��S���A�o�ӭ����Gpress+1
                                if(finger[k][l]-finger[last][l] == 1)
                                    cnt[l] += 1;
                            }
                        }
                        //update last
                        last = k;
                        break;
                    }
                }
            }
            //cout
            for(int j=0; j<10; j++)
            {
                cout<<cnt[j];
                if(j!=9)
                    cout<<" ";
            }
            cout<<endl;

        }
    }

}
