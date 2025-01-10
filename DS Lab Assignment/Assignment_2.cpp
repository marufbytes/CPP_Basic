#include <iostream>
using namespace std;

// Memory allocation
int **allocateMatrix(int row, int col)
{
    int **matrix = new int *[row];
    for (int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
    }
    return matrix;
}

// Input
void inputMatrix(int **matrix, int row, int col)
{
    cout << "Enter matrix elements: ";
    cout<<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<"Matrix ["<<i<<"]["<<j<<"] = ";
            cin >> matrix[i][j];
        }
    }
}

// Print
void printMatrix(int **matrix, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Add
int **addMatrices(int **a, int **b, int row, int col)
{
    int **result = allocateMatrix(row, col);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}

// Transpose
int **transposeMatrix(int **matrix, int row, int col)
{
    int **transposed = allocateMatrix(col, row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    return transposed;
}

// multi
int **multiplyMatrices(int **a, int **b, int row1, int col1, int col2)
{
    int **result = allocateMatrix(row1, col2);
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}

int main()
{
    int row1, col1, row2, col2;

    // Matix A
    cout << "\n Enter rows and columns for matrix A: ";
    cin >> row1 >> col1;
    int **A = allocateMatrix(row1, col1);
    inputMatrix(A, row1, col1);

    // matrix B
    cout << "\n Enter rows and columns for matrix B: ";
    cin >> row2 >> col2;
    int **B = allocateMatrix(row2, col2);
    inputMatrix(B, row2, col2);

    // add
    if (row1 == row2 && col1 == col2)
    {
        int **sum = addMatrices(A, B, row1, col1);
        cout << "\n Matrix Addition Result: ";
        cout<<endl;
        printMatrix(sum, row1, col1);
    }
    else
    {
        cout << "\n Matrix addition not possible due to dimension mismatch."<<endl;
    }

    //Transpose
    cout << "\nTranspose of Matrix A: ";
    cout<<endl;
    int **transposedA = transposeMatrix(A, row1, col1);
    printMatrix(transposedA, col1, row1);

    cout << "\nTranspose of Matrix B: ";
    cout<<endl;
    int **transposedB = transposeMatrix(B, row2, col2);
    printMatrix(transposedB, col2, row2);

    // Multi
    if (col1 == row2)
    {
        int **product = multiplyMatrices(A, B, row1, col1, col2);
        cout << "\nMatrix Multiplication Result: ";
        cout<<endl;
        printMatrix(product, row1, col2);
    }
    else
    {
        cout << "\nMatrix multiplication not possible due to dimension mismatch.";
        cout<<endl;
    }

    return 0;
}
