class Solution {
  public:
    int missingNum(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int index=1;
        for(int i=0;i<n;i++){
            if(arr[i]==index){
                index++;
                
            }
            
        }
        return index;
    }
};