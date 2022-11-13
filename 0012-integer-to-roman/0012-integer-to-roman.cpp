class Solution {
public:
      string intToRoman(int num)
{
    map<int,string> m ; 
    m[1]="I";
    m[5]="V";
    m[10]="X";
    m[50]="L";
    m[100]="C";
    m[500]="D";
    m[1000]="M";
    m[4]="IV";
    m[40]="XL";
    m[90]="XC";
    m[400]="CD";
    m[900]="CM";
               m[9]="IX";
    
    // int sum=0;
    // int t=num;
    // int count=1;
    // while(t!=0)
    // {
    //    int value=(t%10)*count;

    //     count*=10;
    //     t=t/10;
    // }
    //  int value ; 
    // vector<int>vt;
    // cout<<endl;
    int value =0; 
    int sum=0;
    string s="";
    while(num>0 )
    {
        
        for(int i=num;i>=1;i--)
            {
                auto it=m.find(i);
                if(it!=m.end())
                {
                  value=it->first;
                //   vt.push_back(it->first);
                break;
                }
            }
            num=num-value;
            s+=m[value];
            
    }
    return s; 
}
};