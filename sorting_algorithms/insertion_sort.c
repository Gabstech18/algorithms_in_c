#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 50
#define LIMIT_RAND 100

void sortArray(int *matrix, int n);

int main(void) {
  int array_to_sort[ARRAY_SIZE];
  int *section_to_sort = (int *)calloc(ARRAY_SIZE, sizeof(int));

  srand(time(NULL));
  for(int i=0; i<ARRAY_SIZE; i++){
    array_to_sort[i] = 1 + rand()%LIMIT_RAND;
  }
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("%d ", array_to_sort[i]);
  }
  //now to sort
  printf("\n");
  sortArray(array_to_sort, ARRAY_SIZE);
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("%d ", array_to_sort[i]);
  }


  printf("\nNow sort this\n");
  //testing moving the heap zone
  for(int i=0; i<ARRAY_SIZE; i++){
    section_to_sort[i] = 1 + rand()%LIMIT_RAND;
  }
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("%d ", section_to_sort[i]);
  }
  //now to sort
  printf("\n");
  sortArray(section_to_sort, ARRAY_SIZE);
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("%d ", section_to_sort[i]);
  }
  
  


  printf("\n");
  return 0;
}

void sortArray(int*matrix, int n) {

  for (int i = 1; i < n; i++) {
    int key = matrix[i];
    int j = i - 1;
    while (j > -1 && matrix[j] > key) {
      matrix[j + 1] = matrix[j];
      j = j - 1;
    }
    matrix[j + 1] = key;
  }
}
