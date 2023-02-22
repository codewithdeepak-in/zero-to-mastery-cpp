#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // seed the random number generator
    srand(time(0));
    
    // get player's choice
    int playerChoice;
    cout << "Enter your choice (1 for rock, 2 for paper, 3 for scissors): ";
    cin >> playerChoice;
    
    // generate computer's choice
    int computerChoice = rand() % 3 + 1; //gives three output
    
    // print choices
    cout << "You chose ";
    if (playerChoice == 1) {
        cout << "rock" << endl;
    } else if (playerChoice == 2) {
        cout << "paper" << endl;
    } else {
        cout << "scissors" << endl;
    }
    
    cout << "Computer chose ";
    if (computerChoice == 1) {
        cout << "rock" << endl;
    } else if (computerChoice == 2) {
        cout << "paper" << endl;
    } else {
        cout << "scissors" << endl;
    }
    
    // determine winner
    if (playerChoice == computerChoice) {
        cout << "It's a tie!" << endl;
    } else if (playerChoice == 1 && computerChoice == 3 || playerChoice == 2 && computerChoice == 1 || playerChoice == 3 && computerChoice == 2) {
        cout << "You win!" << endl;
    } else {
        cout << "Computer wins!" << endl;
    }
    // Rock beats scissors 
    // Scissors beats paper
    // Paper beats rock
    
    return 0;
}   
