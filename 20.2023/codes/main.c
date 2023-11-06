#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000

int main() {
    srand(time(0)); 

    int d1[SIZE], d2[SIZE], tr[SIZE];
    int count = 0, c = 0;

    // Generate random integers between 1 and 6 for d1 and d2
    for (int i = 0; i < SIZE; i++) {
        d1[i] = rand() % 6 + 1;
        d2[i] = rand() % 6 + 1;
    }

    // Generate Bernoulli random variable for tr
    for (int i = 0; i < SIZE; i++) {
        tr[i] = rand() % 3 < 2 ? 1 : 0; // 2/3 chance of 1
    }

    // Iterate over the arrays and increment the counter based on conditions
    for (int i = 0; i < SIZE; i++) {
        if (d1[i] == d2[i] && tr[i] == 1) {
            c++;
            count++;
        }
        if (d1[i] != d2[i] && tr[i] == 0) {
            c++;
        }
    }

    printf("%f\n", (float)count / c);

    return 0;
}

