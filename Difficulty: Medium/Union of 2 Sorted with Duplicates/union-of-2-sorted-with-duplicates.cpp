class Solution {
  public:
    // a,b : the arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // Your code here
        int i=0;
        int j=0;
        vector <int> ans;
        
        int m = a.size();
        int n = b.size();
        
        while(i<m && j<n){
            if(a[i]<=b[j]){
                if(ans.size()==0){
                    ans.push_back(a[i]);
                    i++;
                }
                else{
                    if(a[i]==ans.back()){
                        i++;
                    }
                    else{
                        ans.push_back(a[i]);
                        i++;
                    }
                    
                }
            }
            else if(b[j]<a[i]){
                if(ans.size()==0){
                    ans.push_back(b[j]);
                    j++;
                }
                else{
                    if(b[j]==ans.back()){
                        j++;
                    }
                    else{
                        ans.push_back(b[j]);
                        j++;
                    }
                    
                }
                
            }
        }
        while(i<m){
            if(ans.back()==a[i]){
                i++;
            }
            else{
            ans.push_back(a[i]);
            i++;
            }
        }
        while(j<n){
            if(ans.back()==b[j]){
                j++;
            }
            else{
            ans.push_back(b[j]);
            j++;
            }
        }
        return ans;
        // return vector with correct order of elements
    }
};