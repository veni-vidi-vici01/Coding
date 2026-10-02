-----------------------------------------------------Brute-------------------------------------------------------
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mul=nums[0];
        int largest_product=nums[0];
        for(int i=0;i<n;i++){
            mul=nums[i];
            largest_product=max(largest_product,mul);
            for(int j=i+1;j<n;j++){
              mul*=nums[j];
              largest_product=max(largest_product,mul);
            }
        }
        return largest_product;
    }
};
---------------------------------------------------Optimal----------------------------------------------------------
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int mul1=nums[0];
        int largest_product1=mul1;
        int mul2=nums[n-1];
        int largest_product2=mul2;
        for(int i=1;i<n;i++){
            if(mul1==0){
                mul1=nums[i];
            }else{
                mul1*=nums[i];
            }
            largest_product1=max(largest_product1,mul1);
        }
        for(int i=n-2;i>-1;i--){
            if(mul2==0){
                mul2=nums[i];
            }else{
                mul2*=nums[i];
            }
            largest_product2=max(largest_product2,mul2);
        }
        int largest_product=max(largest_product1,largest_product2);
        return largest_product;
    }
};