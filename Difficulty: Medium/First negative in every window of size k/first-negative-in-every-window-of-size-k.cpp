class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        // write code here
        int i=0;
        int j=0;
        int N = arr.size();
        
        vector<int>ans;
        deque <int> dq;
        
        for(j=0;j<k;j++){
            if(arr[j]<0){
                dq.push_back(arr[j]);
            }
        }
        if(!dq.empty() && arr[i]==dq.front()){
            ans.push_back(dq.front());
            dq.pop_front();
        }
        else if(!dq.empty() && arr[i]!=dq.front()){
            ans.push_back(dq.front());
        }
        else{
            ans.push_back(0);
        }
        while(j<N){
            if(arr[j]<0){
                dq.push_back(arr[j]);
            }
            i++;
            if(!dq.empty() && arr[i]==dq.front()){
                ans.push_back(dq.front());
                dq.pop_front();
            }
            else if(!dq.empty() && arr[i]!=dq.front()){
                ans.push_back(dq.front());
            }
            else{
                ans.push_back(0);
            }
            j++;
            
        }
        return ans;
    }
};