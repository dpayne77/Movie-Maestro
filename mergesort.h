// merge sort will go here
#include "movies.h"
#include <iostream>

using namespace std;

void mergeSort(int ratings[], int start, int end);
void merge(int arr[], int leftIndex, int midIndex, int rightIndex);

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
    int leftSize = midIndex - leftIndex + 1;
    int rightSize = rightIndex - midIndex;

    int leftHalf[leftSize];
    int rightHalf[rightSize];
    for (int i = 0; i < leftSize; i++) {
        leftHalf[i] = arr[leftIndex + i].getRating();
    }
    for (int i = 0; i < rightSize; i++) {
        rightHalf[i] = arr[midIndex + i + 1].getRating();
    }

    int leftCt = 0;
    int rightCt = 0;
    int mergedCt = leftIndex;

    while (leftCt < leftSize && rightCt < rightSize) {
        if (leftHalf[leftCt] <= rightHalf[rightCt]) {
            arr[mergedCt++].setRating(leftHalf[leftCt++]);
        } else {
            arr[mergedCt++].setRating(rightHalf[rightCt++]);
        }
    }
    while (leftCt < leftSize) {
        arr[mergedCt++].setRating(leftHalf[leftCt++]);
    }
    while (rightCt < rightSize) {
        arr[mergedCt++].setRating(rightHalf[rightCt++]);
    }
}