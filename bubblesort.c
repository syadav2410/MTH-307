#include <stdio.h>
int main()
{
  int array[100], n, temp;
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (int i = 0; i < n; i++){
    printf("%d)  ",i+1);
    scanf("%d", &array[i]);
  }
  for (int i = 0 ; i < n - 1; i++){
    for (int j = 0 ; j < n - i - 1; j++){
      if (array[j] > array[j+1]){
        temp       = array[j];
        array[j]   = array[j+1];
        array[j+1] = temp;
      }
    }
  }
  printf("\nSorted list:\n");
  for (int i = 0; i < n; i++)
     printf("%d\n", array[i]);
  return 0;
}
