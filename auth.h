#ifndef AUTH_H
#define AUTH_H

int autenticarUsuario(const char *archivoUsuarios, const char *usuario, const char *clave);
void registrarAccion(const char *archivoBitacora, const char *usuario, const char *accion);

#endif
