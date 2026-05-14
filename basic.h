#include <iostream>
#include <cstdlib>

using namespace std;

int basicMenuChoice;

void basic();
void basicMenu();
void operations();

void basic(){
    do{
        system("cls");
        basicMenu();
        if(basicMenuChoice != 5){
            operations();
        }else if(basicMenuChoice == 5){
            cout << "returning to main menu!\n";
            return;
        }
    }while(basicMenuChoice != 5);
}

void basicMenu(){
    cout << "==========Basic==========\n";
    cout << "1. Addition ( a + b )\n";
    cout << "2. Subtraction ( a - b )\n";
    cout << "3. Multiplication ( a * b )\n";
    cout << "4. Division ( a / b )\n";
    cout << "5. Return to main menu\n";

    do{
        cin >> basicMenuChoice;
        if(basicMenuChoice < 1 || basicMenuChoice > 5){
            cout << "Invalid choice! Pick a number 1-5!\n";
        }
    }while(basicMenuChoice < 1 || basicMenuChoice > 5);
}

void operations(){
    double a;
    double b;

    cout << "........................\n";
    cout << "Enter first number: ";
    cin >> a;
    cout << "........................\n";
    cout << "Enter the second number: ";
    cin >> b;
    cout << "========================\n\n";
    switch(basicMenuChoice){
        case 1: cout << a << " + " << b << " = " << a + b << "\n";
        system("pause");
        break;
        case 2: cout << a << " - " << b << " = " << a - b << "\n";
        system("pause");
        break;
        case 3: cout << a << " * " << b << " = " << a * b << "\n";
        system("pause");
        break;
        case 4: 
        if(b != 0){
            cout << a << " / " << b << " = " << a / b << "\n";
        }else if(b == 0){
            cout << "Error!\n";
        }
        system("pause");
        break;
    }

}