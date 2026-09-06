#include <iostream>
using namespace std;

bool laSoDoiXung (long long n);

int main(){
    long long n;
    cout << "Nhap so n: ";
    cin >> n;

    if (laSoDoiXung(n)){
        cout << n << " la so doi xung" << endl;
    }
    else{
        cout << n << " khong phai la so doi xung" << endl;
    }

    return 0;
}

bool laSoDoiXung (long long n){
    if (n < 0) return false;

    long long so_goc = n;
    long long so_dao_nguoc = 0;

    while (n > 0){
        int so_cuoi = n % 10;
        so_dao_nguoc = so_dao_nguoc * 10 + so_cuoi;
        n = n / 10;
    }

    return so_dao_nguoc == so_goc;
}