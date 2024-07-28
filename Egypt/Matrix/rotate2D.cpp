void transpose(vector<vector<int>>& matrix){
    int n=matrix.size();
    fr(n){
        for(int j=i+1;j<n;j++) swap(matrix[i][j],matrix[j][i]);
    }
}

void reflect(vector<vector<int>>& matrix){
    for(int c=0;c<n/2;c++)
        for(int r=0;r<n;r++) swap(matrix[r][c], matrix[r][n-c-1]);
}

void rotate(vector<vector<int>>& matrix){
    transpose(matrix);
    reflect(matrix);
}