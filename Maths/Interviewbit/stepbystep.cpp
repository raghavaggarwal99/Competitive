int Solution::solve(int A) {
    
//     Imagine the case with 9.
// If we only took positive steps, it would be 1+2+3+4=10>9.
// Now, at any point(say i), if you would have taken a step backward, your sum would have been 2*i less than the sum you have if i was in positive direction.

// So in case sum-2i=target, it means we have to take one negative step
// This means (sum-target)=2i i.e. (sum-target is even).

// Hence you go on to the next move until the condition (sum-target==2*i) is true
// This is why you check (sum-target)%2!=0 at every iteration of the loop

   int target = abs(A);
    int sum = 0, ans = 0;
    while (sum < target || (sum - target) % 2 != 0) {
        ans++;
        sum += ans;
    }
    return ans;
    
  
}

