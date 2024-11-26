//calculating cutoff marks of student
#include <stdio.h>

int main() {
    int m, p, c, e, cm;

    printf("Enter marks in Mathematics (out of 200): ");
    scanf("%d", &m);

    printf("Enter marks in Physics (out of 200): ");
    scanf("%d", &p);

    printf("Enter marks in Chemistry (out of 200): ");
    scanf("%d", &c);

    printf("Enter marks in Entrance Exam (out of 100): ");
    scanf("%d", &e);

    cm = (m / 2) + (p / 2) + (c / 2) + e;

    printf("Cut off mark: %d\n", cm);

    return 0;
}