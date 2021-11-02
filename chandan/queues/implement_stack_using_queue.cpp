class MyStack {
public:
     queue <int> q1 ;
    
    MyStack() {
        queue <int> q1 ;
        
    }
    
    void push(int x) {
         q1.push(x);
    }
    
    int pop() {
        int front = q1.front();                       //Getting hold of front
        int rear =  q1.back() ;                      // Getting hold of rear
        swap(q1.front(), q1.back());       //Since popping happens at the beginning swap the rear and front
        q1.pop();                          //Now, the item to be removed becomes the front pop it from queue
        swap(q1.front(), q1.back());       //Swap back
        return rear ;       
        
    }
    
    int top() {
        return q1.back();
        
    }
    
    bool empty() {
        return q1.empty();
        
    }
};