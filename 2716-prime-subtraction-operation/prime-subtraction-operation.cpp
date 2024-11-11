class Solution {
public:
    bool isPrime(int n)
    {
        if(n==1) return false;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0) return false;
        }
        return true;
    }
    int helper(int n)
    {
        if(n<=2) return -1;
        for(int i=n;i>=2;i--)
        {
            if(isPrime(i)) return i;
        }
        return -1;
    }
    bool primeSubOperation(vector<int>& nums) {
        int n= nums.size();
        // if(nums[0]>1) nums[0]-=helper(nums[0]-1);
        // for(int i=1;i<n;i++)
        // {
        //     int k=nums[i]-nums[i-1];
        //     if(k==1) continue;
        //     if(k<=0||helper(k)==-1) return false;
        //     else nums[i]-=helper(k);
        // }
        for(int i=n-2;i>=0;i--)
        {
            int p=nums[i+1];
           
            if(nums[i]>=p)
            { 
                 int f=0;
                for(int j=2;j<nums[i];j++)
            {
                if(isPrime(j)&&nums[i]-j<p){ nums[i]-=j; f=1; break;}
            }
            if(f==0) return false;
            }
            
        }
        return true;
    }
};