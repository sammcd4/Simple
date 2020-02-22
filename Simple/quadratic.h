//
//  quadratic.h
//  Simple
//
//  Created by Sam McDonald on 2/21/20.
//  Copyright © 2020 Sam McDonald. All rights reserved.
//

#include <iostream>
#include "math.h"

#ifndef quadratic_h
#define quadratic_h

float inputValue(const char* var) {
    printf("Enter %s: ", var);
    float inputVal(0);
    std::cin >> inputVal;
    return inputVal;
}

void solveQuadratic(float a, float b, float c) {
 
    float real1(0), real2(0);
    float complex(0);
    
    float root = b*b - 4*a*c;
    
    printf("Solution:\n");
    if(root < 0) {
        // complex
        real1 = -b/(2*a);
        complex = sqrt(-root) / (2*a);
        
        if(complex > 0) {
            printf("x_1 = %f + %fi\n", real1, complex);
            printf("x_2 = %f - %fi\n", real1, complex);
        }
        else {
            printf("x_1 = %f - %fi\n", real1, complex);
            printf("x_2 = %f + %fi\n", real1, complex);
        }
    }
    else {
        // real
        real1 = (-b + sqrt(root)) / (2*a);
        real2 = (-b - sqrt(root)) / (2*a);
        
        if (real1 == real2)
        {
            printf("x = %f\n", real1);
        }
        else {
            printf("x_1 = %f\n", real1);
            printf("x_2 = %f\n", real2);
        }
    }
    
}

void runQuadraticSolver() {
    float a(0), b(0), c(0);
    printf("Quadratic Formula\n");
    printf("Solve ax^2 + bx + c = 0\n");
    a = inputValue("a");
    b = inputValue("b");
    c = inputValue("c");
    
    printf("\nSolving (%f)x^2 + (%f)x + (%f)\n\n", a, b, c);
    
    solveQuadratic(a, b, c);
}

#endif /* quadratic_h */
