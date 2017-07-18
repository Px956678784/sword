#include<queue>
class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
        int length=input.size();
        priority_queue<int> choose;
        vector<int> answer;
        if(length<k || k==0) return answer;
        for(int i=0;i<length;i++){
            if(choose.size()<k)
                choose.push(input[i]);
            else
                if(input[i]<choose.top()){
                    choose.pop();
                    choose.push(input[i]);
                }
        }
        while(!choose.empty()){
            answer.push_back(choose.top());
            choose.pop();
        }
        return answer;
    	
    }
};