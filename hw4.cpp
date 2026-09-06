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
        int so_cuoi = n % 10;   // lấy số cuối
        so_dao_nguoc = so_dao_nguoc * 10 + so_cuoi;     // lấy số đảo ngược rồi bỏ ra đằng sau số cuối tạo thành số đảo ngược mới 
        n = n / 10;     // Bỏ số cuối sau khi xử lý và kết thúc vòng lặp 
        // VD: n = 121
        // Vòng lặp 1: Lấy số cuối = 1 --> số đảo ngc = 1 --> n = n / 10 loại bỏ số 1 cuối sau khi xử lý => còn 12
        // Vòng lặp 2: lấy số cuối = 2 -- > số đảo ngc = 1 * 10 + 2 = 12 (số đảo ngược mới) --> n = n / 10 loại bỏ số 2 sau khi xử lý
        // Vòng lặp 3: Còn số 1 --> số đảo ngc = 12 * 10 + 1 = 121 == n ban đầu => 121 là số đảo ngc
    }

    return so_dao_nguoc == so_goc;
}