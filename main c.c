#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int inverte_inteiro(int n){
    int R = 0;
    int num = n;

    while(num>0){
        R = R*10 + num%10;
        num /= 10;
    }
    return R;
}

int verifica_palindromo(int n){
    return n == inverte_inteiro(n);
}

int main(){
   int a;
   int b;
   int c1;

   printf("Digite inicio o intervalo:");
   scanf("%d",&a);

   printf("Digite o fim do intervlo:");
   scanf("%d",&b);

   for(c1=a;c1<=b;c1++){
    if(verifica_palindromo(c1)){
        printf("%d\n",c1);
    }
   }


    return 0;
}
