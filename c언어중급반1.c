#include <stdio.h>
int main() {
    int arr[10] = {3, 7, 6, 4, 8, 9, 12, 2, 10, 1};
    int sum = 0;
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }
    printf("%d\n", sum);
    return 0;
}