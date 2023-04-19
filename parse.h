// parsing will go here

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <algorithm>
#include "movies.h"

using namespace std;

vector<Movies> parseMovies(int numLines);

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
        // newMovie.setMovieID(temp);

        getline(str, temp, ',');
        newMovie.setMovieName(temp);

        getline(str, temp, ',');
        // newMovie.setYear(temp);

        getline(str, temp, ',');
        // newMovie.setCertificate(temp);

        getline(str, temp, ',');
        // newMovie.setRuntime(temp);

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
        if (temp != "")
            rating = stof(temp);
        newMovie.setRating(rating);

        getline(str, temp, ',');
        // newMovie.setDescription(temp);

        getline(str, temp, ',');
        // newMovie.setDirector(temp);

        getline(str, temp, ',');
        // newMovie.setDirectorID(temp);

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
        // newMovie.setStarID(temp);

        getline(str, temp, ',');
        // newMovie.setVotes(stoi(temp));

        getline(str, temp, ',');
        // newMovie.setGross(stoi(temp));

        movieObjects.push_back(newMovie);
        if (n == numLines) {
            break;
        }
    }
    return movieObjects;
}
