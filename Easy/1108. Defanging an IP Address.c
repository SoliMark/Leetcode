

char * defangIPaddr(char * address){
    char * ret =malloc ((strlen(address)+7)*sizeof(char));
    int s=0;
    for(int i=0;i<strlen(address);i++){
        if(address[i]=='.'){
            ret[s++]='[';
            ret[s++]='.';
            ret[s++]=']';
            
        }else{
            ret[s++]=address[i];
        }
    }
    ret[s]='\0';
    return ret;
}

