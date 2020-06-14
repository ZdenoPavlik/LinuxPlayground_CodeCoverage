#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../src/Calculator.h"

TEST(CalculatorDummyTest, overallTest)
{
    Calculator calc;

    EXPECT_EQ(calc.scitaj(1, 2), 3);
    EXPECT_EQ(calc.odcitaj(3, 2), 1);
    EXPECT_EQ(calc.vynasob(1, 2), 2);
    //Delenie umyselne chyba!
}