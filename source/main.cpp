﻿#include <iostream>

#include "utmatr4.h"



void main()
{

    TMatrix<int> a(5), b(5), c(5);
    int i, j;

    setlocale(LC_ALL, "Russian");
    cout << "Тестирование программ поддержки представления треугольных матриц"
        << endl;
    for (i = 0; i < 5; i++)
        for (j = i; j < 5; j++)
        {
            a[i][j] = i * 10 + j;
            b[i][j] = (i * 10 + j) * 100;
        }
    c = a + b;
    cout << "Matrix a = " << endl << a << endl;
    cout << "Matrix b = " << endl << b << endl;
    cout << "Matrix c = a + b" << endl << c << endl;
    
}

