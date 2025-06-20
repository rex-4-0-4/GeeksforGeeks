class Solution {
  public:
    vector<int> lcmAndGcd(int num1, int num2) {
        // code here

        int ans;
        vector<int> anss;
        
        long num3=num1*num2;
        
	while(num1!=0 && num2!=0){
		if(num1>num2){
			num1 = num1%num2;
		}
		else if(num1<num2){
			num2 = num2%num1;
		}
		else{
			ans = num1;
			break;
		}
	}
	if(num1==0 && num2==0)
		ans=0;
	else if(num1==0)
		ans = num2;
	else if(num2==0)
		ans = num1;
	
		
	int gcd = ans;
	int lcm = num3/gcd;
	anss.push_back(lcm);
	anss.push_back(gcd);
	return anss;
    }
};