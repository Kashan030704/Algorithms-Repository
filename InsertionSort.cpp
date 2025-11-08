void insertion_sort(double array[], std::size_t capacity){

    //Insertion_sort: Good for small-sized arrays, and inefficient for large arrays
    std::size_t i{1};

    while(i!=capacity){

    for(std::size_t k{0};k<i;++k) {

        if(array[k]>array[i]){
            swap(array[k], array[i]);
        }

    }
    ++i;

    }

}