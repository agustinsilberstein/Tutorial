#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define VACIO '0'
#define CARGADO '1'


    struct pelicula
    {
        int idPelicula;
        char titulo[255];
        int idDirector;
        int idNacionalidad;
        char idEstado;
    };

    struct director
    {
        int idDirector;
        char nombre[50];
        int idNacionalidad;
        char idEstado;
    };

    struct nacionalidad
    {
        int idNacionalidad;
        char descripcion[50];
        char idEstado;
    };

    struct estado
    {
        char idEstado;
        char descripcion[50];
    };





void main()
{
    int i=0;

    struct estado valor_estado[2];
    valor_estado[0].idEstado=CARGADO;
    strcpy(valor_estado[0].descripcion, "Datos ingresados");

    struct nacionalidad nacion[4];
    nacion[0].idNacionalidad=1;
    strcpy(nacion[0].descripcion, "Estados Unidos");
    nacion[0].idEstado=valor_estado[0].idEstado;

    struct director director[10];
    director[0].idDirector=1;
    director[0].idNacionalidad=nacion[0].idNacionalidad;
    strcpy(director[0].nombre, "Martin Scorcesse");
    director[0].idEstado=valor_estado[0].idEstado;



    struct pelicula peli[10];
    peli[0].idPelicula=037;
    strcpy(peli[0].titulo, "Buenos muchachos");
    peli[0].idDirector=director[0].idDirector;
    peli[0].idNacionalidad=nacion[0].idNacionalidad;
    peli[0].idEstado=valor_estado[0].idEstado;

   // printf("%d %s %d %d %c", peli[0].idPelicula, peli[0].titulo, peli[0].idDirector, peli[0].idNacionalidad, peli[0].idEstado);





}




