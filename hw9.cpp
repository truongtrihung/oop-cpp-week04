#include <iostream>
using namespace std;

int main(){
    double x;
    long long n;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap so mu n: "; cin >> n;

    if (n == 0){
        cout << x << "^0 = 1" << endl;
        return 0;
    }

    long long ket_qua = 1;
    long long so_mu_n_ban_dau = n;

    while (n > 0){
        ket_qua = ket_qua * x;
        n = n - 1; 
    }

    cout << "Tich cua " << x << "^" << so_mu_n_ban_dau << " la " << ket_qua << endl;

    return 0;
}