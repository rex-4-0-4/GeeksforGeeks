class Solution {
  public:
    int maximumSumSubarray(vector<int>& arr, int k) {
        // code here
        int s=0;
        int i=0;
        int j=0;
        int N = arr.size();
        
        while(j-i!=k){
            s+=arr[j];
            j++;
        }
        
        int maxsum = s;
        
        while(j<N){
            s = s - arr[i] + arr[j];
            maxsum = max(maxsum,s);
            i++;
            j++;
        }
        return maxsum;
        
    }
};