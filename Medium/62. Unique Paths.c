int uniquePaths(int m, int n){    
    long long int ret=1;
    int len= m>n?n:m;
    for(int i=1;i<len;++i){        
        ret=ret*(m+n-1-i)/i;
    }
    return ret;
}

