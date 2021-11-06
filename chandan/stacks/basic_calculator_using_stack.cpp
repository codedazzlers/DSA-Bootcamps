class Solution {
public:
    void caculate(stack<long long> &nums, stack<long long> &op){
        if(nums.size() < 2 || op.size() < 1)
            return;
        int a = nums.top();
        nums.pop();
        int b = nums.top();
        nums.pop();
        char ch = op.top();
        op.pop();
        switch(ch){
            case '+':
                nums.push(b + a);
                break;
            case '-':
                nums.push(b - a);
                break;
            case '*':
                nums.push(b * a);
                break;
            case '/':
                nums.push(b / a);
                break;
        }
    }
    
    int calculate(string s) {
         stack<long long> nums, op;
        bool flag = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ')
                continue;
            else if(isdigit(s[i])){
                long long num = 0;
                for(; isdigit(s[i]); i++)
                    num = num * 10 + s[i] - '0';
                i--;
                if(flag){
                    num = -num;
                    flag = false;
                }
                nums.push(num);
            }
            else{
                if(nums.empty() && s[i] == '-'){
                    flag = true;
                    continue;
                }
                if(s[i] == '+' || s[i] == '-'){
                    while(!op.empty())
                        caculate(nums, op);
                }
                else{
                    while(!op.empty() && (op.top() == '*' || op.top() == '/'))
                        caculate(nums, op);
                }
                op.push(s[i]);
            }
        }
        while(!op.empty())
            caculate(nums, op);
        return nums.top();
    }
};