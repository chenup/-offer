class Solution
{
public:
    void push(int node) {
        while(stack1.size() > 0)
        {
        	stack2.push(stack1.top());
        	stack1.pop();
        }
        stack1.push(node);
        while(stack2.size() > 0)
        {
        	stack1.push(stack2.top());
        	stack2.pop();
        }
    }

    int pop() {
        int node = stack1.top();
        stack1.pop();
        return node;
    }

private:
    stack<int> stack1;
    stack<int> stack2;
};