int peakIndexInMountainArray(int* A, int ASize) {
    int i;
    for(i=1;i<ASize;++i){
        if(A[i]<A[i-1])
            return i-1;
    }
    return 0;
}