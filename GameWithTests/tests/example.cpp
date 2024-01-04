#include "utest.h"
#include "../src/tester.hpp"

UTEST(example, add)
{
    int a = 10;
    int b = 20;

    ASSERT_EQ(add(a, b), 30);
}