#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so n: ";
    cin >> n;

    long long so_goc = n;  // Số gốc 

    // Ktra số 0
    if (n == 0){
        cout << "So 0 co 1 chu so" << endl;
        return 0;
    }

    // Ktra âm và đổi lại thành dương 
    if (n < 0){
        n = -n;
    }


    int dem_so = 0;

    while (n > 0){
        dem_so++;
        n = n / 10;
    }

    cout << "So " << so_goc << " co " << dem_so << " chu so" << endl;

    return 0;
}