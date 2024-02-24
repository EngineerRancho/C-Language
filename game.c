#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

#define MATRIX_ROWS 6
#define MATRIX_COLS 5
#define COUNTDOWN_SECONDS 30

void printMatrix(int matrix[MATRIX_ROWS][MATRIX_COLS]) {
    printf("Find and count 1-30 in 30 sec.:\n");
    for (int i = 0; i < MATRIX_ROWS; i++) {
        for (int j = 0; j < MATRIX_COLS; j++) {
            printf("%3d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void countdownTimer() {
    printf("Countdown Timer:\n");
    for (int seconds = COUNTDOWN_SECONDS; seconds > 0; seconds--) {
        // printf("%d ", seconds);
        fflush(stdout);  // Flush the output to ensure it's displayed immediately
        sleep(1);        // Sleep for 1 second
    }
    char success;
    printf("Could you make it or not.? y/n : ");
    scanf("%c", &success);
    if (success == 'y'){
        printf("Congratulations.. Your mind seems sharp. \n");
    }else
    printf("C'mon, you are trying.. keep practicing..\n");

}

int main() {
    int matrix[MATRIX_ROWS][MATRIX_COLS] = {0};
    int uniqueNumbers[MATRIX_ROWS * MATRIX_COLS] = {0};
    int uniqueCount = 0;

    srand(time(NULL));

    while (uniqueCount < MATRIX_ROWS * MATRIX_COLS) {
        int randomNumber = rand() % (MATRIX_ROWS * MATRIX_COLS) + 1;
        int isUnique = 1;

        for (int i = 0; i < uniqueCount; i++) {
            if (uniqueNumbers[i] == randomNumber) {
                isUnique = 0;
                break;
            }
        }

        if (isUnique) {
            matrix[uniqueCount / MATRIX_COLS][uniqueCount % MATRIX_COLS] = randomNumber;
            uniqueNumbers[uniqueCount] = randomNumber;
            uniqueCount++;
        }
    }

    // Print the generated matrix
    printMatrix(matrix);

    // Start the countdown timer
    countdownTimer();

    return 0;
}
