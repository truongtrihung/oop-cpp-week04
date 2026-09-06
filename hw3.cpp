#include <iostream>
using namespace std;

bool laSoHoanHao (long long n);

int main (){
    long long n;
    cout << "Nhap so n: ";
    cin >> n;

    if (n <= 1){
        cout << n << " khong phai la so hoan hao" << endl;
        return 0;
    }

    if (laSoHoanHao(n) == true){
        cout << n << " la so hoan hao" << endl;
    }
    if (laSoHoanHao(n) == false){
        cout << n << " khong phai la so hoan hao" << endl;
    }

    return 0;
}

bool laSoHoanHao (long long n){
    long long sum = 0;

    for (int i = 1; i < n; i++){
        if (n % i == 0){
            sum = sum + i;
        }
    }

    // Số hoàn hảo là các số mà ước của nó cộng lại bằng chính nó ví dụ như số 6
    // 6 có ước là 3, 2, 1 thì 1 + 2 + 3 = 6 => số hoàn hảo  

    if (sum == n) return true;
    else return false;

}