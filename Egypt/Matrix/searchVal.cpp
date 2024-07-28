bool searchMatrix(vector<vector<int>>& matrix, int target){
    int rows=matrix.size(), cols=matrix[0].size();
    int r=0, c=cols-1;
    while(c>=0 and r<rows){
        if(target==matrix[r][c]) return true;
        if(target>matrix[r][c]) r++;
        else c--;
    }
    return false;
}