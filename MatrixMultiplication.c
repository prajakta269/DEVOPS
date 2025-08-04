#include <stdio.h>

int main() {
  int r1, c1, r2, c2, i, j, k;

  printf("Enter the number of rows and columns of the first matrix: ");
  scanf("%d %d", &r1, &c1);

  printf("Enter the number of rows and columns of the second matrix: ");
  scanf("%d %d", &r2, &c2);

  if (c1 != r2) {
    printf("Error: Matrices cannot be multiplied.\n");
    return 1;
  }

  int a[r1][c1], b[r2][c2], product[r1][c2];
  printf("Enter elements of the first matrix:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  printf("Enter elements of the second matrix:\n");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      product[i][j] = 0;
      for (k = 0; k < c1; k++) {
        product[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  printf("Resultant matrix:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      printf("%d ", product[i][j]);
    }
    printf("\n");
  }

  return 0;
} 
