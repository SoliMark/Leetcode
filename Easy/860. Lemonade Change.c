bool lemonadeChange(int* bills, int billsSize) {
    int i,money[3]={0};
    for(i=0;i<billsSize;++i){
        if(bills[i]==5){
            money[0]++;
        }else if(bills[i]==10){
            if(money[0]){
                money[1]++;
                money[0]--;
            }else{
                return false;
            }
        }else{
            if(money[1]&&money[0]){
                money[2]++;
                money[1]--;
                money[0]--;
            }else if(money[0]>2){
                money[0]=money[0]-3;
                
            }else{
                return false;
            }
            
        }
    }
    
    return true;
}

