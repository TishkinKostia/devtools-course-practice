// Copyright 2016 Pronina Maria
#include <gtest/gtest.h>

#include "include/complex_number.h"
#include <math.h>

TEST(Pronina_Maria_ComplexNumberTest,
    Imaginary_Number_Square_Is_Negative_Real) {
    // Arrange
    ComplexNumber z(0.0, 1.0);
    //Act
    ComplexNumber square = z * z;
    // Assert 
    ComplexNumber res(-1.0, 0.0);
    EXPECT_TRUE(res == square);
}

TEST(Pronina_Maria_ComplexNumberTest, Triangle_Inequality_For_Complex) {
    // Arrange
    ComplexNumber z1(6.0, 5.0), z2(7.0, 8.0);
    //Act
    ComplexNumber sum = z1 + z2;
    double sumAbs = sqrt(sum.getRe() * sum.getRe() + sum.getIm() * sum.getIm());
    double z1Abs = sqrt(z1.getRe() * z1.getRe() + z1.getIm() * z1.getIm());
    double z2Abs = sqrt(z2.getRe() * z2.getRe() + z2.getIm() * z2.getIm());
    // Assert
    EXPECT_TRUE(sumAbs < z1Abs + z2Abs);
}
