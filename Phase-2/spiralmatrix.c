// leetcode 54

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* spiralOrder(int** mat, int row, int* col, int* r_size) {
    *r_size = row * (*col);
    int *arr = (int*)malloc(sizeof(int) * (*r_size));// 4 * 25
                      //sizeof(int)* 5 => 4*5 => 20bytes  
    // walles
    int top = 0;
    int bot = row-1;
    int left = 0;
    int right = *col-1;
    int i=0; // iterate over the result array
    while(i < (*r_size)){
    // left to right 
        for(int ind=left;ind<=right && i < (*r_size);ind++){
            arr[i] = mat[top][ind];
            i++;
        }
        top++;
        for(int ind=top;ind<=bot && i < (*r_size);ind++){
            arr[i] = mat[ind][right];
            i++;
        }
        right--;
        for(int ind=right;ind>=left && i < (*r_size);ind--){
            arr[i] = mat[bot][ind];
            i++;
        }
        bot--;
        for(int ind=bot;ind>=top && i < (*r_size);ind--){
            arr[i] = mat[ind][left];
            i++;
        }
        left++;
    }
    return arr;
}





// leetcode 59

/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** generateMatrix(int n, int* row, int** r_size) {
    *row = n;
    *r_size = (int*)malloc(sizeof(int) * n);
    int **arr = (int**)malloc(sizeof(int*) * n);
    
    for(int ind=0;ind<n;ind++){
        arr[ind] = (int*)malloc(sizeof(int) * n);
        (*r_size)[ind] = n;
    }
    // walles
    int top = 0;
    int bot = n-1;
    int left = 0;
    int right = n-1;
    int val = 1; // iterate over the result array
    while(val <= (n*n)){
    // left to right 
        for(int ind=left;ind<=right && val <= (n*n);ind++){
            arr[top][ind] = val;
            val++;
        }
        top++;
        for(int ind=top;ind<=bot && val <= (n*n);ind++){
            arr[ind][right] = val;
            val++;
        }
        right--;
        for(int ind=right;ind>=left &&val <= (n*n);ind--){
            arr[bot][ind] = val;
            val++;
        }
        bot--;
        for(int ind=bot;ind>=top && val <= (n*n);ind--){
            arr[ind][left] = val;
            val++;
        }
        left++;
    }
    return arr;
}






