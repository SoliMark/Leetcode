struct Start{
    int x;
    int y;
};

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    int ret=0,max=0;
     struct Start start={points[0][0],points[0][1]};    
    
    *pointsColSize=2;
    
    for(int i=1;i<pointsSize;++i){
        max =abs(points[i][0]-start.x);
        max=max>abs(points[i][1]-start.y)?max:abs(points[i][1]-start.y);        
        ret+=max;
        start.x=points[i][0];
        start.y=points[i][1];
    }

    return ret ;
}

