#include <stdio.h>

int main() {
  int N;
  int A = 900, B = 750, C = 200;
  int found = 0;
  scanf("%d", &N);
  
  for(int a = 1; a * A <= N; a++) {
    for(int b = 2; a * A + b * B <= N; b += 2) {
        for(int c = 1; a * A + b * B + c * C <= N; c++) {
            int total = a * A + b * B + c * C;
            if(total == N && (a > 0 && b > 0 && c > 0) && (c < a || c < b)) {
                found = 1;
                printf("%d %d %d\n", a, b, c);
            }
        }
    }
  }
  if(found == 0)
    printf("none");
  
  return 0;
}
