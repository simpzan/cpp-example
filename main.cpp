#include <stdio.h>
#include "test.h"

int test() {
    INFO("press any key to continue");
    getchar();
    int a = tester(23);
    printf("a=%d\n", a);
    // INFO("press any key to exit");
    // getchar();
    return 0;
}

int main() {
    while (true) {
        test();
    }
}
