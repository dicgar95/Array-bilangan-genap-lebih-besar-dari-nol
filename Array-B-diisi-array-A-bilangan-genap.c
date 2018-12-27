//Oleh muhammad dicky garcia
//STT PELITA BANGSA
#include <stdio.h>
int main(int argc, char const *argv[]) {
  int a,s[5],c[5];
  printf("Array A \n");
  printf("0 1 2 3 4 5 \n");
  for (size_t a = 0; a < 5; a++) {
    /* code */scanf("%i",&s[a] );
  }
  for (size_t a = 0; a < 5; a++) {
    /* code */c[a]=s[a];
  }
  printf("\n");
  printf("Array B \n");
  for (size_t a = 0; a < 5; a++) {
    /* code */printf("%2i",c[a] );
    scanf("%d",&a );
    if (a%2==0); {
      /* code */printf("%d Adalah bilangan genap\n\n",a );
    }
  }
  return 0;
}
