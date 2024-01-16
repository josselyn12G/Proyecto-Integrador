#include <stdio.h>

int main(){
    // Definición e inicialización de variables
    char Sensor;
    int Numero_Segundos = 0, Contador_Peces = 0, Peces_Consecutivos = 0, Maximos_Peces_Consecutivos = 0, Orden = 1;
    // Utilizar un bucle do-while para ingresar los datos del sensor hasta que se ingrese la letra 'F' para finalizar.
    do {
        // Entrada de datos por cada segundo
        printf("Ingrese el flujo del sensor en el segundo #%d: ", Orden);
        scanf(" %c", &Sensor);
        // Controlar con una sentencia condicional que solo se contabilicen los caracteres establecidos (P, F, T).
        if (Sensor == 'P' || Sensor == 'F' || Sensor == 'T') {
            Numero_Segundos++;
            Orden++;
            // Utilizar una estructura de selección switch para clasificar y contar los datos ingresados.
            switch (Sensor) {
                case 'T':
                    Peces_Consecutivos = 0;  // Reiniciar el contador de peces consecutivos
                    break;
                case 'P':
                    Contador_Peces++;
                    Peces_Consecutivos++;
                    break;
                default:
                    break;
            }
            // Guardar en una variable el mayor número de peces consecutivos a través de una comparación.
            if (Peces_Consecutivos > Maximos_Peces_Consecutivos) {
                Maximos_Peces_Consecutivos = Peces_Consecutivos;
            }
        } else {
            printf("Letra Incorrecta! Recuerde utilizar mayúsculas.\n");
        }
    } while (Sensor != 'F');
    // Mostrar los resultados obtenidos
    printf("\nNúmero de segundos que el sondeo estuvo funcionando: %d segundos", Numero_Segundos);
    printf("\nTotal de peces que pasaron bajo el sensor: %d peces", Contador_Peces);
    printf("\nMayor número de peces en segundos consecutivos que pasaron por el sensor: %d", Maximos_Peces_Consecutivos);
}