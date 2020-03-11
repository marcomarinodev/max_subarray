#include <stdio.h>
#define DIM 16

void maxSubarray(int arr[], int n) {
  int try_start = 0;
  int current_sum = 0;
  int max_sum = 0;
  int start = 0;
  int end = 0;

  for (int i = 0; i < n; i++) {
    current_sum = current_sum + arr[i];

    if (current_sum < 0) {
      current_sum = 0;
      try_start = i + 1;
    } else if (current_sum > max_sum) {
      max_sum = current_sum;
      start = try_start;
      end = i;
    }
  }

  printf("START INDEX: %d\n", start);
  printf("END INDEX: %d\n", end);
}

int main(void) {
  int test[DIM] = {13, -3, -25, 20, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
  maxSubarray(test, DIM);
  return 0;
}
