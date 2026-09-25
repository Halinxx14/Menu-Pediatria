/*
Programa que usa CRUD para una clinica pediatrica
GHMF TDS  2.A.1		
CETI TONALA
*/
#include <stdio.h>
#include <string.h>

struct pediatria 
{
    char nom[50], nomtutor[50];
    int edad;
    float peso, estatura;
};

struct pediatria paciente[5];

main() 
{
    // Variables
    int opc, i=0, consulta, mod, elim;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Dar de alta\n");
        printf("2. Consultar\n");
        printf("3. Modificar\n");
        printf("4. Eliminar\n");
        printf("5. Salir\n");
        printf("Elija una opcion: ");
        scanf("%i", &opc);
        fflush(stdin);

        switch (opc) 
		{
            case 1:
                if (i<5) 
				{
                    printf("\nAlta de paciente #%d\n", i + 1);
                    printf("Nombre del paciente: ");
                    gets(paciente[i].nom);
                    printf("Nombre del tutor: ");
                    gets(paciente[i].nomtutor);
                    printf("Edad: ");
                    scanf("%d", &paciente[i].edad);
                    printf("Peso: ");
                    scanf("%f", &paciente[i].peso);
                    printf("Estatura: ");
                    scanf("%f", &paciente[i].estatura);
                    i++;
                } 
				else 
				{
                    printf("El maximo de registro de pacientes es 5\n");
                }
                break;

            case 2:
                printf("¿Que paciente desea consultar? (1 a 5): ");
                scanf("%i", &consulta);
                consulta--;
                if (consulta>=0 && consulta<i) 
				{
                    printf("\nPaciente #%i\n", consulta + 1);
                    printf("Nombre: %s\n", paciente[consulta].nom);
                    printf("Tutor: %s\n", paciente[consulta].nomtutor);
                    printf("Edad: %d\n", paciente[consulta].edad);
                    printf("Peso: %.2f\n", paciente[consulta].peso);
                    printf("Estatura: %.2f\n", paciente[consulta].estatura);
                } 
				else 
				{
                    printf("Paciente no encontrado.\n");
                }
                break;

            case 3:
                printf("¿Que paciente desea modificar? (1 a 5): ");
                scanf("%i", &mod);
                mod--;
                if (mod>=0 && mod<i) 
				{
                    fflush(stdin);
                    printf("Nuevo nombre del paciente: ");
                    gets(paciente[mod].nom);
                    printf("Nuevo nombre del tutor: ");
                    gets(paciente[mod].nomtutor);
                    printf("Nueva edad: ");
                    scanf("%i", &paciente[mod].edad);
                    printf("Nuevo peso: ");
                    scanf("%f", &paciente[mod].peso);
                    printf("Nueva estatura: ");
                    scanf("%f", &paciente[mod].estatura);
                } 
				else 
				{
                    printf("Paciente no encontrado.\n");
                }
                break;

            case 4:
                printf("¿Que paciente desea eliminar? (1 a 5): ");
                scanf("%d", &elim);
                elim--;
                if (elim>=0 && elim<i) 
				{
                    strcpy(paciente[elim].nom, " ");
                    strcpy(paciente[elim].nomtutor, " ");
                    paciente[elim].edad = 0;
                    paciente[elim].peso = 0.0;
                    paciente[elim].estatura = 0.0;
                    printf("***Paciente eliminado***");
                } 
				else 
				{
                    printf("Paciente no encontrado.\n");
                }
                break;

            case 5:
                printf("\nSaliendo del programa...\n");
                break;

            default:
                printf("Opcion no valida, intente de nuevo.\n");
                break;
        }
    } while (opc!= 5);

    printf("\n*** **** ***\n");
    printf("Realizado por G H M F\n");
    // Fin
    return 0;
}
