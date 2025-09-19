#include <stdio.h>
#include "queue.h"

int main(void) {
    Queue* queue = createQueue();
    long long int T, b;
    int x = scanf("%lld", &T);
    if (x != 1 || T < 1) {
        printf("IMPUT_ERROR\n");
        return 1;
    }
    for (int i = 0; i < T; i++) {
        x = scanf("%lld", &b);
        enqueue(queue, b);
        if (x != 1 || b < 1) {
            printf("IMPUT_ERROR\n");
            return 1;
        }
    }
    printf("answer:\n");
    for (int i = 0; i < T; i++) {
        printf("%lld \n", Prostoe(Pop(queue)));
    }
    destroyQueue(queue);
    return 0;
}
