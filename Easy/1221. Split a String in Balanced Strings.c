

int balancedStringSplit(char * s){
    int cnt=0,c=0;
    while(*s){
        if(*s == 'L') cnt++;
        else cnt--;           
        
        if(cnt==0)c++;
        
        s++;
    }
    return c;

}

