void addrc(int **matrix,int size ,int index,int rc){
    /*
    r==0;
    c==1    
    */
    if(rc ==0){
        for(int i=0;i<size;++i){
            matrix[index][i]++;
        }
    }else{
        for(int i=0;i<size;++i){
            matrix[i][index]++;
        }
    }
    
}



int oddCells(int n, int m, int** indices, int indicesSize, int* indicesColSize){
    int *matrix[n];
    int ret =0;
    *indicesColSize=2;
    
    for(int i=0;i<n;++i){
        matrix[i] =(int *)malloc (sizeof(int)*m);
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            matrix[i][j]=0;
        }
    }
    
    for(int i=0;i<indicesSize;++i){
        addrc(matrix,m,indices[i][0],0);
        addrc(matrix,n,indices[i][1],1);
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            ret+=matrix[i][j]%2;
        }
    }
    return ret ;
}


