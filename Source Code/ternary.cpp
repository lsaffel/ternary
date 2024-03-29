#include <iostream>
using namespace std;

int main()
{
    int hostUserNum, guestUserNum;
    cout << "Host, please enter an integer: ";
    cin >> hostUserNum;

    // system("cls");     // clear the screen so the guest, guessing, can't see the number. This line doesn't work on VS Code

    cout << "Guest, please enter an integer guess: ";
    cin >> guestUserNum;

    // now, compare the two numbers to see if the guest has 
    // guessed the host number correctly

    /* if (hostUserNum == guestUserNum)
        cout << "Correct!";
    else    
        cout << "Incorrect!"; */

    // same code using a ternary operator instead.
    // The condition is first. If it's true, then the part 
    // after the ? is executed. If it's false, then the part
    // after the : is executed

    (hostUserNum == guestUserNum) ?  cout << "Correct!" : cout << "Incorrect!";

}