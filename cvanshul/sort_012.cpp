class Solution
{
    public:
    void sort012(int a[], int n)
    {
        //  THIS APPROACH IS SIMPLE AS WE COMPARE THE FIRST AND
        //  THE LAST ELEMENT OF THE ARRAY AND
        //  THE LAST ELEMENT IS SMAL THEN SWAP 
        
        
    //     for(int i=0;i<n-1;i++)
    // {
    //   if(a[n-1]<a[i])
    //   {
    //         int temp = a[n-1];
    //         a[n-1]=a[i];
    //         a[i]=temp;
    //   }
    //   n--;
    // }
    
    // APPROACH TWO -> HERE, I count all the 0,1,2 and then put them to the arra.
    int c0=0;
    int c1=0;
    int c2=0;
    for(int i =0; i<n ; i++)
    {
        switch(a[i])
        {
            case 0:
                c0++;
                break;
            case 1:
                c1++;
                break;
            case 2:
                c2++;
                break;
        }
    }
    
    // update the array 
    int i =0;
    while(c0>0)
    {
        a[i]=0;
        i++;
        c0--;
    }
    while(c1>0)
    {
        a[i]=1;
        i++;
        c1--;
    }
    while(c2>0)
    {
        a[i]=2;
        i++;
        c2--;
    }
    
    
    } 
};