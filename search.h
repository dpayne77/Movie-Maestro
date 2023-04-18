void searchDistributor(int searchOption, std::string searchTerm, int searchType);
void printMoviesArray(Movies arr[], int len);

void searchDistributor(int searchOption, std::string searchTerm, int searchType) {
    /*
     * Parameters:
     * int searchOption is between 1-4 and corresponds to actor, director, genre, or gross respectively
     * string searchTerm is the actor, director, or genre. For gross it will be an empty string.
     * int searchType is 1. Merge Sort or 2. Quick Sort
    */
    int numLines = 1000; // how many lines to parse (change l8r)
    vector<Movies> allMovies = parseMovies(numLines);
    if (searchOption == 1) {
        // search by actor
        vector<Movies> actorMovies;
        for (int i = 0; i < allMovies.size(); i++) {
            vector<string> stars = allMovies[i].getStar();
            for (int j = 0; j < stars.size(); j++) {
                if (stars[j].find(searchTerm) != string::npos) {
                    actorMovies.push_back(allMovies[i]);
                }
            }
        }
        int n = actorMovies.size();
        Movies arr[n];
        copy(actorMovies.begin(), actorMovies.end(), arr);
        if (searchType == 1) {
            mergeSort(arr, 0, n - 1);
            printMoviesArray(arr, n);
        }
        else {
            quickSort(arr, 0, n - 1);
        }
    }
    else if (searchOption == 2) {
        // search by director
        vector<Movies> directorMovies;
        for (int i = 0; i < allMovies.size(); i++) {
            vector<string> directors = allMovies[i].getDirector();
            for (int j = 0; j < directors.size(); j++) {
                if (directors[j] == searchTerm) {
                    directorMovies.push_back(allMovies[i]);
                }
            }
        }
        int n = directorMovies.size();
        Movies arr[n];
        copy(directorMovies.begin(), directorMovies.end(), arr);
        if (searchType == 1) {
            mergeSort(arr, 0, n - 1);
        }
        else {
            quickSort(arr, 0, n - 1);
        }
    }
    else if (searchOption == 3) {
        // search by genre
        vector<Movies> genreMovies;
        for (int i = 0; i < allMovies.size(); i++) {
            vector<string> genres = allMovies[i].getGenre();
            for (int j = 0; j < genres.size(); j++) {
                if (genres[j] == searchTerm) {
                    genreMovies.push_back(allMovies[i]);
                }
            }
        }
        int n = genreMovies.size();
        Movies arr[n];
        copy(genreMovies.begin(), genreMovies.end(), arr);
        if (searchType == 1) {
            mergeSort(arr, 0, n - 1);
        }
        else {
            quickSort(arr, 0, n - 1);
        }
    }
    else if (searchOption == 4) {
        // search by gross
    }
}

void printMoviesArray(Movies arr[], int len) {
    for (int i = 0; i < len; i++) {
        cout << arr[i].getMovieName() << endl;
        vector<string> names = arr[i].getStar();
        for (int i = 0;  i < names.size(); i++) {
            cout << "   Stars: " << names[i] << endl;
        }
        cout << "   Rating: " << std::setprecision(2) << arr[i].getRating() << endl;
        cout << "\ni\n";
    }
}