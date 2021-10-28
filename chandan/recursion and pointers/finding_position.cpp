class Solution {
  public:
    long long int nthPosition(long long int n){
     
     long long int p = (long long int)log2(n); 
        return (long long int)pow(2, p);    // code here
    }
};