#include <stdio.h>
int main()
{
  int row, col;

  // taking the size of the matrix
  printf("Enter the row and column of the matrix : ");
  scanf("%d %d", &row, &col);
  int matrix[row][col];

  // taking the elements + checking for non elements
  int non_zero_element = 0, zero_element = 0;
  for (int i = 0; i < row; i++)
  {
    for (int j = 0; j < col; j++)
    {
      printf("Enter the value in index [%d][%d] : ", i, j);
      scanf("%d", &matrix[i][j]);
      if (matrix[i][j] != 0)
      {
        non_zero_element++;
      }
      else
      {
        zero_element++;
      }
    }
  }

  // checking wheather it is a sparse matrix or not
  if (non_zero_element < zero_element)
  {
    int sorted_matrix[non_zero_element + 1][3];
    int k = 0, l = 0;
    for (int i = 0; i < row; i++)
    {
      for (int j = 0; j < col; j++)
      {
        if (matrix[i][j] != 0)
        {
          sorted_matrix[k][l] = i; // storing the row index of the non zero element
          l++;
          sorted_matrix[k][l] = j; // storing the column index of the non zero element
          l++;
          sorted_matrix[k][l] = matrix[i][j]; // storing the value of the non zero element
          l = 0;
          k++;
        }
      }
    }
    sorted_matrix[non_zero_element][0] = row;              // storing the row of the sparse matrix
    sorted_matrix[non_zero_element][1] = col;              // storing the col of the sparse matrix
    sorted_matrix[non_zero_element][2] = non_zero_element; // storing the non-zero element count

    // printing out the sorted array
    printf("\nTriplet Repesentation :-\n");
    for (int i = 0; i < (non_zero_element + 1); i++)
    {
      for (int j = 0; j < 3; j++)
      {
        printf("%d\t", sorted_matrix[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("This is not a sparse matrix !!");
  }

  return 0;
}