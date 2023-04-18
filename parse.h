// parsing will go here

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
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
        newMovie.setGenre(temp);

        getline(str, temp, ',');
        int rating = 0;
        std::cout << temp << std::endl;
        if (temp != "")
            rating = stoi(temp);
        newMovie.setRating(rating);

        getline(str, temp, ',');
        // newMovie.setDescription(temp);

        getline(str, temp, ',');
        // newMovie.setDirector(temp);

        getline(str, temp, ',');
        // newMovie.setDirectorID(temp);

        getline(str, temp, ',');
        // newMovie.setStar(temp);

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
