#include <stdio.h>

int main() {
    int temperatures[] = {31, 33, 35, 34, 38, 36, 32};
    int length = sizeof(temperatures) / sizeof(temperatures[0]);
    int i, sum, highest, lowest;
    float average;

    printf("Original Temperature Readings:\n");
    for (i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temperatures[i]);
    }

    sum = 0;
    highest = temperatures[0];
    lowest = temperatures[0];

    for (i = 0; i < length; i++) {
        sum += temperatures[i];

        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }

        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }

    average = (float)sum / length;

    printf("\nOriginal Statistics:\n");
    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    temperatures[2] = 37;

    printf("\nCorrected Temperature Readings:\n");
    for (i = 0; i < length; i++) {
        printf("Day %d: %d C\n", i + 1, temperatures[i]);
    }

    sum = 0;
    highest = temperatures[0];
    lowest = temperatures[0];

    for (i = 0; i < length; i++) {
        sum += temperatures[i];

        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }

        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }

    average = (float)sum / length;

    printf("\nCorrected Statistics:\n");
    printf("Highest Temperature: %d C\n", highest);
    printf("Lowest Temperature: %d C\n", lowest);
    printf("Average Temperature: %.2f C\n", average);

    printf("\nMemory Addresses:\n");
    for (i = 0; i < length; i++) {
        printf("Address of temperatures[%d]: %p\n",
               i, (void *)&temperatures[i]);
    }

    return 0;
}