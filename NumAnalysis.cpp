//
// Created by vinay on 2022/9/9.
//

#include "NumAnalysis.h"
#include <iostream>

/**
 *the implement of monomial
 * @param degree
 * @param coeff
 * @param b
 * @return
 */
double NA::monomial(int degree, double coeff,double x, double b) {
    std::cout<<degree<<" "<<coeff<<" "<<x<<" "<<b<<std::endl;
    double begin=x;
    for (int i = 1; i <degree ; ++i) {
        x*=begin;
    }
    return coeff*x+b;
}

/**
 *NestPolynomial ---> evaluate polynomial in a nested form which is effcient
 * @param degree the degree of polynomial
 * @param coeff the coefficients of each term of polynomial
 * @param x the value of x
 * @param basePoint the base point used in formula (x-r1) , you will see details in notes
 * @return the evaluation of polynomial
 */
double NA::NestPolynomial(int degree, double coeff[], double x, double basePoint[]) {
    double result=coeff[degree];
    for(int i=degree; i>0;--i){
        std::cout<<result<<" ";
        result=monomial(1,result,(x-basePoint[i-1]),coeff[i-1]);
    }
    return result;
}

