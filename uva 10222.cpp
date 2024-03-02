#include <iostream>
using namespace std;

int main(){
    string keyboard = " `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./";
    string line;
    while(getline(cin, line))
    {
        for(int i=0; i<line.length(); i++)
        {
            //Âà¤p¼g
            if(line[i]>='A' && line[i]<='Z')
                line[i] = line[i]-'A'+'a';

            if(line[i] == keyboard[0])
            {
                cout<<" ";
            }
            else
            {
                for(int j=0; j<keyboard.length(); j++)
                {
                    if(line[i] == keyboard[j])
                    {
                        cout<<keyboard[j-2];
                    }

                }
            }

        }
        cout<<endl;
    }

}
