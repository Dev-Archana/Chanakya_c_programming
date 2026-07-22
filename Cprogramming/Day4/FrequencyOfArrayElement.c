#include <stdio.h>
int main() {
    int arr[] = {5, 8, 4, 5, 43, 5, 11, 2};
    int key = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    int count=0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
           count++;
        }
    }
    printf("Frequency of given number is :%d",count);
    return 0;
}
