#include <assert.h>
#include <stdio.h>
#include "functions.h"

void test_prost() {
    assert(Prime(2) == 1);
    assert(Prime(3) == 1);
    assert(Prime(7) == 1);
    assert(Prime(13) == 1);

    assert(Prime(1) == 0);
    assert(Prime(4) == 0);
    assert(Prime(10) == 0);
    assert(Prime(15) == 0);
}

void test_prostoe() {
    assert(Prostoe(1) == 2);
    assert(Prostoe(2) == 3);
    assert(Prostoe(3) == 5);
    assert(Prostoe(4) == 7);
    assert(Prostoe(5) == 11);
    assert(Prostoe(6) == 13);
}

void run_unit_tests() {
    test_prost();
    test_prostoe();
    printf("All unit tests passed!\n");
}

int main() {
    run_unit_tests();
    return 0;
}
