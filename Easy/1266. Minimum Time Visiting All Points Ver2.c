

int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize){
    int ret=0,max=0;         
    *pointsColSize=2;    
    for(int i=0;i<pointsSize-1;++i){        
        max=abs(points[i][0]-points[i+1][0])>abs(points[i][1]-points[i+1][1])?
            abs(points[i][0]-points[i+1][0]):abs(points[i][1]-points[i+1][1]);        
        ret+=max;                
    }

    return ret ;
}

