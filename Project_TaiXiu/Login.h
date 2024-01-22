#include<iostream>
using namespace std;
void tb(int tb) {           //thong bao
    if (tb == 1) {
        cout << "Dang nhap thanh cong!\n";
    }
    else if (tb == 2) {
        cout << "Dang nhap that bai!\n\n";
    }
    else if (tb == 3) {
        cout << "Nhap 1 de dang nhap_Nhap 2 de tao tai khoan\n";
    }
    else if (tb == 4) {
        cout << "Nhap ten nguoi dung:\n";
    }
    else if (tb == 5) {
        cout << "Nhap mat khau:\n";
    }
    else if (tb == 6) {
        cout << "Nhap 1 de xac nhan_Nhap 2 de huy\n";
    }
    else if (tb == 7) {
        cout << "\nNhap 1 de bat dau dang nhap_Nhan 2 de huy:\n";
    }
}
void dangnhap(int dangnhap) {       //dang nhap
    if (dangnhap == 1) {
        string tk1, mk1, tk = "knguyen", mk = "bop14";
    dangnhap:
        tb(4); cin >> tk1;
        tb(5); cin >> mk1;
        if (tk1 == tk && mk1 == mk) {
            tb(1);
            cout << "-------------------------------\n";
        }
        else {
            tb(2);
            cout << "-------------------------------\n";
            goto dangnhap;
        }
    }
    else {
        int tc;
        string tk1, mk1;
        tb(4);  cin >> tk1;
        tb(5);  cin >> mk1;
        tb(7);  cin >> tc;
        if (tc == 1) {
            string tk, mk;
        dangnhap1:
            tb(4); cin >> tk;
            tb(5); cin >> mk;
            if (tk == tk1 && mk == mk1) {
                tb(1);
                cout << "-------------------------------\n";
            }
            else {
                tb(2);
                goto dangnhap1;
            }
        }
        else {
            exit(0);
        }
    }
}



