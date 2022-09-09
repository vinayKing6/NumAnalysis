//
// Created by vinay on 2022/9/9.
//
#include <NumCpp.hpp>

#ifndef NUMERCIAL_ANALYSIS_NUMANALYSIS_H
#define NUMERCIAL_ANALYSIS_NUMANALYSIS_H

namespace NA{
    double monomial(int degree,double coeff,double x,double b);
    double NestPolynomial(int degree,double coeff[],double x,double basePoint[]);
}

#endif //NUMERCIAL_ANALYSIS_NUMANALYSIS_H
