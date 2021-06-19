#include <stdio.h>


int main(){
  int c,t, n, b; // t = tabs n = new lines b = blanks

  t = 0;
  n = 0;
  b = 0;

  while ((c = getchar()) != EOF){
    if (c == '\n'){
      ++n;
    }
    if ( c == '\t'){
      ++t;
    }
    if ( c == ' '){
      ++b;
    }
  }

  printf("New Lines: %d\n", n);
  printf("Tabs: %d\n", t);
  printf("Blanks: %d\n", b);

}

