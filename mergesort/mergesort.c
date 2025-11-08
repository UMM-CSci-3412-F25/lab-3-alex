#include "mergesort.h"
#include <stdlib.h>   // for calloc, free

static void merge(int *a, int left, int mid, int right) {
    int n = right - left + 1;

    int *temp = calloc((size_t)n, sizeof(int));
    if (temp == NULL) {
        return;

    }

    int i = left;      // left subarray index
    int j = mid + 1;   // right subarray index
    int k = 0;         // temp index

    while (i <= mid && j <= right) {
        if (a[i] <= a[j]) {
            temp[k++] = a[i++];
        } else {
            temp[k++] = a[j++];
        }
    }
}

static void mergesort_rec(int *a, int left, int right) {
    if (left >= right) {
        return; // 0 or 1 element
    }

    int mid = left + (right - left) / 2;

        mergesort_recursive(a, left, mid);
        mergesort_recursive(a, mid + 1, right);
        merge(a, left, mid, right);
}

void mergesort(int size, int values[]) {

  return;
}
