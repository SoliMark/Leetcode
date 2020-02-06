
int maximum69Number (int num){
    int digit =0,sum=3,ret =num;         
    while(num){
        digit++;                        
        if(num%10==6){            
            while(digit--)sum=sum*10;
            digit=0;                            
        }
        num/=10;
    }
    sum=sum/10;
    return sum+ret;
}

