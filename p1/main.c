#include <stdio.h>

int main() {
  int N;
  int A = 900, B = 750, C = 200;
  bool found = false;
  scanf("%d", &N);
  
  for(int a = 1; a * A <= N; a++) {
    for(int b = 2; b * B <= N; b += 2) {
        for(int c = 1; c * C <= N; c++) {
            int total = a * A + b * B + c * C;
            if(total == N && (c < a || c < b)) {
                found = true;
                printf("%d %d %d\n", a, b, c);
            }
        }
    }
  }
  if(!found)
    printf("none");
  
  return 0;
}
