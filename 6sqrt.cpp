class Solution {
public:
    int mySqrt(int x) {
      int st=1;
      int end=x;
      int ans=x;
      while(st<=end){
      int mid=end+(st-end)/2;
      
      if(mid<=x/mid){
       ans=mid;
       st=mid+1;
     
      }
      else{
        end=mid-1;
      }
      
      }
      return ans;
    }
};
