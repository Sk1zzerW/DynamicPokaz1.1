﻿#include <iostream>

int main() {
    int M, N;
    std::cout << "розмір масиву A ";
    std::cin >> M;
    std::cout << "розмір масиву B ";
    std::cin >> N;

    int* A = new int[M];
    int* B = new int[N];
    int* C = new int[M + N];
    int index = 0;

    std::cout << "елементи масиву A ";
    for (int i = 0; i < M; i++) {
        std::cin >> A[i];
        C[index++] = A[i];
    }

    std::cout << "елементи масиву B ";
    for (int i = 0; i < N; i++) {
        std::cin >> B[i];
        C[index++] = B[i];
    }

    std::cout << "третій масив ";
    for (int i = 0; i < index; i++) {
        std::cout << C[i] << " ";
    }

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}
