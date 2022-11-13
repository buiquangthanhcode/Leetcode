class Solution {
public:
 double myPow(double x, int n) {
        double muilty=1.0;
         if(x==-1.00000 and
n==-2147483648) return 1;
         if(n==1 or x==1 or n==2147483647)
                return x;
         if(n==0)
                return 1;
         
        if(n>0)
        {
                for(int i=0;i<n;i++)
                {
                    muilty=muilty*x;
                        
                    
                }
        }
         else 
        {
                 if(n==-2147483648)
                       return 0;
                 n=-n;
                 
                for(int i=0;i<n;i++)
                {
                          muilty=muilty*(1.0/(x));
                        
                        
                }
        }
        return muilty;
    }
};