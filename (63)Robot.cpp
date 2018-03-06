#include<iostream>
using namespace std;
    bool **map;
	int getSum(int number){
		int sum=0;
		while(number>0){
			sum+=number%10;
			number/=10;
		}
		return sum;
	}
    bool judge(int threshold,int rows,int cols,int x,int y){
        if(x>=0 && y>=0 && x<rows && y<cols && getSum(x)+getSum(y)<=threshold && map[x][y]==false)
            return true;
		cout<<x<<" "<<y<<" "<<p<<"***"<<endl;
        return false;
    }
    int find(int threshold,int rows,int cols,int x,int y){
        int sum=0;
    	if(judge(threshold,rows,cols,x,y)){
        	map[x][y]=true;
   			sum=1+find(threshold,rows,cols,x-1,y)
                   +find(threshold,rows,cols,x,y-1)
                   +find(threshold,rows,cols,x+1,y)
                   +find(threshold,rows,cols,x,y+1);
        }
        return sum;
    }
    int movingCount(int threshold, int rows, int cols){
        map=new bool*[rows];
        for(int i=0;i<rows;i++)
            map[i]=new bool[cols];
        for(i=0;i<rows;i++)
            for(int j=0;j<cols;j++)
                map[i][j]=false;
        int count=find(threshold,rows,cols,0,0);
        return count;
    }
int main(){
cout<<movingCount(5,10,10)<<endl;
}