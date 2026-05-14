#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int eChoice;

void extras();
void eMenu();
void eOp();

void extras(){
    do{
        system("cls");
        eMenu();
        if(eChoice != 4){
            eOp();
        }else{
            return;
        }
    }while(eChoice != 4);
}

void eMenu(){
    cout << "==========Extras==========\n";
    cout << "1. Absolute value\n";
    cout << "2. Percentage\n";
    cout << "3. Factorial\n";
    cout << "4. Return to main menu\n";

    do{
        cin >> eChoice;
        if(eChoice < 1 || eChoice > 4){
            cout << "Invalid choice! Pick a number 1-4!\n";
        }
    }while(eChoice < 1 || eChoice > 4);
}

void eOp(){
    double a;
    double b;
    double factorial = 1;
    cout << ".....................................\n";
    if(eChoice == 1 || eChoice == 3){
        cout << "Enter number: ";
        cin >> a;
    }else if(eChoice == 2){
        cout << " ... is what percent of ...\n";
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;
    }

    if(eChoice == 3){
        for(int i = 1; i <= a; i++){
            factorial = factorial * i;
        }
    }

    switch(eChoice){
        case 1: cout << "Absolute value of " << a << " = " << abs(a) << "\n";
        system("pause");
        break;
        case 2: cout << a << " is " << (a / 100) * b << "% of " << b << "\n";
        system("pause");
        break;
        case 3: cout << a << "factorial = " << factorial << "\n";
        system("pause");
        break;
    }
}