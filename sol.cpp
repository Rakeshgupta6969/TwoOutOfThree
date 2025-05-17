class Solution {
    public:
        vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
    
         // using the brute force solution.
    
         vector<int> ans;
    
         unordered_map<int,bool> check;
    
         for(int i = 0; i<nums1.size(); i++){
    
            for(int j = 0; j<nums2.size(); j++){
            
            if((nums1[i] == nums2[j]) && !check[nums2[j]]){
                ans.push_back(nums2[j]);
                check[nums2[j]] = true;
    
            }
            }
         }
       
    
         for(int i = 0; i<nums2.size(); i++){
    
            for(int j = 0; j<nums3.size(); j++){
            
            if((nums2[i] == nums3[j]) && !check[nums3[j]]){
                ans.push_back(nums3[j]);
                check[nums3[j]] = true;
    
            }
            }
         }
    
    
    
           for(int i = 0; i<nums1.size(); i++){
    
            for(int j = 0; j<nums3.size(); j++){
            
            if((nums1[i] == nums3[j]) && !check[nums3[j]]){
                ans.push_back(nums3[j]);
                check[nums3[j]] = true;
    
            }
            }
         }
        
        return ans;
    
        }
    };