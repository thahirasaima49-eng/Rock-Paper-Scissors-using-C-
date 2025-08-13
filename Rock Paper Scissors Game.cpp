#include<bits/stdc++.h>

using namespace std;

void printingMove(int a, string name) {
    // a -> move -> user/computerInput

    cout << name << " has given this move : ";

    if (a == 1) {
        cout << "Rock" << endl; // -> User/computerInput
    } else if (a == 2) {
        cout << "Paper" << endl;
    } else { // 3
        cout << "Scissor" << endl;
    }
}

int main() {

    /*
        Logic

        Player /User -> Input (Rock, paper, Scissor)
        Computer -> Move (Rock, paper, Scissor)

        User.       Computer
        Rock.       Rock.        Tie/Draw
        Rock.       Paper.       Computer Wins
        Scissor.    Paper.       User Wins. -> If else /switch
    */

    cout << "** Welcome to the Rock Paper Scissor Game **" << endl;

    // User Input
    cout << "Select from these 3 options" << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissor" << endl;
    cout << "Press 1 for Rock, 2 for Paper, 3 for Scissor" << endl;

    int userInput;
    cin >> userInput; // 1,2,3

    // Seed the random number generator with the current time
    srand(time(0));

    // Computer Logic -> rand
    int computerInput = rand() % 3 + 1; // 1, 2, 3

    // if else

    cout << "Result: ";
    if (computerInput == userInput) {
        cout << "Draw" << endl; // tie
        printingMove(userInput, "user");
        printingMove(computerInput, "computer");

    } else {
        /*
            USER      computerInput     Result

    Case-1. Rock.      Paper.            Computer
    Case-2. Rock.      Scissor.          User
    Case-3. Paper.     Rock.             User
    Case-4. Paper.     Scissor.          Computer
    Case-5. Scissor.   Rock.             Computer
    Case-6. Scissor.   Paper.            User
        */

        if (userInput == 1 && computerInput == 2) {
            cout << "Computer Wins" << endl;
        }
        else if (userInput == 1 && computerInput == 3) {
            cout << "User Wins" << endl;
        }
        else if (userInput == 2 && computerInput == 1) {
            cout << "User Wins" << endl;
        }
        else if (userInput == 2 && computerInput == 3) {
            cout << "Computer Wins" << endl;
        }
        else if (userInput == 3 && computerInput == 1) {
            cout << "Computer Wins" << endl;
        }
        else if (userInput == 3 && computerInput == 2) {
            cout << "User Wins" << endl;
        }

        printingMove(userInput, "user");
        printingMove(computerInput, "computer");
    }

    return 0;
}
