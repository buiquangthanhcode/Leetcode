class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        if(n<3)return false; //an array should have atleast 3 elements to be Mountain
        int start=0, end=n-1;
        while(start+1<n && arr[start]<arr[start+1])start++;
        while(end>0 && arr[end]<arr[end-1]) end--;
        return start>0 && end<n-1 && start==end;
    }
};