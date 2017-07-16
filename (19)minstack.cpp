#include<stack>
class Solution {
    stack<int> minstack,mainstack;
public:
    void push(int value) {
        mainstack.push(value);
        if(minstack.empty()) minstack.push(value);
        else{
            int MIN=minstack.top();
            if(MIN>value) minstack.push(value);
            else minstack.push(MIN);
        }
    }
    void pop() {
        minstack.pop();
        mainstack.pop();
    }
    int top() {
        return mainstack.top();
    }
    int min() {
    	return minstack.top();
    }
};