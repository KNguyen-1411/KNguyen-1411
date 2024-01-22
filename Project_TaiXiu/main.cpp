#include<bits/stdc++.h>
#include"Login.h"
#include<cstdlib>
#include<time.h>
#include<Windows.h>
using namespace std;
void delay(unsigned int x) {
    unsigned int tgtr1;
    while (x != 0)
    {
        tgtr1 = 121;
        while (tgtr1 != 0)
        {
            tgtr1 -= 1;
        }
        x -= 1;
    }
}
void TextColor(int x)
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, x);
}
int naptien() {
    system("cls");
    TextColor(9);
    cout << "So du:0\n";
    cout << "Nhap 1 de nap tien_Nhap 2 de huy\n";
    int tc, tien; cin >> tc;
    if (tc == 1) {
        cout << "Nhap so tien muon nap\n";
        cin >> tien;
        cout << "Nap thanh cong\n";
        TextColor(6);
        cout << "------------------------------->\n";
        cout << "Tu dong chuyen tab sau vai giay.";
        delay(10000000); 
        TextColor(9);
        return tien;
    }
    else {
        exit(0);
    }
}
bool kq() {
    srand((int)time(NULL));
    int t = rand() % 100 + 1;
    if (t > 70) {
        return 1;
    }
    else {
        return 0;
    }
}
void choi(int tien) {
taixiu:
    system("cls");
    TextColor(12);
    cout << "Nhan 1 de chon game tai xiu:_Nhan 2 de thoat_Nhan 3 de nap them tien\n";
    int lc; cin >> lc;
    if (lc == 2) { exit(0); }
    else if (lc == 3) { naptien(); }
    else {
        cout << "Nhan 0 chon xiu_Nhan 1 chon tai\n";
        int tx, tc; cin >> tx;
    cuoc:
        cout << "So tien cuoc:\n";
        cin >> tc;
        if (tc > tien) {
            cout << "Khong du so du_Nhan 1 de cuoc lai_Nhan 2 de nap tien\n";
            int lc; cin >> lc;
            if (lc == 1) {
                goto cuoc;
                cout << "Tu dong chuyen tab sau vai giay.";
                delay(10000000);
            }
            else {
                tien = naptien();
                cout << "Tu dong chuyen tab sau vai giay.";
                delay(10000000);
                goto taixiu;
            }
        }
        else {
            if (kq()) {
                tien += tc;
                if (tx == 0) {
                    cout << "Xiu  _  Thang\n";
                }
                else {
                    cout << "Tai  _  Thang\n";
                }
                cout << "So du: " << tien << endl;
                TextColor(6);
                cout << "-------------------------------\n";
                cout << "Tu dong chuyen tab sau vai giay.";
                TextColor(6+6);
                delay(10000000);
                goto taixiu;
            }
            else {
                tien -= tc;
                if (tx == 0) {
                    cout << "Tai   _   Thua\n";
                }
                else {
                    cout << "Xiu   _   Thua\n";
                }
                cout << "So du: " << tien << endl;
                TextColor(6);
                cout << "------------------------------->\n";
                cout << "Tu dong chuyen tab sau vai giay.";
                TextColor(12);
                delay(10000000);
                goto taixiu;
            }
        }
    }
}
int main() {
    TextColor(4);
    cout << "        TAI XIU UY TIN\n";
    cout << "-------------------------------\n";
    int n;
    TextColor(12);
    tb(3);
    cin >> n;
    TextColor(11);
    dangnhap(n);
    cout << "Tu dong chuyen tab sau vai giay.";
    delay(10000000);
    int tien = naptien();
    choi(tien);
	return 0;
}
