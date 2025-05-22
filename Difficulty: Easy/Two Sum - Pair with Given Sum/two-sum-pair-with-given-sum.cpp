// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        
        
        // brutal approach
        // int n=arr.size();
        // for(int i=0;i<=n-2;i++){
        //     for(int j=i+1;j<=n-1;j++){
        //         if(arr[i]+arr[j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;
        
        unordered_set<int> seen;
        for(int num:arr){
            if(seen.count(target-num)){
                return true;
            }
            seen.insert(num);
        }
        return false;
    }
};