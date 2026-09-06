#include <iostream>
using namespace std;

int main(){
    long long n;
    
    cout << "Nhap so n: ";
    cin >> n;

    if (n < 0 || n > 20){   // Chặn lỗi tràn số 
        cout << "Nhap so n khong hop le. Vui long nhap lai (0 <= n <= 20)." << endl;
        return 1; 
    }

    long long factorial = 1;

    for (long long i = 1; i <= n; i++){
        factorial = factorial * i;
    }

    cout << "Giai thua cua " << n << " la: " << factorial << endl;

    return 0;
}