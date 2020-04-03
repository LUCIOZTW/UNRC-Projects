# ACTIVIDAD NR4 TRASLADADA A C.

## ENUNCIADO :

![Unrc Logo](https://raw.githubusercontent.com/LUCIOZTW/UNRC-Projects/master/Imagenes/paragitHUB.png)

## Vamos por partes ⚙️⚙️⚙️
Lo primero que sabemos es que contamos con 5 Datos(Variables).

**XC** = Ubicacion en la variable independiente el punto C

**XY** = Ubicacion en la variable dependiente   el punto C


(Ambas forman el punto C)


**Radio** = Radio del punto C(formando asi la circunferencia)



**XP** = Ubicacion en la variable independiente el punto X


**YP** = Ubicación en la variable dependiente   el punto Y

(Ambas forman el punto P) <--- **Este es el punto en el cual debemos informar si esta dentro o fuera de la circunferencia**.


## OK todo muy lindo pero como lo hacemos?? 😕 😕

Bien. Teniendo esos datos nosotros precisamos saber la **Distancia**  que hay entre el punto C(centro de la circunferencia) y el punto P.


Para ello recurrimos a esta formula -> √((xp-xc)(xp-xc) + (yp-yc)(yp-yc)) 

Esta formulita, nos dara la distancia, simplemente remplazamos con los datos que tenemos

Esa Distancia la compararemos con el radio de C (que es un dato que tenemos) y con una simple lógica booleana decimos:

## MOMENTO, ME OLVIDABA.. Distancia = radio de P. resumamoslo en radioP

Prosigo, para comparar radioP con radioC simplemente decimos.

SI (radioP < radioC): 

print : El punto esta dentro.


sino pero si(radioP = radioC):

print : El punto esta sobre la circunferencia.

sino:

print : El punto esta fuera
 
##  EN C 💻  seria : 

IF (radioP < radioC){                 **//Dentro del corchete colocamos lo que va a devolver el if**

  printf("El punto esta dentro");
  
 }else if (radioP = radioC) {
 
 
 
 printf("El punto esta sobre");
 
 }else{
 
 
 
 printf("El punto esta fuera");
 
 
 }
 
 ## LISTO ES HORA DE PASARLO 🚀🚀 💻💻
 
 Arriba esta el archivo .c, descarguen y veanlo, esta todo documentado. cualquier duda me tiran un comentario..
