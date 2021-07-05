#include <iostream>
#include "data_structures.h"

int main(){
    IList<int> test(false, 1);
    test.add(0, 89);
    std::cout << test.get(0) << std::endl;
    test.set_size(2);
    test.add(1, 99);
    std::cout << test.get(0) << std::endl;
    std::cout << test.get(1) << std::endl;
}