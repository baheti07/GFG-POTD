void booleanMatrix(vector<vector<int> > &matrix)
    {
        // code here 
        int col0 = 0, n = matrix.size(), m = matrix[0].size();
  for (int i = 0; i < n; i++) {
    //checking if 1 is present in the 0th column or not
    if (matrix[i][0] == 1) col0 = 1;
    for (int j = 1; j < m; j++) {
      if (matrix[i][j] == 1) {
        matrix[i][0] = 1;
        matrix[0][j] = 1;
      }
    }
  }
  //traversing in the reverse direction and
  //checking if the row or col has 1 or not
  //and setting values of matrix accordingly.
  for (int i = n - 1; i >= 0; i--) {
    for (int j = m - 1; j >= 1; j--) {
      if (matrix[i][0] == 1 || matrix[0][j] == 1) {
        matrix[i][j] = 1;
      }
    }
    if (col0 == 1) {
      matrix[i][0] = 1;
    }

  }
    }