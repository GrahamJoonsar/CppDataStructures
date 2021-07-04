#include <iostream>
#include "data_structures.h"

int main(){
    IList<int> test(false, 16);
    for (int i = 0; i < 16; i++){
        test.add((i + 1) * 9);
    }
    for (int i = 0; i < 16; i++){
        std::cout << test.get(i) << std::endl;
    }
}
