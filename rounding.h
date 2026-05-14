#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int rMChoice;

void rounding();
void roundingMenu();
void roundingOperations();

void rounding(){
    do{
        system("cls");
        roundingMenu();
        if(rMChoice != 4){
            roundingOperations();
        }else if(rMChoice == 4){
            return;
        }
    }while(rMChoice != 4);

}

void roundingMenu(){
    cout << "==========Rounding==========\n";
    cout << "1. Round down\n";
    cout << "2. Round up\n";
    cout << "3. Round to the nearest integer\n";
    cout << "4. Return to main menu\n";

    do{
        cin >> rMChoice;
        if(rMChoice < 1 || rMChoice > 4){
            cout << "Invalid choice! Pick a number 1-4\n";
        }
    }while(rMChoice < 1 || rMChoice > 4);
}

void roundingOperations(){
    double a;
    cout << ".....................................\n";
    cout << "Enter the number you want to round: ";
    cin >> a;

    switch(rMChoice){
        case 1: cout << a << " rounded down is " << floor(a) << "\n";
        system("pause");
        break;
        case 2: cout << a << "rounded up is " << ceil(a) << "\n";
        system("pause");
        break;
        case 3: cout << a << " rounded to the nearest integer is " << round(a) << "\n";
        system("pause");
        break;
    }
}