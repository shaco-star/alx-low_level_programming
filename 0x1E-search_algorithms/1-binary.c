#include "search_algos.h"


void print_array(int* array, size_t start, size_t end) {
    printf("Searching in array: ");
    for (size_t i = start; i < end; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}


int binary_search(int* array, size_t size, int value) {

    size_t start = 0;
    size_t end = size;

    if (array == NULL) {
        return  (-1);
    }
    while (start < end) {
        print_array(array, start, end);

        size_t mid = start + (end - start) / 2;

        if (array[mid] == value) {
            return (mid);
        }
        else if (array[mid] < value) {
            start = mid + 1;
        }
        else {
            end = mid;
        }
    }

    return (-1);
}
