class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
     int l=0;
     int h=matrix.size()-1;
     while(l<=h){
        int mid=l+(h-l)/2;
       if( matrix[mid][0] <= target &&
target <= matrix[mid][matrix[0].size()-1]){
        int left = 0;
int right = matrix[0].size() - 1;
while(left <= right){
        int m = left + (right - left) / 2;
        if(matrix[mid][m]==target)return true;
         else if(target>matrix[mid][m]){
            left=m+1;
        }
        else
            {
            right=m-1;
        }
}
      return false;  
     }
    else if(target > matrix[mid][matrix[0].size()-1]) {
    l = mid + 1;
}
else if(target < matrix[mid][0]) {
    h = mid - 1;
}
     }

     return false;   
    }
};
