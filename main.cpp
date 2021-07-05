#include <iostream>
#include "data_structures.h"

int main(){
    IList<int> test(false, true, 100);
    for (int i = 0; i < 100; i++){
        test.set(i, i * 3);
    }
    std::cout << "MIN: " << test.min() << std::endl;
    std::cout << "MAX: " << test.max() << std::endl;
}