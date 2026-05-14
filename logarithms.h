#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

int logChoice;

void logarithms();
void logMenu();
void logOp();

void logarithms(){
    do{
        system("cls");
        logMenu();
        if(logChoice != 3){
            logOp();
        }else if(logChoice == 3){
            return;
        }
    }while(logChoice != 3);

}

void logMenu(){
    cout << "==========Logarithms==========\n";
    cout << "1. Log base 10\n";
    cout << "2. Natural log\n";
    cout << "3. Return to main menu\n";

    do{
        cin >> logChoice;
        if(logChoice < 1 || logChoice > 3){
            cout << "Invalid choice! Pick a number 1-3!\n";
        }
    }while(logChoice < 1 || logChoice > 3);
}

void logOp(){
    int a;
    cout << ".....................................\n";
        cout << "Enter value: ";
        cin >> a;
        switch(logChoice){
            case 1: cout << "The log base 10 of " << a << " = " << log10(a) << "\n";
            system("pause");
            break;
            case 2: cout << "The natural log of " << a << " = " << log(a) << "\n";
            system("pause");
            break;
        }
}