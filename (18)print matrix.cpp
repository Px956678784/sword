class Solution {
    void circle(vector<vector<int>> matrix,int s1,int s2,int e1,int e2,vector<int> *answer){
        for(int i=s2;i<=e2;i++)
            answer->push_back(matrix[s1][i]);
        for(int i=s1+1;i<=e1;i++)
            answer->push_back(matrix[i][e2]);
        for(int i=e2-1;i>=s2 && s1!=e1;i--)
            answer->push_back(matrix[e1][i]);
        for(int i=e1-1;i>=s1+1 && s2!=e2;i--)
            answer->push_back(matrix[i][s2]);
    }
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> answer;
        int n=matrix.size(),m=matrix[0].size(),i,j;
        for(i=0,j=0;i<=(n-1)/2 && j<=(m-1)/2;i++,j++)
       		circle(matrix,i,j,n-i-1,m-j-1,&answer);
        return answer;
    }
};