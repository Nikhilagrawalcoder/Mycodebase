 void nextPermutation(vector<int>& nums) {
        int ans=-1;
        for(int i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                ans=i;
                 break;
            }
        }
        int q=-1;
        for(int i=nums.size()-1;i>ans;i--){
            if(nums[ans]<nums[i]){
                q=i;
                break;
            }
        }
        int temp=nums[ans];
        nums[ans]=nums[q];
        nums[q]=temp;
      reverse(nums.begin()+ans+1,nums.end());
        
           }
           