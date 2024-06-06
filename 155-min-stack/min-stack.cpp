class MinStack {
public:
vector <int> v;
        int topp=-1;
    MinStack() {
        
    }
    
    void push(int val) {
        v.push_back(val);
        topp++;
    }
    
    void pop() {
        v.erase(v.begin()+topp);
        topp--;
    }
    
    int top() {
        return v[topp];
    }
    
    int getMin() {
        return *min_element(v.begin(),v.end());
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */