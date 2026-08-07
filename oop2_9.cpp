#include <stdio.h>

int main() {
    FILE *fp = fopen("dictionary_growth.dat", "w");

    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }

    printf("Generating data...\n");

    for (int n = 100; n <= 10000; n += 100) {

        double constant = 1;
        double logarithmic = 0;

        int temp = n;
        while (temp > 1) {
            logarithmic++;
            temp /= 2;
        }

        double linear = n;
        double nlogn = linear * logarithmic;

        fprintf(fp, "%d %.2lf %.2lf %.2lf %.2lf\n",
                n, constant, logarithmic, linear, nlogn);
    }

    fclose(fp);

    printf("Data saved to dictionary_growth.dat\n");
    printf("Columns:\n");
    printf("n O(1) O(log n) O(n) O(nlogn)\n");

    return 0;
}