#include <iostream>
#include <string>
using namespace std; 

void inputStudent(int n, string names[], string ids[], string phones[]);
void outputStudent(int n, string names[], string ids[], string phones[]);

int main()
{
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    string names[20];
    string ids[20];
    string phones[20];

    cout << "Hello, C++!" << endl;

    inputStudent(n, names, ids, phones);

    outputStudent (n, names, ids, phones);

    return 0;
}

void inputStudent(int n, string names[], string ids[], string phones[]){
    
    if (n>0){

        cin.ignore();

        for (int i = 0; i<n;i++){
            cout << "Enter information of student " << i + 1 << endl;

           

            cout << "Name:";
            getline (cin, names[i]);


            cout << "ID: ";
            getline (cin, ids[i]);

            
            cout << "Phone : ";
            getline (cin, phones[i]);
        }
        cout << "===Number of inputted students: " << n << "==="<< endl;

    }
    else{
        cout << "The number of students must be more than 0" << endl;
    }
    
}

void outputStudent(int n, string names[], string ids[], string phones[]){
    for (int i = 0; i < n; i++){
        cout << " * Student    :" << i + 1 << endl;
        cout << " * Name       :" << names[i] << endl;
        cout << " * ID         :" << ids[i] << endl;
        cout << " * Phone      :" << phones[i] << endl;
    }
}