// quick sort will go here
#include "movies.h"
#include <iostream>

using namespace std;

void quickSort(Movies ratings[], int low, int high);
int partition(Movies ratings[], int low, int high);

void quickSort(Movies ratings[], int low, int high) { // pass in movie array, start index (0), and length of array - 1 (aka end index)
    // source: Discussion 8 - Sorting slides, slide 29
    if (low < high) {
        int pivot = partition(ratings, low, high);
        quickSort(ratings, low, pivot -1);
        quickSort(ratings, pivot + 1, high);
    }
}

int partition(Movies ratings[], int low, int high) {
    // source: Discussion 8 - Sorting slides, slide 29
    int pivot = ratings[low].getRating();
    int up = low;
    int down = high;
    while (up < down) {
        for (int j = up; j < high; j++) {
            if (ratings[up].getRating() > pivot) {
                break;
            }
            up++;
        }
        for (int j = high; j > low; j--) {
            if (ratings[down].getRating() < pivot) {
                break;
            }
            down--;
        }
        if (up < down) {
            swap(ratings[up], ratings[down]);
        }
    }
    swap(ratings[low], ratings[down]);
    return down;
}