double *merge_sort(double a[], std::size_t cap_a, double b[], std::size_t cap_b) {
    double *sorted{new double[cap_a+cap_b]{0}};
    int ka{0};
    int kb{0};
    while(( ka < cap_a ) && ( kb < cap_b)){
        if(a[ka]<=b[kb]){
            sorted[ka+kb]=a[ka];
            ++ka;
        }else{
            sorted[ka+kb]=b[kb];
            ++kb;
        }
    }
    while (ka < cap_a) sorted[ka + kb] = a[ka++];
    while (kb < cap_b) sorted[ka + kb] = b[kb++];

    return sorted; //must be deleted after calling, to prevent a memory leak
}

