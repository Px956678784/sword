class Solution {
public:
    vector<int> FindNumbersWithSum(vector<int> array,int sum) {
        vector<int> answer;
        int length=array.size();
        if(length<2)return answer;
        for(int i=0;i<length-1;i++){
            int low=i+1,high=length-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(array[mid]+array[i]==sum){
                    answer.push_back(array[i]);
                    answer.push_back(array[mid]);
                    return answer;
                }
                if(array[mid]+array[i]<sum)
                    low=mid+1;
                if(array[mid]+array[i]>sum)
                    high=mid-1;
            }
        }
        return answer;
    }
};
//更简单的方法是两边夹逼