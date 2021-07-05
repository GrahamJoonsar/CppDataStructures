#pragma once
#include <iostream>

// IList stands for Information list
template <typename T>
class IList {
    private:
        T * data; // the actual data stored
        bool * notEmpty;
        T _max = 0; // The maximum of the list
        T _min = 0; // The minimum of the list.
        unsigned int _length = 0; // number of elements in the list
        unsigned int _size = 0; // number of elements possible in the list
        bool ordered = false;
        bool hasMinMax = false;
        bool firstElementAlreadyIn = false;

    public:
        // Accessor functions
        T max(); // Getting the max of the list
        T min(); // Getting the min of the list
        unsigned int length(); // Getting the length of the list

        T get(unsigned int index); // Indexing
        void set(unsigned int index, T val); // Adding to a specific index
        T pop(unsigned int index); // Removing and getting the value at the specified index

        void set_size(unsigned int newSize);

        IList(bool _ordered, bool _hasMinMax, unsigned int size); // The constructor
};

#include "data_structures.tpp" // Weird thing because of templates
// Here is explanation 
// https://stackoverflow.com/questions/495021/why-can-templates-only-be-implemented-in-the-header-file