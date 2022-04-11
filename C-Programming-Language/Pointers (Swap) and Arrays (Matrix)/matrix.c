#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROWS_MIN 2
#define ROWS_MAX 10
#define COLS_MIN 2
#define COLS_MAX 10
#define UPPER_MIN 2
#define UPPER_MAX 1000

void generateMatrix(const int rows, const int cols, int array[rows][cols], const int upper);
void displayMatrix (const int rows, const int cols, int array[rows][cols], bool transposed);

int main()
{
    int rows, cols, upper;

    printf("Enter the number of rows (Min %d, Max %d): ", ROWS_MIN, ROWS_MAX);
    scanf("%d", &rows);
    printf("Enter the number of columns (Min %d, Max %d): ", COLS_MIN, COLS_MAX);
    scanf("%d", &cols);
    printf("Enter the upper limit for random numbers (Min %d, Max %d): ", UPPER_MIN, UPPER_MAX);
    scanf("%d", &upper);

    int array[rows][cols];

    generateMatrix(rows, cols, array, upper);
    displayMatrix(rows, cols, array, false);
    displayMatrix(rows, cols, array, true);

    return EXIT_SUCCESS;
}
void generateMatrix(const int rows, const int cols, int array[rows][cols], int upper)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            array[i][j] = rand() % upper;
        }
    }
}
void displayMatrix (const int rows, const int cols, int array[rows][cols], bool transposed)
{
    printf("-------------\n");
    for (int i = 0; i < (transposed ? cols : rows); i++)
    {
        for (int j = 0; j < (transposed? rows : cols); j++)
        {
            printf("%4d", array[transposed ? j : i][transposed? i : j]);
        }
        printf("\n");
    }
}