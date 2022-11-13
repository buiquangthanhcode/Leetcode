class Solution {
public:
    int calPoints(vector<string>& ops) 
{
    int sum=0;
    stack<int>st;
    for(int i=0;i<ops.size();i++)
    {
        if(ops[i]=="C")
        {
            st.pop();
        }
        else if(ops[i]=="D")
        {
            st.push(st.top()*2);
        }
        else if(ops[i]=="+")
        {
           int value1=st.top();
           st.pop();
           int value2=st.top();
           st.pop();
           st.push(value2);
           sum=value1+value2;
           st.push(value1);
           st.push(sum);
        }
        else 
        {
          
                st.push(stoi(ops[i]));
        }
        
    }  
    int result=0;
    while(!st.empty())
    {
        result+=st.top();
        cout<<st.top()<<" ";
        st.pop();
    }
  
    return result ; 
}
};