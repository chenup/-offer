class Solution {
public:
    void push(int value) {
        numStack.push(value);
        if(numStack.size() == 1)
        {
        	minStack.push(value);

        }
        else if(value < numStack[minStack.top()])
        {
        	minStack.push(numStack.size() - 1);
        }
    }

    void pop() {
        int l = numStack.size() - 1;
        if(minStack.top() == l)
        {
        	minStack.pop();
        }
        numStack.pop();
    }
    int top() {
        return numStack.top();
    }
    int min() {
        return numStack[minStack.top()];
    }
private:
	stack<int> numStack;
	stack<int> minStack;
};