//Definition of function template maximun
template < class T >
T maximum(T val1, T val2, T val3){
    T maxValue = val1;
    if(val2 > maxValue){
        maxValue = val2;
    }
    if(val3 > maxValue){
        maxValue = val3;
    }
    return maxValue;
}