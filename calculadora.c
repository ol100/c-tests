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
            printf("Has elegido suma \n");
            printf("Introduce un n%cmero:",163);
            scanf("%d", &x);
            printf("Introduce otro n%cmero:",163);
            scanf("%d", &y);
            f=x+y;
            printf("El resultado es:%d\n",f);
            printf("¿Quieres continuar? \n");
            printf("1=si, 2=no \n");
            scanf("%d", &a);
            if(a==1)
                {
                    repetir();
                }
            if (a>=2)
                {
                    printf("Adi%cs",162);
                }
        }

    if  (e==2)
        {
            printf("Has elegido resta \n");
            printf("Introduce un n%cmero:",163);
            scanf("%d", &x);
            printf("Introduce otro n%cmero:",163);
            scanf("%d", &y);
            f=x-y;
            printf("El resultado es:%d\n",f);
            printf("¿Quieres continuar? \n");
            printf("1=si, 2=no \n");
            scanf("%d", &a);
            if(a==1)
                {
                    repetir();
                }
            if (a>=2)
                {
                    printf("Adi%cs",162);
                }
        }
    if  (e==3)
        {
            printf("Has elegido multiplicaci%cn \n",162);
            printf("Introduce un n%cmero:",163);
            scanf("%d", &x);
            printf("Introduce otro n%cmero:",163);
            scanf("%d", &y);
            f=x*y;
            printf("El resultado es:%d\n",f);
            printf("¿Quieres continuar? \n");
            printf("1=si, 2=no \n");
            scanf("%d", &a);
            if(a==1)
                {
                    repetir();
                }
            if (a>=2)
                {
                    printf("Adi%cs",162);
                }
        }
    if  (e==4)
        {
            printf("Has elegido divisi%cn \n",162);
            printf("Introduce un n%cmero:",163);
            scanf("%d", &x);
            printf("Introduce otro n%cmero:",163);
            scanf("%d", &y);
            f=x/y;
            printf("El resultado es:%d\n",f);
            printf("¿Quieres continuar? \n");
            printf("1=si, 2=no \n");
            scanf("%d", &a);
            if(a==1)
                {
                    repetir();
                }
            if (a>=2)
                {
                    printf("Adi%cs",162);
                }
        }

    if  (e==5)
        {
            float x=0;
            float y=0;
            printf("Has elegido pontencias \n");
            printf("introduce un n%cmero:",163);
            scanf("%f", &x);
            printf("intrduce el n%cmero al que quieres elevarlo:",163);
            scanf("%f", &y);
            printf("El resultado es %lf\n",pow(x, y));
            printf("¿Quieres continuar? \n");
            printf("1=si, 2=no \n");
            scanf("%d", &a);
            if(a==1)
                {
                    repetir();
                }
            if (a>=2)
                {
                    printf("Adi%cs",162);
                }
        }

    if  (e==6)
        {
            float x=0;
            float y=0;
            printf("Has elegido raices \n");
            printf("Introduce un n%cmero:",163);
            scanf("%f", &x);
            printf("Introduce el %cndice de la raiz:",161);
            scanf("%f", &y);
            printf("El resultado es %lf\n",pow(x, 1/y));
            printf("¿Quieres continuar? \n");
            printf("1=si, 2=no \n");
            scanf("%d", &a);
            if(a==1)
                {
                    repetir();
                }
            if (a>=2)
                {
                    printf("Adi%cs",162);
                }

        }

    if  (e==7)
        {
            printf("adi%cs",162);
        }

    if  (e>=8)
        {
            repetir();
        }

    return 0;
}
int repetir(){
printf("Ese n%cmero no vale\n",163);
main();
}
