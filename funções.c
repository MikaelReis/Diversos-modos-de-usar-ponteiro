#include <stdio.h>

int soma ( int *p1, int *p2){
    int result; 
    result = *p1 + *p2;
    return result;
}

int sub ( int *p1, int *p2){
    int result; 
    result = *p1 - *p2;
    return result;
}

int divi ( int *p1, int *p2){
    int result; 
    result = *p1 / *p2;
    return result;
}

int multi ( int *p1, int *p2){
    int result; 
    result = *p1 * *p2;
    return result;
}




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
    
    printf("\n soma de valores: %d + %d = %d ",*p1,*p2,(soma (p1,p2)));
    printf("\n subtracao de valores: %d - %d = %d ",*p1,*p2,(sub (p1,p2)));
    printf("\n divisao de valores: %d / %d = %d ",*p1,*p2,(divi (p1,p2)));
    printf("\n multiplicacao de valores: %d * %d = %d ",*p1,*p2,(multi (p1,p2)));
    

    return 0;
}
