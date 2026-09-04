#include <iostream>
#include <cmath>
using namespace std;

bool kiemtraNguyenTo (int n);

int main (){
    int n;
    cout << "Nhap so n: ";
    cin >> n;

    if (kiemtraNguyenTo (n)){
        cout << n << " la so nguyen to" << endl;
    }
    else cout << n << " khong phai la so nguyen to" << endl; 

    return 0;
}

bool kiemtraNguyenTo (int n){
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;

}
