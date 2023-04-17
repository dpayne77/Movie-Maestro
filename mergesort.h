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
        rightHalf[i] = arr[mid + i + 1]
    }

    int left


}