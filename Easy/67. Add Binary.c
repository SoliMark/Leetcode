char * addBinary(char * a, char * b){
    int retsize=strlen(a)>strlen(b)?strlen(a):strlen(b);    
    char * ch =(char*) malloc ((retsize+2)*sizeof(char));
    ch[retsize+1]='\0';  
    int c=0;
    for(int i=0;i<=retsize;++i){        
        int x=((int)strlen(a)-i)>0?a[strlen(a)-i-1]-'0':0;
        int y=((int)strlen(b)-i)>0?b[strlen(b)-i-1]-'0':0;                        
        ch[retsize-i]=((x^y^c)==1)?'1':'0';       
        c=((x||y)&&c)||(x&y);       
    }
    ch=(ch[0]=='0')?ch+1:ch;
    return ch;
}

