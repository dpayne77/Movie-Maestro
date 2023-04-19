#include <iostream>
#include <iomanip>
#include "parse.h"
#include "movies.h"
#include "quicksort.h"
#include "mergesort.h"
#include "search.h"
#include <string>
#include <vector>

using namespace std;

void printMoviesArr(Movies arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i].getMovieName() << endl;
        cout << "   Rating: " << std::setprecision(2) << arr[i].getRating() << endl;
    }
}

void testQuick() {
    vector<Movies> vec = parseMovies(30000);
    int n = vec.size();
    Movies arr[n];
    copy(vec.begin(), vec.end(), arr);
    arr[0].setRating(8);
    arr[1].setRating(5);
    arr[2].setRating(2);
    arr[3].setRating(10);
    arr[4].setRating(9);
    cout << "\nunsorted:" << endl;
    //printMoviesArr(arr, n);
    cout << "\nperforming quick sort..." << endl;
    quickSort(arr, 0, n - 1);
    printMoviesArr(arr, n);
}

void testMerge() {
    vector<Movies> vec = parseMovies(198629);
    int n = vec.size();
    Movies arr[n];
    copy(vec.begin(), vec.end(), arr);
    arr[0].setRating(8);
    arr[1].setRating(5);
    arr[2].setRating(2);
    arr[3].setRating(10);
    arr[4].setRating(9);
    cout << "\nunsorted:" << endl;
    //printMoviesArr(arr, n);
    cout << "\nperforming merge sort..." << endl;
    mergeSort(arr, 0, n - 1);
    printMoviesArr(arr, n);
}

void testParse() {
    // print first 5 lines of movies.csv
    cout << "Creating 5 movie objects:" << endl;
    vector<Movies> movieObjects = parseMovies(5);

    for (auto & movieObject : movieObjects) {
        cout << movieObject.getMovieName() << endl;
        cout << "   Genre: ";
        vector<string> genres = movieObject.getGenre();
        for (int i = 0; i < genres.size(); i++) {
            cout << genres.at(i) << ", ";
        }
        cout << "\n";
        cout << "   Rating: " << to_string(movieObject.getRating()) << endl;
        cout << "   Starring: ";
        vector<string>  stars = movieObject.getStar();
        for (int i = 0; i < stars.size(); i++) {
            cout << stars.at(i) << ", ";
        }
        cout << "\n";
    }
}

int main() {
    // testQuick();
     testMerge();
    // searchDistributor(1, "Chris Pratt", 1);

    cout << "Welcome to Movie Maestro!" << endl;
    // 1. do parsing with parse.h
    // testParse();

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
        int searchOption = 0;

        if (userInput == "1") {
            cout << "What actor would you like to search for?" << endl;
            cin >> searchTerm;
            searchOption = 1;
        }
        else if (userInput == "2") {
            cout << "What director would you like to search for?" << endl;
            cin >> searchTerm;
            searchOption = 2;
        }
        else if (userInput == "3") {
            cout << "What genre would you like to search for?" << endl;
            // maybe print options later?
            cin >> searchTerm;
            searchOption = 3;
        }
        else if (userInput == "4") {
            // Option 4 (box office) doesn't need a secondary question
            searchOption = 4;
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

