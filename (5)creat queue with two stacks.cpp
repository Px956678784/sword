class Solution
{
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int element;
        if(stack2.empty()){
        	while(!stack1.empty()){
            	stack2.push(stack1.top());
            	stack1.pop();
        	}
        	element=stack2.top();
        	stack2.pop();
        }
        else{
            element=stack2.top();
            stack2.pop();
        }
     	return element;
    }
private:
    stack<int> stack1;
    stack<int> stack2;
};