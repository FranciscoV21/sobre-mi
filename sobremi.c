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
        if(respuesta_a_menu==4)
        {
            ciclo=-1;
        }
    }
}