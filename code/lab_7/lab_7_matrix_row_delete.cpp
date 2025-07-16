#include <iostream>
#include <cstdlib> 
#include <ctime>   

void printMatrix(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cout << matrix[i][j] << "\t";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

void fillMatrix(int** matrix, int size) {
    srand(time(0)); 
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = rand() % 100; 
        }
    }
}

void deleteRow(int** matrix, int size, int rowToDelete) {
    if (rowToDelete >= size || rowToDelete < 0) {
        std::cout << "Invalid row index for deletion!" << std::endl;
        return;
    }

    for (int i = rowToDelete; i < size - 1; i++) {
        for (int j = 0; j < size; j++) {
            matrix[i][j] = matrix[i + 1][j];
        }
    }

    for (int j = 0; j < size; j++) {
        matrix[size - 1][j] = 0;
    }
}

int main() {
    int size;
    std::cout << "Enter the size of the square matrix: ";
    std::cin >> size;

    int** matrix = new int*[size];
    for (int i = 0; i < size; i++) {
        matrix[i] = new int[size];
    }

    fillMatrix(matrix, size);

    std::cout << "Original matrix:\n";
    printMatrix(matrix, size);

    int rowToDelete;
    std::cout << "Enter the row index to delete (from 0 to " << size - 1 << "): ";
    std::cin >> rowToDelete;

    deleteRow(matrix, size, rowToDelete);

    std::cout << "Matrix after row deletion:\n";
    printMatrix(matrix, size);

    for (int i = 0; i < size; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

