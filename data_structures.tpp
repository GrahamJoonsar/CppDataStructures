
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

// maximum of the list
template <typename T>
unsigned int IList<T>::length(){
    return _length;
}

template <typename T>
T IList<T>::get(unsigned int index){ // Indexing
    return data[index];
}

template <typename T>
void IList<T>::add(T val){
    data[_length++] = val;
}

// Constructor
template <typename T>
IList<T>::IList(bool _ordered, unsigned int size){
    data = new T[size];
    ordered = _ordered;
}