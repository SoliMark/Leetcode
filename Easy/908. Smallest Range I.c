int smallestRangeI(int* A, int ASize, int K) {
    int max=A[0],min=A[0],i;
    for(i=1;i<ASize;++i){
        max=max>A[i]?max:A[i];
        min=min<A[i]?min:A[i];
    } 
    return max-min<2*K?0:max-min-2*K;
}
