class Solution {
public:
    int FindGreatestSumOfSubArray(vector<int> array) {
    	if(array.size()==0)return 0;
        int max=-1000000;
        int curr=0;
        for(int i=0;i<array.size();i++){
            if(curr<=0)
                curr=array[i];
            else
                curr+=array[i];
            if(curr>max)
                max=curr;
        }
        return max;
    }
};