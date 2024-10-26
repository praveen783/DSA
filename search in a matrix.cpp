class Solution {
public:
    bool bs(vector<int> &arr,int low,int high,int X){
        while(low<=high){
            int mid = (low+high)/2;
        if(arr[mid]==X){
            return true;
        }
        else if(arr[mid]>X){
            high = mid-1;
        }
            else{
            low = mid+1;
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for(int i=0;i<matrix.size();i++){
            if(bs(matrix[i],0,matrix[i].size()-1,target) == true){
                return true;
            }
            else{
                continue;
            }
        }
        return false;
    }
};
