class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        
        
         if(nums.size()>1)
    
        {   
            int i,j,finali=0,finalj=0,flag=0;
            
            for(i=0;i<nums.size()-1;i++)
                if(nums[i]<nums[i+1])
                    finali=i,flag=1;
                    
            
            for(j=0;j<nums.size();j++)
                if(nums[j]>nums[finali])
                    finalj=j;
            
            int temp=nums[finali];
            
            nums[finali]=nums[finalj];
            
            nums[finalj]=temp;
            
            sort(nums.begin()+finali+1,nums.end());
			
			// If array is already reverse sorted then sort in ascending order 
            if(flag==0)
                sort(nums.begin(),nums.end());
        }
    

        
        
    }
};
