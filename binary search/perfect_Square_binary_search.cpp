bool isPerfectSquare(int num) {

    int s=0;
    int e=num;
    
    while(s<=e)
    {
        long mid=(s+e)/2;
        if(mid*mid==num)
        {
            return true;
        }
        else if(mid*mid>num)
            {
                e=mid-1;
            }
        else
        {
            s=mid+1;
        }
    }
    return false;
    
}