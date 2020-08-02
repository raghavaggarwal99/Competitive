typedef long long int ll;
class Solution {
public:
    
    ll solve(ll n){

        ll sum=0;

        while(n!=0){
            int v=n%10;
            sum+=v*v;
            n=n/10;
        }

        return sum;
    
    }

    
    bool isHappy(int n) {
        
       int slow, fast; 
  
    //    initialize slow and fast by n 
    slow = fast = n; 
    do
    { 
        //    move slow number by one iteration 
        slow = solve(slow); 
  
        //    move fast number by two iteration 
        fast = solve(solve(fast)); 
  
    } 
    while (slow != fast); 
  
    //    if both number meet at 1, then return true 
    return (slow == 1); 

    }
};
