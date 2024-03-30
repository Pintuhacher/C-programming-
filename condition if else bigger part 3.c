#include <stdio.h>
int main() {
    int a, b, c, big;
    printf("Enter three numbers separated by space: ");
    scanf("%d %d %d", &a, &b, &c);
    big = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf("The largest number is: %d\n", big);
    return 0;
}