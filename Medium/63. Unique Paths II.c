int uniquePathsWithObstacles(int** obstacleGrid, int obstacleGridSize, int* obstacleGridColSize){
    int col= *obstacleGridColSize;
    int row=obstacleGridSize;
    unsigned int dp[row][col];
    dp[0][0]=(obstacleGrid[0][0]==0)?1:0;
    for(int x=1;x<row;++x)
        dp[x][0]=(obstacleGrid[x][0]==1)?0:dp[x-1][0];
    for(int y=1;y<col;++y)
        dp[0][y]=(obstacleGrid[0][y]==1)?0:dp[0][y-1];
    
    for(int x=1;x<row;++x){
        for(int y=1;y<col;++y){
            if(obstacleGrid[x][y]==1){
                dp[x][y]=0;
            }else{
                dp[x][y]=dp[x-1][y]+dp[x][y-1];
            }        
        }
    }
    return dp[row-1][col-1];
}
