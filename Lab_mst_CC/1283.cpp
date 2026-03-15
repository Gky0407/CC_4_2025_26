class Solution {
public:
    int check(vector<int> &nums,int mid){
        int sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=ceil(double(nums[i])/double(mid));

        }
        return sum;
    }
    
    int smallestDivisor(vector<int>& nums, int threshold) {
         int f=1;
         int l=*max_element(nums.begin(),nums.end());
         while(l>=f){
            int mid=f+(l-f)/2;
                if(check(nums,mid)<=threshold)l=mid-1;

                else{
                    f=mid+1;
                }

         }
         return f; 
    }
};