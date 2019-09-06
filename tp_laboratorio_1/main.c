#include <stdio.h>
#include <stdlib.h>

int main()
{
    char opcion;
    char salir = 'n';
    char option;
    char opcionResultado;
    int a;
    int b;
    int suma;
    int resta;
    int division;
    int multiplicacion;
    int factorialA;
    int factorialB;

    do
    {
        system("cls");
        printf("------Menu de opciones------\n\n");
        printf("1- Ingresar el primer operando\n");
        printf("2- Ingresar el segundo operando\n");
        printf("3- Calcular todas las operaciones\n");
        printf("4- Informar el resultado\n");
        printf("5- Salir\n");
        printf("Indique opcion: \n");
        fflush(stdin);
        opcion = getchar();

        switch(opcion)
        {
        case '1' :

            printf("Ingrese un valor para A:\n");
            scanf("%d", &a);
            break;

        case '2' :
            printf("Ingrese un valor para B:\n");
            scanf("%d", &b);
            break;

        case '3' :
            system("cls");
            printf("------Calculo de operaciones------\n");
            printf("a- Calcular suma (A+B)\n");
            printf("b- Calcular resta (A-B)\n");
            printf("c- Calcular la division (A/B)\n");
            printf("d- Calcular la multiplicacion (A*B)\n");
            printf("e- Calcular el factorial (A!)\n");
            printf("Indique opcion: \n");
            fflush(stdin);
            option = getchar();

            switch(option)
            {
            case 'a' :

                suma = a + b;
                break;

            case 'b' :

                resta = a - b;
                break;

            case 'c' :

                division = a / b;
                break;

            case 'd' :

                multiplicacion = a * b;
                break;

            case 'e' :
                factorialA = a * (a-1);
                factorialB = b * (b-1);
                break;

            default:
                printf("Opcion invalidad \n\n");
                system("pause");

                return option;
            }

        case '4' :

            system("cls");
            printf("------Informar resultados------\n");
            printf("a- El resultado de A+B es: \n");
            printf("b- El resultado de A-B es: \n");
            printf("c- El resultado de A/B es: \n");
            printf("d- El resultado de A*B es: \n");
            printf("e- El resultado de A! es: y el de B! es: \n");
            printf("Indique opcion: \n");
            fflush(stdin);
            opcionResultado = getchar();

            switch(opcionResultado)
            {
            case 'a' :

                printf("El resultado de A+B es: %d\n", suma);
                break;

            case 'b' :
                printf("El resultado de A-B es: %d\n", resta);
                break;

            case 'c' :
                printf("El resultado de A/B es: %d\n", division);
                break;

            case 'd' :
                printf("EL resultado de A*B es: %d\n", multiplicacion);
                break;

            case 'e' :
                printf("El resultado de A! es: %d y el resultado de B! es: %d\n", factorialA, factorialB);
                break;

            default :
                printf("Opcion invalida \n\n");
                system("pause");

                return opcionResultado;
            }

        case '5' :
            printf("Desea salir?: \n\n");
            fflush(stdin);
            salir = getchar();
            break;
        }
    }
    while(salir == 'n');

    return opcion;
}


