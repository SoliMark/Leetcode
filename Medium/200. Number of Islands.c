int numIslands(char** grid, int gridSize, int* gridColSize){
    int  count =0;
    for(int x=0;x<gridSize;++x){
        for(int y=0;y<*gridColSize;++y){
            if(grid[x][y]=='1'){
                visit(grid,x,y,gridSize,*gridColSize);
                count++;
            }
        }
    }
    return count;
}
void visit(char ** map ,int x,int y,int len_x,int len_y){
    if(!(x<0||y<0||x>=len_x||y>=len_y||map[x][y]!='1')){
        map[x][y]='*';
        visit(map,x,y+1,len_x,len_y);
        visit(map,x,y-1,len_x,len_y);
        visit(map,x+1,y,len_x,len_y);
        visit(map,x-1,y,len_x,len_y);
    }
        
}
