#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int choice;

void exponentsRoots();
void eRMenu();
void operationsER();

void exponentsRoots(){
    do{
        system("cls");
        eRMenu();
        if(choice != 4){
            operationsER();
        }else if(choice == 4){
            return;
        }
    }while(choice != 4);
}

void eRMenu(){
    cout << "==========Exponents and roots==========\n";
    cout << "1. Power ( x^y )\n";
    cout << "2. Square root\n";
    cout << "3. Nth root\n";
    cout << "4. Return to main menu\n";

    do{
        cin >> choice;
        if(choice < 1 || choice > 4){
            cout << "Invalid choice! Pick a number 1-4!\n";
        }
    }while(choice < 1 || choice > 4);
}

void operationsER(){
    double a;
    double b;
    cout << "........................\n";
    if(choice == 1){
        cout << "Enter the base: ";
        cin >> a;
    cout << "........................\n";
        cout << "Enter exponent: ";
        cin >> b;
    }else if(choice == 2){
        cout << "Enter radical: ";
        cin >> a;
    }else if(choice == 3){
        cout << "Enter radical: ";
        cin >> a;
    cout << "........................\n";
        cout << "Enter index: ";
        cin >> b;
    }
    cout << "========================\n\n";

    switch(choice){
        case 1: cout << a << "^" << b << " = " << pow(a, b) << "\n";
        system("pause");
        break;
        case 2: cout << "Square root of " << a << " = " << sqrt(a) << "\n";
        system("pause");
        break;
        case 3: cout << b << "th root of " << a << " = " << pow(a, 1.0 / b) << "\n";
        system("pause");
        break;
    }
}