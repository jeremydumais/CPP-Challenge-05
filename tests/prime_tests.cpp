#include <gtest/gtest.h>
#include "../include/prime.h"

using namespace std;

int main(int argc, char**argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

TEST(IsPrime, Number0_ReturnFalse)
{
    ASSERT_FALSE(prime::isPrime(0));
}

TEST(IsPrime, Number1_ReturnFalse)
{
    ASSERT_FALSE(prime::isPrime(1));
}

TEST(IsPrime, Number2_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(2));
}

TEST(IsPrime, Number3_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(3));
}

TEST(IsPrime, Number4_ReturnFalse)
{
    ASSERT_FALSE(prime::isPrime(4));
}

TEST(IsPrime, Number5_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(5));
}

TEST(IsPrime, Number6_ReturnFalse)
{
    ASSERT_FALSE(prime::isPrime(6));
}

TEST(IsPrime, Number7_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(7));
}

TEST(IsPrime, Number11_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(11));
}

TEST(IsPrime, Number13_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(13));
}

TEST(IsPrime, Number16_ReturnFalse)
{
    ASSERT_FALSE(prime::isPrime(16));
}

TEST(IsPrime, Number17_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(17));
}

TEST(IsPrime, Number52_ReturnFalse)
{
    ASSERT_FALSE(prime::isPrime(52));
}

TEST(IsPrime, Number53_ReturnTrue)
{
    ASSERT_TRUE(prime::isPrime(53));
}