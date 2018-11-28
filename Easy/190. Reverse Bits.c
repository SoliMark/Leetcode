uint32_t reverseBits(uint32_t n) {
    uint32_t ret=0;
    int count =32;
    while(count--){              
        ret<<=1;
        ret=ret|n&1;
        n>>=1;
    }
    return ret;
}