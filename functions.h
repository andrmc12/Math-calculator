#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int fChoice;

void functions();
void fMenu();
void fOp();

void functions(){
    do{
        system("cls");
        fMenu();
        if(fChoice == 2){
            return;
        }else{
            fOp();
        }
    }while(fChoice != 2);

}

void fMenu(){
    cout << "==========Functions==========\n";
    cout << "1. Calculate intersection\n";
    cout << "2. Return to main menu\n";

    do{
        cin >> fChoice;
        if(fChoice < 1 || fChoice > 2){
            cout << "Invalid choice! Pick a number 1-2!\n";
        }
    }while(fChoice < 1 || fChoice > 2);
}

void fOp(){
    double a;
    double b;
    double x;
    double y;
    char sign;
    double fx;
    cout << "...............................................................................................................\n";
    cout << "f:R -> R, f(x) = ax +/- b\n";
    cout << "Enter sign(+ or -): ";
    cin >> sign;
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;

    switch(sign){ //ax + b = 0
        case '+': fx = 0 - b;
        fx = (fx / a);
        cout << "Gf intersects Ox in A(" << fx << "; 0)\n";
        cout << "Gf intersects Oy in B(0;" << b << ")\n";
        system("pause");
        break;
        case '-': fx = 0 + b;
        fx = (fx / a);
        cout << "Gf intersects Ox in A(" << fx << "; 0)\n";
        cout << "Gf intersects Oy in B(0;" << -b << ")\n";
        system("pause");
        break;
    }
}