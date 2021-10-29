class Solution{
	public:
	long long int fact(int n){
    long long int p=1;
    while(n>=1){
        p=p*n;
        n--;
    }
    return p;
}
	vector<int> FactDigit(int N)
	{
	    // Code here
	    vector<int>v;
    int t=1;
    while(fact(t)<N && t<9){
        t++;
    }
    while(t>=0 && N>=0){
        if(fact(t)<=N){
            N=N-fact(t);
            v.push_back(t);
        }
        if(N<fact(t)){
        t--;
        }
        
    }
    sort(v.begin(),v.end());
    if(v[0]==0){
        swap(v[0],v[1]);
    }
   return v;
    
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution ob;
		vector<int>ans = ob.FactDigit(N);
		for(auto i: ans)
			cout << i;
		cout << "\n";
	}  
	return 0;
}