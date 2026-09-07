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

    // Đổi âm -> dương
    a = abs(a);
    b = abs(b);

    // a,b = 0
    if (a == 0 && b == 0){
        cout << "BCNN cua " << so_goc_a << " va " << so_goc_b << " la = 0" << endl;
        return 0;
    }

    // Lấy max là điểm start --> Bội chung không thể nhỏ hơn max 
    long long boi_so = max(a, b);
    long long buoc_nhay = boi_so;

    long long so_nho = min(a, b);

    while (boi_so % so_nho != 0){
        boi_so = buoc_nhay + buoc_nhay;
    }

    // VD: a = 6; b = 9
    // max = 9, min = 6 => boi_so = buoc_nhay = 9
    // VL1: 9 % 6 = 3 => boi_so = 9 + 9 = 18
    // VL2: 18 % 6 = 0 => đk while sai trả lại BCNN = 18

    cout << "BCNN cua " << so_goc_a << " va " << so_goc_b << " la " << boi_so << endl;
    

    return 0;
}
