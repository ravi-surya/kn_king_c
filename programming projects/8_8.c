
/*
MY ANSWER 
#include <stdio.h>

#define N 5

int main(void) {
    int a[N][N] = {0};
    double avgstudent[N] = {0}, avgquiz[N] = {0};

    // Input
    for (int i = 0; i < N; i++) {
        printf("Enter grades for student %d:\n", i + 1);
        for (int j = 0; j < N; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Total and average per student
    printf("\nTotal scores for each student: ");
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += a[i][j];
        }
        avgstudent[i] = (double) sum / N;
        printf("%d ", sum);
    }

    printf("\nAverage score for each student: ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", avgstudent[i]);
    }

    // Total and average per quiz
    printf("\nTotal scores for each quiz: ");
    for (int i = 0; i < N; i++) {
        int sum = 0;
        int largest = a[0][i], smallest = a[0][i];
        for (int j = 0; j < N; j++) {
            sum += a[j][i];
            if (a[j][i] > largest) largest = a[j][i];
            if (a[j][i] < smallest) smallest = a[j][i];
        }
        avgquiz[i] = (double) sum / N;
        printf("%d ", sum);
    }

    printf("\nAverage score for each quiz: ");
    for (int i = 0; i < N; i++) {
        printf("%.2f ", avgquiz[i]);
    }

    printf("\n");

    return 0;
}


*/
#include <stdio.h>

int main(void) {

    int i, j, temp_total, high, low;
    int n[5][5];

    for (i = 0; i < 5; i++) {
        printf("Enter quiz grades for student %d: ", i + 1);

        for (j = 0; j < 5; j++) {
            scanf("%d", &n[i][j]);
        }
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("\nTotal and average score for student %d: ", i + 1);
        temp_total = 0;
        for (j = 0; j < 5; j++) {
            temp_total += n[i][j];
        }
        printf("%d %.2f", temp_total, (double) temp_total / 5);
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("\nAverage, high and low scores for quiz %d: ", i + 1);
        temp_total = 0;
        high = low = n[0][i];

        for (j = 0; j < 5; j++) {
            temp_total += n[j][i];
            if (n[j][i] > high)
                high = n[j][i];
            if (n[j][i] < low)
                low = n[j][i];
        }
        printf("%f %d %d", (double) temp_total / 5, high, low);
    }

    printf("\n");


    return 0;
}