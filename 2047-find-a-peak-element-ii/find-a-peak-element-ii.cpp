class Solution {
public:



       int findIndex(vector<vector<int>>mat, int n, int m , int col){
          if (col < 0 || col >= m) {
        return -1;  // Return -1 for an invalid column index
    }
          int maxValue=INT_MIN;
           int maxIndex=-1;
            for( int i=0;i<n;i++){
                if(mat[i][col]>maxValue){
                     maxValue=mat[i][col];
                      maxIndex=i;
                }
            }
             return maxIndex;
       }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int n=mat.size();
         int m =mat[0].size();
          int low=0;
           int high=m-1;
            while( low<=high){
             int mid = low + (high - low) / 2;

              int maxRowIndex=findIndex(mat, n, m, mid);
              int left= mid-1>=0? mat[maxRowIndex][mid-1] :-1;
               int right= mid+1<m ? mat[maxRowIndex][mid+1] :-1;

                 if( mat[maxRowIndex][mid]>left && mat[maxRowIndex][mid]>right){
                     return {maxRowIndex,mid};
                 }
                 else if(mat[maxRowIndex][mid]<left){
                      high=mid-1;

                 }
                  else{
                     low=mid+1;
                  }
            }
             return {-1,-1};
        
    }
};