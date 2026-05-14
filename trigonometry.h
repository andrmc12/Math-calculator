#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int trigChoice;

void trigonometry();
void trigMenu();
void trigOp();

void trigonometry(){
    do{
        system("cls");
        trigMenu();
        if(trigChoice == 4){
            return;
        }else if(trigChoice != 4){
            trigOp();
        }
    }while(trigChoice != 4);

}

void trigMenu(){
    cout << "==========Trigonometry==========\n";
    cout << "1. Sine\n";
    cout << "2. Cosine\n";
    cout << "3. Tangent\n";
    cout << "4. Return to main menu\n";

    do{
        cin >> trigChoice;
        if(trigChoice < 1 || trigChoice > 4){
            cout << "Invalid option! Pick a number 1-4!\n";
        }
    }while(trigChoice < 1 || trigChoice > 4);
}

void trigOp(){
    double a;
    double radians;
    cout << ".....................................\n";
    cout << "Enter angle: ";
    cin >> a;
    radians = a * (acos(-1) / 180); // convert degrees to radians
    switch(trigChoice){
        case 1: cout << "Sine of " << a << " = " << sin(radians) << "\n";
        system("pause");
        break;
        case 2: cout << "Cosine of " << a << " = " << cos(radians) << "\n";
        system("pause");
        break;
        case 3: cout << "Tangent of " << a << " = " << tan(radians) << "\n";
        system("pause");
        break;
    }
}