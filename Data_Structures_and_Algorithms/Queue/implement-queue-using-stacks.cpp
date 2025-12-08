class MyQueue {
public:
    stack <int> front,back;

    MyQueue() {
        
    }
    
    void push(int x) {

        while(!front.empty()){
            int top = front.top();
            front.pop();
            back.push(top);
        }

        back.push(x);
    }
    
    int pop() {

        while(!back.empty()){
            int top = back.top();
            back.pop();
            front.push(top);
        }

        int top = front.top();
        front.pop();
        return top;
    }
    
    int peek() {
        while(!back.empty()){
            int top = back.top();
            back.pop();
            front.push(top);
        }
        return front.top();
    }
    
    bool empty() {
        return front.empty() && back.empty();
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