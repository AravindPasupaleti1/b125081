#include <iostream>
using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    // Dynamically allocate row pointers
    int **A = new int*[m];
    int **B = new int*[m];
    int **C = new int*[m];

    // Allocate memory for each row
    for (int i = 0; i < m; i++) {
        A[i] = new int[n];
        B[i] = new int[n];
        C[i] = new int[n];
    }

    // Input first matrix
    cout << "Enter elements of Matrix A:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> A[i][j];
        }
    }

    // Input second matrix
    cout << "Enter elements of Matrix B:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // Matrix addition
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Display result
    cout << "\nResultant Matrix (A + B):\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    // Deallocate each row
    for (int i = 0; i < m; i++) {
        delete[] A[i];
        delete[] B[i];
        delete[] C[i];
    }

    // Deallocate row pointer arrays
    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}