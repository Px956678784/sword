#include<stack>
class Solution {
public:
    void reOrderArray(vector<int> &array) {
        stack<int> odd,even;
    	for(int i=array.size()-1;i>=0;i--){
            if(array[i]%2!=0){
            	odd.push(array[i]);
                array.pop_back();
            }
            else{
                even.push(array[i]);
                array.pop_back();
            }
        }
        while(!odd.empty()){
            array.push_back(odd.top());
            odd.pop();
        }
        while(!even.empty()){
            array.push_back(even.top());
            even.pop();
        }
    }
};