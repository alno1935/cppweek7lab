#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int a=500; //money
int b; //binary guess
int c; //how much you want to bet
int d; //money after bet has been taken
    cout<< "\nWelcome user, to binary Roulette. \n";
    cout<< "The rules are simple, to play you just need to enter either 1 or 0 and the amount of money you wish to bet. \n";
    cout<< "you start with $500, if you guess the correct number you get double what you bet. \n";
    cout<< "But if you guess incorrectly you lose the amount you bet. \n";
while (a>0){
    srand( time(NULL) );


    cout<< "\nPlease enter 1 or 0. \n";
    cin>> b;
    if (b>=2) {
        cout<<"please enter a 1 or 0 only";
        break;
    }
    else {
    cout<< "Please enter the amount you wish to bet. \n";
    cin>> c;
    
    if (c>a) {
        cout<<"not enough money, try again.";
    }
    else
    {
        
    
    a=a-c;
int random = rand() % 2;
        if (random==b) {
            int win=c*2;
            a=a+win;
            cout << "You won, congratulations! you now have " <<a;
        }
        else if (random!=b) {
            cout << "You lost, sorry! you now have " <<a;
            }}
        }
    }
}