#include<iostream>
using namespace std;

int main(){
    int n1, n2;
    while(cin >> n1 >> n2){
        int carry = 0; // �O���i�즸��
        int cnt = 0; // �p�ƶi�쪺����
        
        if(n1 == 0 && n2 == 0) break; // �Y��ӼƳ��� 0 �h�h�X�j��
        
        while(n1 > 0 || n2 > 0){ // ��䤤�@�Ӽ��٦���Ʈɫ������
            int digit1 = n1 % 10; // ���X n1 ���Ӧ��
            int digit2 = n2 % 10; // ���X n2 ���Ӧ��
            int sum = digit1 + digit2 + carry; // �p���e�쪺�M�]�]�A�i��^
            if(sum >= 10){ // �p�G�M�j�󵥩� 10�A���Ͷi��
                cnt++;
                carry = 1; // �]�m�i��
            }
            else{ // �p�G�M�p�� 10�A�S���i��
                carry = 0;
            }
            n1 /= 10; // ���ʨ�U�@��
            n2 /= 10; // ���ʨ�U�@��
        }
        
        if(cnt == 0) cout << "No carry operation." << endl;
        else if(cnt == 1) cout << "1 carry operation." << endl;
        else cout << cnt << " carry operations." << endl;
    }
    return 0;
}

