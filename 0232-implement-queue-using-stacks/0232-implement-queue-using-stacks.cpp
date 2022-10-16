class MyQueue {
public:
    stack<int> first;
    stack<int> second;
    

    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        while(first.empty()!=true)
        {
            second.push(first.top());
            first.pop();
            
        }
        int num=second.top();
        second.pop();
        while(second.empty()!=true)
        {
            first.push(second.top());
            second.pop();
            
        }
        return num;
        
    }
    
    int peek() {
        while(first.empty()!=true)
        {
            second.push(first.top());
            first.pop();
            
        }
        
        int num=second.top();
        while(second.empty()!=true)
        {
            first.push(second.top());
            second.pop();
            
        }
        return num;
        
    }
    
    bool empty() {
       return first.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */