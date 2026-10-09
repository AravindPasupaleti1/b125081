
#include <iostream>
using namespace std;

class Matrix {
    int a[2][2];

public:
    Matrix(int values[2][2]) {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                a[i][j] = values[i][j];
            }
        }
    }

    Matrix operator+(const Matrix& m) const {
        int result[2][2];

        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                result[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return Matrix(result);
    }

    void display() const {
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int values1[2][2] = {{1, 2}, {3, 4}};
    int values2[2][2] = {{5, 6}, {7, 8}};

    Matrix m1(values1);
    Matrix m2(values2);

    cout << "First matrix:\n";
    m1.display();

    cout << "\nSecond matrix:\n";
    m2.display();

    Matrix result = m1 + m2;

    cout << "\nResultant matrix:\n";
    result.display();

    cout << "\nFirst matrix after addition:\n";
    m1.display();

    return 0;
}