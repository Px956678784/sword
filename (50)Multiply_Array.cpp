class Solution {
public:
    vector<int> multiply(const vector<int>& A) {
    	vector<int> B;
        int length=A.size();
        if(length==0)return B;
        for(int i=0;i<length;i++){
            int temp=1;
            for(int j=0;j<i;j++)
                temp*=A[j];
            for(int k=i+1;k<length;k++)
                temp*=A[k];
            B.push_back(temp);
        }
        return B;
    }
};