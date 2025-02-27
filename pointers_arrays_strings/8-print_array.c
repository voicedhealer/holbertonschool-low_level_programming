/**
*utilisation de 2 int a et n 
*un espace après la virgule
*respect l'ordre demander
*
/*
#include <stdio.h>
#include "main.h"

int main(){
   int a[5] = {-1024, -198, 98, 298, 402};  
   int n;

   for (n = 0; n <= 4; n++){
      printf("array [%d]: %d\n", n, a[n]);
   }
   return 0;
}
