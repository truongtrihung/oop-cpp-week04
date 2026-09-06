#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    // Đặt số gốc 
    long long so_goc_a = a;
    long long so_goc_b = b;

    // Lấy giá trị tuyệt đối vì UCLN chỉ tính nguyên dương
    a = abs(a);
    b = abs(b);

    while (b != 0){
        long long so_du = a % b;
        a = b;
        b = so_du;
    }

    // VD: a = 12; b = 18
    // Vòng lặp 1:   12 % 18 = 12
    //          Đổi: a = 18; b = 12 (số dư)
    // Vòng lặp 2:   18 % 12 = 6
    //          Đổi: a = 12; b = 6
    // Vòng lặp 3:   12 % 6 == 0
    //          Đổi: a = 6; b = 0   ==> a là UCLN

    cout << "So " << so_goc_a << " va so " << so_goc_b << " co UCLN la: " << a << endl;

    return 0; 
}