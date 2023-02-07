#include <stdio.h>

int* findMinMax(int arr[], int size) {
static int minMax[2];
int i;


minMax[0] = arr[0];
minMax[1] = arr[0];

for (i = 1; i < size; i++) {
    if (arr[i] > minMax[1]) {
        minMax[1] = arr[i];
    } else if (arr[i] < minMax[0]) {
        minMax[0] = arr[i];
    }
}

return minMax;
}

int main() {
int arr[] = {23, 45, 12, 67, 34, 89};
int size = sizeof(arr) / sizeof(arr[0]);
int* minMax;



minMax = findMinMax(arr, size);

printf("Minimum value: %d\n", minMax[0]);
printf("Maximum value: %d\n", minMax[1]);

return 0;
}


