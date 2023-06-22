//Programa para organizar tareas//
//Librerias
#include <stdio.h>
#include <stdlib.h>

//Estructuras
typedef struct
{
    int numero_de_tarea;
    char nota[200];
}Organizador;
//Prototipos
void menu();
void submenu();

int main()
{
    menu();
}

void menu()
{
    int respuesta_a_menu;
    int ciclo=1;
    while(ciclo!=-1)
    {
        ciclo=1;
        printf("Bienvenido a tu organizador de tareas\n");
        printf("Selecciona una opcion de las siguientes\n");
        printf("[1-Escribir una nueva nota][2-Borrar una nota][3-Imprimir todas mis notas][4-Salir]: ");
        scanf("%d",&respuesta_a_menu);
        printf("La respuesta al menu es: %d\n",respuesta_a_menu);
        switch(respuesta_a_menu)
        {
            case 1:
                printf("Creando nueva nota...\n");
                break;

            case 2:
                printf("Borrando nota...\n");
                break;

            case 3:
                printf("Imprimiendo notas...\n");
                break;

            case 4:
                printf("Saliendo...\n");
                ciclo=-1;
                break;
        }
    }
}