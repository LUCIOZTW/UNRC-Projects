// Plano cartesiano en C 
#include <stdio.h> //Libreria standar
#include <math.h> //Incluimos la libreria math para poder usar raices y potencias.
#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_YELLOW  "\x1b[33m" 
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_MAGENTA "\x1b[35m"
#define ANSI_COLOR_CYAN    "\x1b[36m"
#define ANSI_COLOR_RESET   "\x1b[0m"
int main()
{
    int xc,yc,valorX,valorY;  //Declaramos variables Enteras
    float radio; //Declaramos una variable tipo float
    printf(ANSI_COLOR_CYAN"Ingrese el valor X del circulo   : "ANSI_COLOR_RESET);
    scanf("%d",&xc);
    printf(ANSI_COLOR_CYAN"Ingrese el valor Y del circulo   : "ANSI_COLOR_RESET);
    while(getchar()!='\n'); //Comando que impide la bajada de linea
    scanf("%d",&yc);
    printf("El punto de la circunferencia es :(%d,%d)\n",xc,yc);
    
    printf(ANSI_COLOR_YELLOW"Ingrese el radio de la misma     : "ANSI_COLOR_RESET);
    scanf("%f",&radio);
    printf("2.%f",radio);
    
    printf(ANSI_COLOR_CYAN"Ingrese el valor de X del punto  : "ANSI_COLOR_RESET);
    scanf("%d",&valorX);
   
    printf(ANSI_COLOR_CYAN"Ingrese el valor de Y del punto  : "ANSI_COLOR_RESET);
    scanf("%d",&valorY);
    
    printf("El punto estara ubicado en       :(%d,%d)\n",valorX,valorY);
    
    float resultado = sqrt(pow((valorX - xc),2) + pow(( valorY - yc),2)); //Formula que obtiene la distancia entre C & P
     if (resultado < radio){ //Usamos condicionales para mostrar un mensaje.
         printf("\n");
         printf(ANSI_COLOR_RED "              El punto esta dentro del circulo"ANSI_COLOR_RED);
     }else if(resultado == radio){
         printf("\n");
         printf(ANSI_COLOR_RED"               El punto esta sobre la circunferencia"ANSI_COLOR_RESET);
     }else{
         printf("\n");
         printf(ANSI_COLOR_RED"               El punto esta afuera del circulo"ANSI_COLOR_RESET);
     }
    return 0;
}
