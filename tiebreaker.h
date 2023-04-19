#include "movies.h"
#include <algorithm>
/*
 * input: array of movies sorted by rating, length of array
 * output: array of movies sorted by rating, then # of votes if ties
 *
 * helpful tip: time complexity is off a perc so don't run this with every movie in the dataset
 */
void breakTies(Movies arr[], int len);

void breakTies(Movies arr[], int len) {
    for (int i = 0; i < len - 1; i++) {
        if (arr[i].getRating() == arr[i+1].getRating() && arr[i].getVotes() > arr[i+1].getVotes()) {
            std::swap(arr[i], arr[i+1]);
        }
    }
}
