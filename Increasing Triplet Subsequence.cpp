bool increasingTriplet(vector<int>& nums) {
  if(nums.size()<3){
      return false;
  }
  for(int i=0;i<nums.size()-2;i++){            
      for(int j=i+1;j<nums.size();j++){
          if(nums[i]<nums[j]){
              for(int k=j+1;k<nums.size();k++){
                  if(nums[j]<nums[k]){
                      return true;
                  }
              }
          }
      }
  }
  return false;
}
