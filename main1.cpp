#include <iostream>
using namespace std;

void printName(string name);

int main(){
    string name;
    
    printName (name);

    return 0;
}

void printName(string name){
    cout << "Enter your name: ";
    getline (cin, name);

    cout << endl;

    cout << name << endl;

}

