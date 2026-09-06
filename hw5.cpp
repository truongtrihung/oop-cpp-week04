#include <iostream>
using namespace std;

int main(){
    long long n;
    cout << "Nhap so n: ";
    cin >> n;

    // Ktra số n có âm ?
    bool laSoAm = false;
    if (n < 0){
        laSoAm = true;
        n = -n;     // Đảo dấu lại thành số dương cho dễ đảo số
    }

    // Sử dụng vòng while với công thức giống với bài ktra số đối xứng (HW4)

    long long so_dao_nguoc = 0;

    while (n > 0){
        int so_cuoi = n % 10;
        so_dao_nguoc = so_dao_nguoc * 10 + so_cuoi;
        n = n / 10;
    }


    // Nếu n ban đầu là số âm
    if (laSoAm){
        so_dao_nguoc = -so_dao_nguoc;
    }

    cout<< "So sau khi dao nguoc lai la: " << so_dao_nguoc << endl;
    
    return 0;

}