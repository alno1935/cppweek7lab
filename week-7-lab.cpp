#include <iostream>
#include <time.h>
using namespace std;

int main() {
    int a=500; //initial amount of money
int b; //binary guess to be inputed by user
int c; //how much user wants to bet
int d; //money after bet has been taken
    cout<< "\nWelcome user, to binary Roulette. \n";
    cout<< "The rules are simple, to play you just need to enter either 1 or 0 and the amount of money you wish to bet. \n";
    cout<< "you start with $500, if you guess the correct number you get double what you bet. \n";
    cout<< "But if you guess incorrectly you lose the amount you bet. \n"; //intructions on how to play the game for the user
while (a>0){  //beginning of while loop, if vairable "a"(or money) is greater than zero it loops
    srand( time(NULL) ); //if you run out of money  ("a" hits zero) it exits the loop


    cout<< "\nPlease enter 1 or 0. \n"; //instructions to make bet
    cin>> b; //user inputing what they believe the answer will be
    if (b>=2) {
        cout<<"please enter a 1 or 0 only"; //if user type anything other than one or zero the loop restarts
        break;
    }
    else {
    cout<< "Please enter the amount you wish to bet. \n"; //intructions to change amount you wish to bet
    cin>> c; //user input the amount of money they wish to bet
    
    if (c>a) {
        cout<<"not enough money, try again."; //if user tries to bet more money than availble this error message pops up
    }
    else
    {
        
    
    a=a-c; //amount of money after youve made your bet
int random = rand() % 2;
        if (random==b) { //code given in order to randomize the 0,1
            int win=c*2; //if user guessed correctly then they get twice the amount they bet
            a=a+win; //adding the winnings to users money supply
            cout << "You won, congratulations! you now have " <<a; //telling user the new total of cash
        }
        else if (random!=b) { // if the random variable doesnt equal the users guess they lose.
            cout << "You lost, sorry! you now have " <<a; //telling the user their new total after losing.
            }}
        }
    }
}