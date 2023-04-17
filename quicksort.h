// quick sort will go here
#include "movies.h"
#include <iostream>

using namespace std;

void quickSort(int ratings[], int low, int high);
int partition(int ratings[], int low, int high);

void quickSort(int ratings[], int low, int high) {
    // source: Discussion 8 - Sorting slides, slide 29
    if (low < high) {
        int pivot = partition(ratings, low, high);
        quickSort(ratings, low, pivot -1);
        quickSort(ratings, pivot + 1, high);
    }
}

int partition(int ratings[], int low, int high) {
    // source: Discussion 8 - Sorting slides, slide 29
    int pivot = ratings[low];
    int up = low;
    int down = high;
    while (up < down) {
        for (int j = up; j < high; j++) {
            if (ratings[up] > pivot) {
                break;
            }
            up++;
        }
        for (int j = high; j > low; j--) {
            if (ratings[down] < pivot) {
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