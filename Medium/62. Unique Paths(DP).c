
int uniquePaths(int m, int n){    
    int map[m][n];
    
    for(int x=0;x<m;++x) map[x][0]=1;
    
    for(int y=0;y<n;++y) map[0][y]=1;
    
    for(int x=1;x<m;++x){
        for(int y=1;y<n;++y){
            map[x][y]=map[x-1][y]+map[x][y-1];
        }
    }
    return map[m-1][n-1];
}

