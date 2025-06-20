class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
        // code here
        int c=0;
        int bk = n;
        while(bk!=0){
            int rem = bk%10;
            bk/=10;
            if(rem==0)
            continue;
            if(n%rem==0){
                c++;
            }
        }
        return c;
    }
};