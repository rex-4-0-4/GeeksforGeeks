class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        int slargest = -1;
        int largest = arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]>largest){
                slargest = largest;
                largest = arr[i];
            }
            else if(arr[i]>slargest && arr[i]<largest){
                slargest = arr[i];
            }
        }
        return slargest;
    }
};