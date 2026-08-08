class StockSpanner {
public:

    stack<int>st;
    
    stack<int>span;

    StockSpanner() {

    }
    
    int next(int price) {

        int curr_span = 1;

        while(!st.empty() && st.top() <= price)
        {
            st.pop();
            curr_span+=span.top();
            span.pop();
        }

        st.push(price);
        span.push(curr_span);

        return curr_span;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */