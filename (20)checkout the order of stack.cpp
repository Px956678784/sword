#include<stack>
class Solution {
public:
    bool IsPopOrder(vector<int> pushV,vector<int> popV) {
    	stack<int> temp;
        for(int i=0,j=0;i<pushV.size();){
            temp.push(pushV[i++]);
            while(j<popV.size() && popV[j]==temp.top()){
                temp.pop();
                j++;
            }
        }
        return temp.empty();
    }
};