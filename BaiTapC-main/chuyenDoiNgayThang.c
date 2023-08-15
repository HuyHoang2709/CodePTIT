#include <stdio.h>

int main() {
    int days;
    int day, month, year;
    scanf("%d", &days);
    year = days / 365;
    month = (days % 365) / 7;
    day = (days % 365) % 7;
    printf("%d %d %d", year, month, day);
    return 0;
}