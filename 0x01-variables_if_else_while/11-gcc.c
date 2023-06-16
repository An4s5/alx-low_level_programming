#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;

    int lastNum = abs(n % 10);

    printf("The value of n %d is ", n);

    if (lastNum > 5) {
        printf("%d > 5\n", lastNum);
    } else if (lastNum == 0) {
        printf("%d = 0\n", lastNum);
    } else {
        printf("%d < 6 and not equal 0\n", lastNum);
    }

    return 0;
}
