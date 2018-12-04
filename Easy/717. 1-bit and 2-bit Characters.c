bool isOneBitCharacter(int* bits, int bitsSize) {
    int i=0;
    for(;i<bitsSize-1;){
        if(bits[i]){
            i+=2;
        }else{
            i++;
        }
    }
    return i==bitsSize-1;
}