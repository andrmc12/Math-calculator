/*
g++ calculator.cpp -o calculator.exe
.\calculator.exe
*/
#include <iostream>
#include <cstdlib>
#include "basic.h"
#include "exponentsroots.h"
#include "rounding.h"
#include "logarithms.h"
#include "trigonometry.h"
#include "extras.h"
#include "functions.h"

using namespace std;

int menuChoice;

void menu();

int main(){
    do{
        system("cls");
        menu();
        if(menuChoice == 1){
            basic();
        }else if(menuChoice == 2){
            exponentsRoots();
        }else if(menuChoice == 3){
            rounding();
        }else if(menuChoice == 4){
            logarithms();
        }else if(menuChoice == 5){
            trigonometry();
        }else if(menuChoice == 6){
            extras();
        }else if(menuChoice == 7){
            functions();  
        }else{
            cout << "Bye";
        }
    }while(menuChoice != 8);
    return 0;
}

void menu(){
    cout << "==========MENU==========\n";
    cout << "1. Basic operations\n";
    cout << "2. Exponents and roots\n";
    cout << "3. Rounding\n";
    cout << "4. Logarithms\n";
    cout << "5. Trigonometry\n";
    cout << "6. Extras(percentage, absolute, factorial)\n";
    cout << "7. Function\n";
    cout << "8. Exit\n";

    do{
        cin >> menuChoice;
        if(menuChoice < 1 || menuChoice > 8){
            cout << "Invalid choice! Pick a number 1-8!\n";
        }
    }while(menuChoice < 1 || menuChoice > 8);
}