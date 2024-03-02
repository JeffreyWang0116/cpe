#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    while(cin >> n1 >> n2){
        int carry = 0; // 記錄進位次數
        int cnt = 0; // 計數進位的次數
        
        if(n1 == 0 && n2 == 0) break; // 若兩個數都為 0 則退出迴圈
        
        while(n1 > 0 || n2 > 0){ // 當其中一個數還有位數時持續執行
            int digit1 = n1 % 10; // 取出 n1 的個位數
            int digit2 = n2 % 10; // 取出 n2 的個位數
            int sum = digit1 + digit2 + carry; // 計算當前位的和（包括進位）
            if(sum >= 10){ // 如果和大於等於 10，產生進位
                cnt++;
                carry = 1; // 設置進位
            }
            else{ // 如果和小於 10，沒有進位
                carry = 0;
            }
            n1 /= 10; // 移動到下一位
            n2 /= 10; // 移動到下一位
        }
        
        if(cnt == 0) cout << "No carry operation." << endl;
        else if(cnt == 1) cout << "1 carry operation." << endl;
        else cout << cnt << " carry operations." << endl;
    }
    return 0;
}

