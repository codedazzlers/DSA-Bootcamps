class StockSpanner {
public:
     stack<pair<int,int>> s;
    
    StockSpanner() {
        
    }
    
    int next(int price) {
        int cnt = 1;
        while(!s.empty() && price >= s.top().first){
		 // if element is greater than equal to price of top of stack then its count will be equal to (1 + cnt of stack top element)
            cnt += s.top().second;
            s.pop();
        }
        s.push({price,cnt});
        return s.top().second;
    }
};
