

void searchDistributor(int searchOption, std::string searchTerm, int searchType) {
    /*
     * Parameters:
     * int searchOption is between 1-4 and corresponds to actor, director, genre, or gross respectively
     * string searchTerm is the actor, director, or genre. For gross it will be an empty string.
     * int searchType is 1. Merge Sort or 2. Quick Sort
    */
    int numLines = 5; // how many lines to parse (change l8r)
    vector<Movies> allMovies = parseMovies(numLines);
    if (searchOption == 1) {
        // search by actor
        vector<Movies> actorMovies;
        for (int i = 0; i < allMovies.size(); i++) {
        }
    }
    else if (searchOption == 2) {
        // search by director
    }
    else if (searchOption == 3) {
        // search by genre
    }
    else if (searchOption == 4) {
        // search by gross
    }
}