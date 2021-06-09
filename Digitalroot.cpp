class Solution{
  public:
    //Complete this function
    int digitalRoot(int n)
    {
        if(n==0)
        return 0;
 int d,sum;
        while(n!=0)
    {
       sum=0;
        while(n!=0)
        {

            d=n%10;
            sum=sum+d;
            n=n/10;
        }
        if(sum>9)
        {
            n=sum;
            sum=0;
        }

    }
    return sum;
}
    
};

// { Driver Code Starts.


int main() {
	int T;
	cin>>T;//taking testcases
	while(T--)
	{
	    int n;
	    cin>>n;//taking number n
	    
	    //calling digitalRoot() function
	    Solution obj;
	    cout<<obj.digitalRoot(n)<<endl;
	    
	    
	}
	return 0;
}  // } Driver Code Ends