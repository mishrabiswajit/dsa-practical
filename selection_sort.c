#include <stdio.h>
int minimum(int arr[], int start, int size);

// this will return the index value of the element which will be the next minimum
int minimum(int arr[], int start, int size)
{
  int min = arr[start];
  int index;

  for (int i = start; i < size; i++)
  {
    if (arr[i] <= min)
    {
      index = i;
      min = arr[i];
    }
  }
  return index;
}

int main()
{
  int size;
  printf("Enter how many numbers you want to input : ");
  scanf("%d", &size);

  int arr[size];
  for (int i = 0; i < size; i++)
  {
    printf("Enter num %d : ", i + 1);
    scanf("%d", &arr[i]);
  }

  for (int i = 0; i < size; i++)
  {
    int temp = arr[i];
    arr[i] = arr[minimum(arr, i, size)];
    arr[minimum(arr, i, size)] = temp;
  }
  printf("\n\n");
  for (int i = 0; i < size; i++)
  {
    printf("%d\n", arr[i]);
  }

  return 0;
}