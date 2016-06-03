#include<stdio.h>
#include <math.h>
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
    printf("Elige que quieres hacer\n, si pulsas 1 es suma\n, 2 resta\n, 3 multiplicar\n, 4 dividir\n, 5 para potencias\n, 6 para raices\n, 7 para salir\n");
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
            float x=0;
            float y=0;
            printf("has elegido pontencias \n");
            printf("introduce un numero:");
            scanf("%f", &x);
            printf("intrduce el numero al que quieres elevarlo:");
            scanf("%f", &y);
            printf("el resultado es %lf\n",pow(x, y));
        }

    if  (e==6)
        {
            float x=0;
            float y=0;
            printf("has elegido raices \n");
            printf("introduce un numero:");
            scanf("%f", &x);
            printf("introduce el indice de la raiz:");
            scanf("%f", &y);
            printf("el resultado es %lf\n",pow(x, 1/y));

        }

    if  (e==7)
        {
            printf("adios");
        }

    if  (e>=8)
        {
            repetir();
        }

    return 0;
}
int repetir(){
printf("ese numero no vale\n");
main();
}
