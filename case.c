#include <stdio.h>
#include <conio.h>

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




int main( void )

{
    int m1, m2;
    int *p1, *p2;
    int valor;
    
    p1 = &m1;
    p2 = &m2;
    
    printf("digite um numeros inteiro:");
    scanf("%d",p1);
    printf("digite um numeros inteiro:");
    scanf("%d",p2);
    
    printf ("Digite 1 para somar, Digite 2 para subtrair, digite 3 para dividir ou 4 para multiplicar: ");
    scanf("%d", &valor);
    switch ( valor ){
    
    case 1 :
    printf("\n soma de valores: %d + %d = %d ",*p1,*p2,(soma (p1,p2)));
    break;
    
    case 2 :
    printf("\n subtracao de valores: %d - %d = %d ",*p1,*p2,(sub (p1,p2)));
    break;
    
    case 3 :
    printf("\n divisao de valores: %d / %d = %d ",*p1,*p2,(divi (p1,p2)));
    break;
    
    case 4 :
    printf("\n multiplicacao de valores: %d * %d = %d ",*p1,*p2,(multi (p1,p2)));
    break;
}

    return 0;
}

