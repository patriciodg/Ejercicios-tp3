#include <stdio.h>
#include <string.h>
#include <conio.h>

void concatenar(char *cadena1, char *cadena2, char *concat);

int main() {
    char cadena1[50], cadena2[50], concat[100];
    printf("Ingrese el primer arreglo de caracteres: ");
    fgets(cadena1, 50, stdin);
    system("cls");
    printf("Ingrese el segundo arreglo de caracteres: ");
    fgets(cadena2, 50, stdin);
	system("cls");
    concatenar(cadena1, cadena2, concat);
	printf("La primer cadena es: %s\n", cadena1);
	printf("La segunda cadena es: %s\n", cadena2);
    printf("La cadena concatenada es: %s\n", concat);
    
    
}

void concatenar(char *cadena1, char *cadena2, char *concat) {
    int longitud1 = strlen(cadena1);
    int longitud2 = strlen(cadena2);
    
    
    if(cadena1[longitud1 - 1] == '\n')cadena1[longitud1 - 1] = '\0';
    if(cadena2[longitud2 - 1] == '\n')cadena2[longitud2 - 1] = '\0';//tuve que buscar porque en el printf me quedaba una parte arriba y despues hacia salto de linea
    
    strcpy(concat, cadena1); 
    strcat(concat, cadena2); 
}

