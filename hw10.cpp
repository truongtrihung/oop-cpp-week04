#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so n: ";
    cin >> n;

    if (n == 0){
        cout << "So 0 co rat nhieu uoc TRU SO 0" << endl;
        return 0;
    }

    // Số gốc n
    long long so_goc_n = n;

    // Đổi âm -> dương 
    n = abs(n);

    cout << "So uoc: Divisors: ";

    long long uoc = 0;
    for (long long i = 1; i <= n; i++){
        if (n % i == 0){
            cout <<i << " ";
            uoc++;
        }
    }
    
    cout << endl;
    
    cout << "Number of divisors: " << uoc << endl;

    return 0;
}