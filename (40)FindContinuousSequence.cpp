class Solution {
public:
    vector<vector<int> > FindContinuousSequence(int sum) {
        vector<vector<int>> answer;
        vector<int> temp;
        if(sum<3)return answer;
    	for(int i=sqrt(2*sum+1);i>=2;i--){
            for(int j=1;j<sum-i+1;j++){
                int start=j,end=j+i-1,sumup;
                sumup=(start+end)*i/2;
                if(sumup==sum){
                    for(int k=0;k<=end-start;k++)
                        temp.push_back(start+k);
                    answer.push_back(temp);
                    temp.clear();
                }
            }
        }
        return answer;
    }
};