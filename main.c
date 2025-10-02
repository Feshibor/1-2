#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main(void) {
    long long int T;
    int x = scanf("%lld", &T);

    if (x != 1 || T < 1) {
        printf("INPUT_ERROR\n");
        return 1;
    }

    long long int* numbers = (long long int*)malloc(T * sizeof(long long int));
    if (!numbers) {
        printf("MEMORY_ERROR\n");
        return 1;
    }

    for (long long int i = 0; i < T; i++) {
        x = scanf("%lld", &numbers[i]);
        if (x != 1 || numbers[i] < 1) {
            printf("INPUT_ERROR\n");
            free(numbers);
            return 1;
        }
    }

    printf("answer:\n");
    for (long long int i = 0; i < T; i++) {
        printf("%lld\n", Prostoe(numbers[i]));
    }

    free(numbers);  
    return 0;
}
