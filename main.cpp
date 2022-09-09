#include <iostream>
#include <NumCpp.hpp>
#include "NumAnalysis.h"
int main() {
    nc::NdArray<int> array={{1,2},{3,4}};
    std::cout<<array.shape();
    std::cout << "Hello, World!" << std::endl;
    int degree=4;
    double coeff[]={-1,5,-3,3,2};
    double x=(1.0/2);
    double b[]={0,0,0,0};
    std::cout<<NA::NestPolynomial(degree,coeff,x,b)<<std::endl;
//    std::cout<<NA::monomial(2,1,2,1);
    return 0;
}
