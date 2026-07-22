#include <stdio.h>
int main() {
    int arr[] = {3, 7, 4, 21, 43, 36, 11, 2};
    int key = 21;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            printf("Key found at index: %d\n", i);
            break;
        }
    }
    return 0;
}
