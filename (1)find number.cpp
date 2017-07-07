class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
    int n=array.size(),m=array[0].size(),i,j;
    for(i=n-1,j=0;i>=0 && j<m;){
        if(array[i][j]==target)return true;
        if(array[i][j]<target){j++;continue;}
        if(array[i][j]>target){i--;continue;}
    }
    return false;
    }
};

