double binary_search(double array[], std::size_t capacity, double value){
    int lower_index{0};
    int upper_index{capacity-1};
    // Binary search in a sorted array
    // Returns the index of 'value' if found, otherwise returns 'capacity'
    while(lower_index<=upper_index){

        int average_index{(upper_index+lower_index)/2};

        if(value == array[average_index]){
            return average_index;

        }else if(value < array[average_index]){
            upper_index = average_index -1;

        }else if(value > array[average_index]){
            lower_index = average_index +1;
        }
    }
    return capacity;
}