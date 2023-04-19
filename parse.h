// parsing will go here

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "movies.h"

using namespace std;


vector<Movies> parseMovies(int numLines);
// used to convert roman numeral to integer
int value(char r);
int romanToInt(char str[]);

// integer value of a roman numeral character
int value(char r) {
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;

    return -1;
}

int romanToInt(string str) {
    // return stoi if str is a number
    if (!isalpha(str[0])) {
        return stoi(str);
    }
    int result = 0;
    // calculate running sum for values of chars in str
    for (int i = 0; i < str.size(); i++) {
        int s1 = value(str[i]);
        if (i + 1 < str.size()) {
            int s2 = value(str[i + 1]);
            if (s1 >= s2) {
                result = result + s1;
            } else {
                result = result + s2 - s1;
                i++;
            }
        } else {
            result = result + s1;
        }
    }
    return result;
}

vector<Movies> parseMovies(int numLines) {
    fstream file;
    file.open("../data/movies.csv", ios::in);

    vector<vector<string>> movies;
    vector<Movies> movieObjects;
    string temp, line;
    getline(file, line);
    int n = 0;
    while (getline(file, line)) {
        n++;
        stringstream str(line);
        Movies newMovie;

        getline(str, temp, ',');
        newMovie.setMovieID(temp);

        getline(str, temp, ',');
        newMovie.setMovieName(temp);

        getline(str, temp, ',');
        int year = 0;
        if (!temp.empty())
            year = romanToInt(temp);
        newMovie.setYear(year);

        getline(str, temp, ',');
        newMovie.setCertificate(temp);

        getline(str, temp, ',');
        newMovie.setRuntime(temp);

        getline(str, temp, ',');
        // split genre strings into a vector & remove spaces
        stringstream s(temp);
        string genre;
        while (getline(s, genre, '|')) {
            genre.erase(std::remove(genre.begin(), genre.end(), ' '), genre.end());
            newMovie.setGenre(genre);
        }

        getline(str, temp, ',');
        float rating = 0.0f;
        if (!temp.empty())
            rating = stof(temp);
        newMovie.setRating(rating);

        getline(str, temp, ',');
        temp.replace(temp.begin(), temp.end(), '|', ',');
        newMovie.setDescription(temp);

        getline(str, temp, ',');
        newMovie.setDirector(temp);

        getline(str, temp, ',');
        newMovie.setDirectorID(temp);

        getline(str, temp, ',');
        stringstream ss(temp);
        string star;
        while (getline(ss, star, '|')) {
            if (star.at(0) == ' ') {
                // removing space before actor name
                star = star.substr(1, 100);
            }
            newMovie.setStar(star);
        }

        getline(str, temp, ',');
        newMovie.setStarID(temp);

        getline(str, temp, ',');
        int votes = 0;
        if (!temp.empty())
            votes = stoi(temp);
        newMovie.setVotes(votes);

        getline(str, temp, ',');
        int gross = 0;
        if (!temp.empty())
            gross = stoi(temp);
        newMovie.setGross(gross);

        movieObjects.push_back(newMovie);
        if (n == numLines) {
            break;
        }
    }
    return movieObjects;
}
