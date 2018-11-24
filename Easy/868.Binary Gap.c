int binaryGap(int N) {
    int onecount=0;
    int zerocount=0,maxzero=0;
    int c=0;
    //10101
    while(N){
        if(N&c){
            onecount++;
            maxzero=maxzero>zerocount?maxzero:zerocount;
            zerocount=0;
            
        }else if (N&1) {
            onecount++;
            c=1;
        }
        else{
            if(c){
                zerocount++;
            }
        }
        N>>=1;
    }
    if(onecount==1||onecount==0)
        return 0;
    if(maxzero){
        return maxzero+1;
    }else{
        return 1;
    }
}