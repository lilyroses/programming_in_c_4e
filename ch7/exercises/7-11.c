/* Exercise 7-11.c 
 *
 * Write a function called arraySum() that takes two arguments: an integer
 * array and the number of elements in the array. Have the function return as
 * its result the sum of the elements in the array.
 */
#include <stdio.h>


int arraySum(int arr[], int n);


int arraySum(int arr[], int n) {
    int sum;
    int i;

    sum = 0;
    for (i = 0; i < n; ++i) {
        sum += arr[i];
    }

    return sum;
}


int main(void) {
    int n;
    int sum;
    int array[5] = {6, 2, 3, 4, 5};
    
    n = 5;
    sum = arraySum(array, n);

    printf("Sum of array is %i\n", sum);
}