#include<stdio.h>

// 12. Write a recursive function for n^m.

int raise(int base, int exp) {
    if (exp != 0)
        return (base * raise(base, exp - 1));
    else
        return 1;
}

int main() {
    int base, exp, power;
    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &exp);
    power = raise(base, exp);
    printf("Answer:- %d\n", power);
    return 0;
}


