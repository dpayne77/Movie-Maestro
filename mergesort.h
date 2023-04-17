// merge sort will go here
#include "movies.h"
#include <iostream>

using namespace std;

void mergeSort(int ratings[], int start, int end) {
  if (start < end) {
      middle = (start + end) / 2;
      mergeSort(ratings, start, middle);
      mergeSort(ratings, middle + 1, end);
      merge(ratings, start, middle, end);
  }
}

void merge(int arr[], int leftIndex, int midIndex, int rightIndex) {
    int leftSize = mid - left + 1;
    int rightSize = right - mid;

    int leftHalf[leftSize];
    int rightHalf[rightSize];
    for (int i = 0; i < leftSize; i++) {
        leftHalf[i] = arr[leftIndex + 1]
    }
    for (int i = 0; i < rightSize; i++) {
        rightHalf[i] = arr[midIndex + i + 1]
    }

    int leftCt = 0;
    int rightCt = 0;
    int mergedCt = leftIndex;

    while (leftCt < leftSize && rightCt < rightSize) {
        if (leftHalf[leftCt] <= rightHalf[rightCt]) {
            arr[mergedCt++] = leftHalf[leftCt++];
        } else {
            arr[mergedCt++] = rightHalf[rightCt++];
        }
        while (leftCt < leftSize) {
            arr[mergedCt++] = leftHalf[leftCt++];
        }
        while (rightCt < rightSize) {
            arr[mergedCt++] = rightHalf[rightCt++];
        }
    }
}