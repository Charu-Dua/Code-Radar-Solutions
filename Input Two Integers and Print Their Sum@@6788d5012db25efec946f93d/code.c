#include <stdio.h>


int main() {
    int a,b;
    scanf("%d %d", a,b);
    int sum1 = a+b;
    printf("Sum: %d", sum1);
    scanf("%d %d", &a,&b);
    printf("Sum: %d", a+b);
    return 0;
}