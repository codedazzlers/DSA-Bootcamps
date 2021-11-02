class MyCircularQueue {
public:
    int head=-1,tail=-1;
    vector<int>v;
    
    MyCircularQueue(int k) {
                head=-1;
        tail=-1;
        v.resize(k);

    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }if(isEmpty()){
            head=0;
        }
            tail++;
            if(tail>=v.size()){
                tail=0;
            }
            v[tail]=value;
            return true;
        
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(head==tail){
            head=-1;
            tail=-1;
            return true;
        }
        head++;
        if(head>=v.size()){
            head=0;
        }
        return true;
        
    }
    
    int Front() {
         if(isEmpty())
            return -1;
        return v[head];
    }
    
    int Rear() {
        if(isEmpty())
            return -1;
        return v[tail];
        
    }
    
    bool isEmpty() {
         if(head==-1)
            return true;
        else
            return false;
        
    }
    
    bool isFull() {
        int temp=tail;
        temp++;
        if(temp>=v.size())
            temp=0;
        if(temp==head)
            return true;
        else
            return false;
        
    }
};