
#include <iostream>
#include <vector>
#include "TestVector.h"


int main()
{
    std::vector<int> test(9);
    test.push_back(3);
    TestVector<int> test(9);

    std::cout << "Hello World!\n";
}

