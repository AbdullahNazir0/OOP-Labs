#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

// Create a Matrix class to represent nxn matrices. Overload the * operator to multiply two matrices. Create a program that demonstrates matrix multiplication.

class Matrix {
private:
    int n;
    int ** matrix = nullptr;

public:
    Matrix(){
        n = 0;
        matrix = nullptr;
    }
    Matrix(int s){
        n = s;
        matrix = new int*[n];
        for(int i = 0; i < n; i++){
            matrix[i] = new int[n];
        }
    }

    Matrix operator* (const Matrix& obj){
        if(n != obj.n){
            std::cout << "Matrix multiplication is not possible." << std::endl;
        } else {
            Matrix result(n);
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    result.matrix[i][j] = 0;
                }
            }

            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    for(int k = 0; k < n; k++)
                    {
                        result.matrix[i][j] += matrix[i][k] * obj.matrix[k][j];
                    }
                }
            }
            return result;
        }
    }

    void input(){
        std::cout << "Enter the elements of the matrix: ";
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                std::cin >> matrix[i][j];
            }
        }
    }

    void display(){
        std::cout << "The matrix is " << std::endl;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                std::cout << matrix[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    

    ~Matrix(){
        for(int i = 0; i < n; i++){
            delete[]matrix[i];
        }
        delete[]matrix;
    }
};

#endif