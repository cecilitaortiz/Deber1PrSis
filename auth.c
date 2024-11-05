#include <stdio.h>
#include <string.h>
#include <time.h>
#include "auth.h"

int autenticarUsuario(const char *archivoUsuarios, const char *usuario, const char *clave) {
    FILE *archivo = fopen(archivoUsuarios, "r");
    if (!archivo) {
        perror("No se puede abrir el archivo de usuarios");
        return 0;
    }

    char linea[100];
    int autenticado = 0;

    while (fgets(linea, sizeof(linea), archivo)) {
        char usuarioArchivo[50], claveArchivo[50];
        sscanf(linea, "%[^:]:%s", usuarioArchivo, claveArchivo);
        if (strcmp(usuario, usuarioArchivo) == 0 && strcmp(clave, claveArchivo) == 0) {
            autenticado = 1;
            break;
        }
    }

    fclose(archivo);
    return autenticado;
}

void registrarAccion(const char *archivoBitacora, const char *usuario, const char *accion) {
    FILE *archivo = fopen(archivoBitacora, "a");
    if (!archivo) {
        perror("No se puede abrir el archivo de bitácora");
        return;
    }

    time_t tiempo = time(NULL);
    struct tm *tm_info = localtime(&tiempo);
    char fecha[20];
    strftime(fecha, sizeof(fecha), "%Y/%m/%d", tm_info);

    fprintf(archivo, "%s: %s – %s\n", fecha, usuario, accion);
    fclose(archivo);
}