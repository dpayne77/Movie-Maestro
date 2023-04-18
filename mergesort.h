// merge sort will go here
#include "movies.h"
#include <iostream>

using namespace std;

void mergeSort(Movies ratings[], int start, int end);
void merge(Movies arr[], int leftIndex, int midIndex, int rightIndex);

void mergeSort(Movies ratings[], int start, int end) {
    // source: Discussion 8 - Sorting slides, slide 23
  if (start < end) {
      int middle = (start + end) / 2;
      mergeSort(ratings, start, middle);
      mergeSort(ratings, middle + 1, end);
      merge(ratings, start, middle, end);
  }
}

void merge(Movies arr[], int leftIndex, int midIndex, int rightIndex) {
    // source: Discussion 8 - Sorting slides, slide 24
    // split arr in half
    int leftSize = midIndex - leftIndex + 1;
    int rightSize = rightIndex - midIndex;
    Movies leftHalf[leftSize];
    Movies rightHalf[rightSize];
    for (int i = 0; i < leftSize; i++) {
        leftHalf[i] = arr[leftIndex + i];
    }
    for (int i = 0; i < rightSize; i++) {
        rightHalf[i] = arr[midIndex + i + 1];
    }
    // merge halves
    int leftCt = 0;
    int rightCt = 0;
    int mergedCt = leftIndex;
    while (leftCt < leftSize && rightCt < rightSize) {
        if (leftHalf[leftCt].getRating() <= rightHalf[rightCt].getRating()) {
            arr[mergedCt++] = leftHalf[leftCt++];
        } else {
            arr[mergedCt++] = rightHalf[rightCt++];
        }
    }

    // copy merged halves back into array
    while (leftCt < leftSize) {
        arr[mergedCt++] = leftHalf[leftCt++];
    }
    while (rightCt < rightSize) {
        arr[mergedCt++] = rightHalf[rightCt++];
    }
}