#include <stdio.h>

int main()

{
    int m1, m2;
    int *p1, *p2;
    
    p1 = &m1;
    p2 = &m2;
    
    printf("digite um numeros inteiro:");
    scanf("%d",p1);
    printf("digite um numeros inteiro:");
    scanf("%d",p2);
    
    
    printf("\n soma de valores: %d+ %d = %d ",*p1,*p2,(*p1 + *p2));
    printf("\n subtração de valores: %d - %d = %d",*p1,*p2,(*p1 - *p2) );
    printf("\n divisão de valores: %d / %d = %d",*p1,*p2,(*p1 / *p2));
    printf("\n multiplicação de valores: %d * %d = %d",*p1,*p2,(*p1 * *p2));
    

    return 0;
}