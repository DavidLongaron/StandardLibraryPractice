
#include <iostream>
#include <vector>
#include "TestVector.h"


int main()
{
    std::vector<int> test(9);
    test.push_back(3);
    TestVector<int> test2(9);
    int val1 = 10, val2 = 20, val3 = 30;
    test2.pushBack(val1);
    test2.pushBack(val2);
    test2.pushBack(val3);

    std::cout << test2.at(0)<<" Deber�a imprimir 10" << std::endl; // Deber�a imprimir 10
    std::cout << test2.at(1)<<" Deber�a imprimir 20" << std::endl; // Deber�a imprimir 20
    std::cout << test2.at(2)<<" Deber�a imprimir 30" << std::endl; // Deber�a imprimir 30

}