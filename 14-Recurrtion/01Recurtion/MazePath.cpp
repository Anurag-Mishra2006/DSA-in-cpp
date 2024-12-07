// Only two direction is allowed 1. Right  2.Down
// You have to return no. of ways
#include<iostream> 
using namespace std;
int maze(int startRow, int startColumn , int endRow , int endColumn){
    if(startRow> endRow || startColumn>endColumn)return 0;
    if(startRow==endRow && startColumn==endColumn)return 1;
    int rightways =maze(startRow,startColumn+1,  endRow , endColumn);
    int downways = maze(startRow+1,startColumn,  endRow , endColumn);
    int totalways = rightways+ downways;
    return totalways;
    
}
void printPath(int startRow, int startColumn , int endRow , int endColumn,string s){
    if(startRow> endRow || startColumn>endColumn)return ;
    if(startRow==endRow && startColumn==endColumn){
        cout<<s<<endl;
        return;
    }  
    printPath(startRow,startColumn+1,  endRow , endColumn,s+'R');//right
    printPath(startRow+1,startColumn,  endRow , endColumn,s+'D');//down
    
}
int maze2(int endrow,int endcolumn){
    if(endrow<1 || endcolumn<1){return 0;}
    if(endrow==1 && endcolumn==1){
        return 1;
    }
    int rightways = maze2(endrow ,endcolumn-1);//right
    int downways = maze2(endrow-1, endcolumn);//down
     int totalways = rightways+ downways;
    return totalways;
}
int main(){
    //  if the person reaches destination then return 1
    // if person escape out of matrix then return 0
    cout<<maze(1,1,4,3)<<endl;
    printPath(1,1,4,3,"");
    cout<<maze2(4,3)<<endl;
}