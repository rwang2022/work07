#include <stdlib.h>
#include <stdio.h>
#define SIZE 3

// 1. Write a function that takes an array of int values as a parameter and prints it out.
//     Have the output be in the following format: [ v0 v1 v2 ... ]

void print_array(int *arr, int len) {
    int i = 0;
    printf("[ ");
    for (int i = 0; i<len; i++) {
        printf("%d ", *(arr+i));
    }
    printf("]\n");
}

// 2. Write a function that takes an array of int values as a parameter and returns the average of those values.
double average(int *arr, int len) {
    int sum = 0;
    double avg;
    for (int i = 0; i<len; i++) {
        sum += arr[i];
    }
    avg = sum/len;
    return avg;
}

// 3. Write a function that takes 2 arrays of equal SIZE as paramters (you can chose the type). The function should copy the values of the first array into the second.
int copy(int *arr1, int *arr2, int len) {
    for (int i = 0; i<len; i++) {
        arr2[i] = *(arr1+i);
    }
    return *arr2;
}

int main() {
    int array1[SIZE] = {100, 101, 102};

    printf("the function print_array1:\n");
    print_array(array1, SIZE);
    printf("\n");

    printf("the function average:\n");
    printf("%f", average(array1, SIZE));
    printf("\n\n");

    int array2[SIZE] = {1, 2, 3};
    printf("copy function:\n");
    printf("array1 is "); 
    print_array(array1, SIZE);
    
    printf("array2 is "); 
    print_array(array2, SIZE);

    printf("array2 after copying: ");
    copy(array1, array2, SIZE);
    print_array(array2, SIZE);

    return 0;
}