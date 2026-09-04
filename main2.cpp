#include <iostream>
using namespace std;

void giaiPTbac1(float a, float b);

int main(){
    float a, b;

    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;

    cout << endl;

    giaiPTbac1(a, b);

    return 0;
}

void giaiPTbac1(float a, float b){
    if (a == 0){
        if (b == 0){
            cout << "Phuong trinh co vo so nghiem" << endl;
        }
        else cout << "Phuong trinh vo nghiem" << endl;
    }
    else if (b == 0){
        cout << "x = 0" << endl;
    }
    else if (a != 0 && b != 0){
        cout << "x = " << -b/a << endl;
    }
}