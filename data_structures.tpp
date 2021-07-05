
// maximum of the list
template <typename T>
T IList<T>::max(){
    return _max;
}

// minimum of the list
template <typename T>
T IList<T>::min(){
    return _min;
}

// amount of elements in the list
template <typename T>
unsigned int IList<T>::length(){
    return _length;
}

template <typename T>
T IList<T>::get(unsigned int index){ // Indexing
    return data[index];
}

template <typename T>
void IList<T>::add(unsigned int index, T val){
    if (!notEmpty[index]){ // This index has not been used yet
        data[index] = val;
        _length++;
    } else { // Index has been used
        data[index] = val;
    }
    notEmpty[index] = true;
}

template <typename T>
T IList<T>::pop(unsigned int index){
    if (!notEmpty[index]){ // Index hasn't been used
        std::cout << "IList index '" << index << "' is empty." << std::endl;
        exit(8); // error
    } else { // Something is stored in the index
        T temp = data[index];
        data[index] = (T)NULL; // Kinda jank, but deletion
        notEmpty[index] = false;
        return temp;
    }
}

template <typename T>
void IList<T>::set_size(unsigned int newSize){
    if (_size < newSize){ // The new IList is bigger
        T * newData = new T[newSize];
        // Copying over the list
        for (unsigned int i = 0; i < _size; i++){newData[i] = data[i];} // Copying the original list
        for (unsigned int i = _size; i < newSize; i++){newData[i] = (T)NULL;} // Filling the rest with empty
        // Copying over the bool checks
        bool * newNotEmpty = new bool[newSize];
        for (unsigned int i = 0; i < _size; i++){i=newNotEmpty[i] = notEmpty[i];}
        for (unsigned int i = _size; i < newSize; i++){newNotEmpty[i] = false;} // Filling the rest with false
        data = newData;
        notEmpty = newNotEmpty;
        _size = newSize;
    }
}

// Constructor
template <typename T>
IList<T>::IList(bool _ordered, unsigned int size){
    _size = size;
    data = new T[size];
    auto temp = new bool[size];
    for (unsigned int i = 0; i < size; i++){temp[i] = false;} // Setting every value to false
    notEmpty = temp;
    ordered = _ordered;
}