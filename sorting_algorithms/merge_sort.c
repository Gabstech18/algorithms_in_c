#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ARRAY_SIZE 50
#define LIMIT_RAND 100

//void mergeSort();

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
  //mergeSort();
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
  //mergeSort();
  for(int i=0; i<ARRAY_SIZE; i++){
    printf("%d ", section_to_sort[i]);
  }


  printf("\n");
  return 0;
}

void mergeSort() {
}
