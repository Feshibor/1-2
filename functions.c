#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int Prime(long long int Number) {
    if (Number < 2) {
        return 0;
    }
    if (Number == 2) {
        return 1;
    }
    if (Number % 2 == 0) {
        return 0;
    }
    for (long long int i = 3; i * i <= Number; i += 2) {
        if (Number % i == 0) {
            return 0;
        }
    }
    return 1;
}

long long int Prostoe(long long int Number) {
    long long int count = 0;
    long long int candidate = 1;

    while (count < Number) {
        candidate++;
        if (Prime(candidate)) {
            count++;
        }
    }

    return candidate;
}
