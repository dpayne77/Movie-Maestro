// parsing will go here

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

vector<vector<string>> parseMovies(int numLines);

vector<vector<string>> parseMovies(int numLines) {
    fstream file;
    file.open("../data/movies.csv", ios::in);

    vector<vector<string>> movies;
    vector<string> rows;
    string temp, line, cell;
    int n = 0;
    while (getline(file, line)) {
        n++;
        rows.clear();
        stringstream str(line);

        while (getline(str, cell, ','))  {
            rows.push_back(cell);
        }
        movies.push_back(rows);
        if (n == numLines) {
            break;
        }
    }
    return movies;
}
