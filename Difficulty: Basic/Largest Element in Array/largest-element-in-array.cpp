class Solution {
  public:
    int largest(vector<int> &arr) {
        // code here
        int largest = arr[0];
        int N = arr.size();
        for(int i=1;i<N;i++){
            if(arr[i]>largest)
            largest = arr[i];
        }
        return largest;
    }
};
