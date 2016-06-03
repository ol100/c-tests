#include<stdio.h>
int main(){
    long a;
    long prueba;
    long resultado;
    long x;
    long y;
    long f;
    long e;
    prueba= 2;
    //printf("Por favor, inserta una numero: ");
    //scanf("%d", &a);
    //printf("Has introducido: %d\n", a);
    //printf("Ahora lo sumare 2\n");
    //resultado=a+prueba;
    //printf("el resultado es %d\n",resultado);
    //printf("tras esa suma vamos a por una suma que tu elijas\n");
    //printf("Introduce otro número:");
    //scanf("%d", &x);
    //printf("Introduce otro número:");
    //scanf("%d", &y);
    //f=x+y;
    //printf("el resultado es:%d\n",f);
    printf("vamos a probar elegir que quieres hacer, si pulsas 1 es suma, 2 resta, 3 multiplicar, 4 dividir y 5 para salir:");
    scanf("%d", &e);
    if (e==1)
        {
            printf("has elegido suma \n");
            printf("Introduce un número:");
            scanf("%d", &x);
            printf("Introduce otro número:");
            scanf("%d", &y);
            f=x+y;
            printf("el resultado es:%d\n",f);
        }

    if  (e==2)
        {
            printf("has elegido resta \n");
            printf("Introduce un número:");
            scanf("%d", &x);
            printf("Introduce otro número:");
            scanf("%d", &y);
            f=x-y;
            printf("el resultado es:%d\n",f);
        }
    if  (e==3)
        {
            printf("has elegido multiplicacion \n");
            printf("Introduce un número:");
            scanf("%d", &x);
            printf("Introduce otro número:");
            scanf("%d", &y);
            f=x*y;
            printf("el resultado es:%d\n",f);
        }
    if  (e==4)
        {
            printf("has elegido division \n");
            printf("Introduce un número:");
            scanf("%d", &x);
            printf("Introduce otro número:");
            scanf("%d", &y);
            f=x/y;
            printf("el resultado es:%d\n",f);
        }
    if  (e==5)
    {
        printf("adios");
    }

    if  (e>5)
    {
        repetir();
    }

    return 0;
}
int repetir(){
printf("ese numero no vale\n");
main();
}
