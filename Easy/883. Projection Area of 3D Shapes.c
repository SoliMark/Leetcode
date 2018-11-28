int projectionArea(int** grid, int gridRowSize, int *gridColSizes) {
    int i,j,ret=0;
    for(i=0;i<gridRowSize;++i){
        int x=0;
        int y=0;
        for(j=0;j<*gridColSizes;++j){
            x=x<grid[i][j]?grid[i][j]:x;
            y=y<grid[j][i]?grid[j][i]:y;
            if(grid[i][j])
                ret++;
        }
        ret+=x+y;
    }
    return ret;
    
    
    
}