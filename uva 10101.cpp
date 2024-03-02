#include<iostream>
#include<iomanip>
#include<vector>

using namespace std;

int main(){

    long long int num;
    string arr[4] = {"lakh", "hajar", "shata", "kuti"};
    int cnt = 0;
    while(cin>>num)
    {
		cnt++;
		//數字為0時，0要單獨印出
		if(num == 0)
		{
			cout << setw(4) << setfill(' ') << cnt << "."<<" 0"<<endl;
		}
		else	//數字不為0的情況
		{
			cout << setw(4) << setfill(' ') << cnt << ".";
			vector<int> v;
			int r[4];
			string rst_str;

			long long int tmp = num;

			int tmp_cnt = -1;	//紀錄又多少個kuti
			while(tmp>0)
			{
				tmp_cnt++;
				
				//kuti
				v.push_back(tmp%100);
				tmp /= 100;
				
				//shata
				v.push_back(tmp%10);
				tmp /= 10;
				
				//hajar
				v.push_back(tmp%100);
				tmp /= 100;
				
				//lakh
				v.push_back(tmp%100);
				tmp /= 100;

			}

			for(int i=v.size()-1; i>=0; i--)
			{

				if(v[i]!=0)
				{
					cout<<" "<<v[i];

					if(i%4==0 && i!=0)
						cout<<" kuti";
					else if(i%4==1)
						cout<<" shata";
					else if(i%4==2)
						cout<<" hajar";
					else if(i%4==3)
						cout<<" lakh";

				}
				else if(i%4==0 && i!=0)
					cout<<" kuti";

			}
        	cout<<endl;
		}
    }

}
