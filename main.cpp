#include <iostream>
#include "parse.h"
#include "movies.h"
#include "quicksort.h"
#include "mergesort.h"
#include <string>
#include <vector>

using namespace std;

void testQuickandMerge() {
    int ratings[] = {6, 5,3, 1,7,4,3,2,6,5,3,1,5,6,3};
    quickSort(ratings, 0, 14);
    for (int i = 0; i < 15; i++) {
        cout << ratings[i] << endl;
    }

}

int main() {
    cout << "Welcome to Movie Maestro!" << endl;
    // 1. do parsing with parse.h

    // 2. Prompt user with search options
    string userInput;
    userInput = "";

    while (userInput != "1" && userInput != "2" && userInput != "3" && userInput != "4") { // will loop if user does not input 1-4
        cout << "How would you like to search?" << endl;
        cout << "1) Search by actor" << endl;
        cout << "2) Search by director" << endl;
        cout << "3) Search by genre" << endl;
        cout << "4) Search by gross box office" << endl;
        cout << "Enter a number 1-4:" << endl;

        cin >> userInput;

        string searchTerm = ""; // search term will hold either actor, director, or genre.

        if (userInput == "1") {
            cout << "What actor would you like to search for?" << endl;
            cin >> searchTerm;
        }
        else if (userInput == "2") {
            cout << "What director would you like to search for?" << endl;
            cin >> searchTerm;
        }
        else if (userInput == "3") {
            cout << "What genre would you like to search for?" << endl;
            // maybe print options later?
            cin >> searchTerm;
        }
        else if (userInput == "4") {
            // Option 4 (box office) doesn't need a secondary question
        }
        else {
            cout << "Please enter 1-4." << endl;
        }

    }
    userInput = ""; // resetting userInput

    // 3. Prompt user with sort options
    while (userInput != "1" && userInput != "2") { // will loop if user does not input 1-2
        cout << "Select a sorting algorithm" << endl;
        cout << "1) Merge Sort" << endl;
        cout << "2) Quick Sort" << endl;
        cout << "Enter a number 1-2:" << endl;

        cin >> userInput;

        // check for input errors
        if (userInput != "1" && userInput != "2") {
            cout << "Please enter 1 or 2." << endl;
        }
    }
}

