#include <SWI-Prolog.h>
#include <libpq-fe.h>

char *host = "localhost";
char *port = "5432";
char *dbName = "prueba";
char *login = "postgres";
char *pwd = "postgres";

static foreign_t pl_stablish_connection(term_t connection, term_t options) { 
  PGconn *conn;
  PL_action(PL_ACTION_WRITE, "ESTA FUNCIONANDO");
  conn =  PQsetdbLogin(host, port, NULL, NULL, dbName, login, pwd);

  if (PQstatus(conn) != CONNECTION_OK){
    PL_action(PL_ACTION_WRITE, "Error al conectar la base de datos");
    PL_fail;
  }

  PL_succeed;
}

install_t install_conn() { 
  PL_register_foreign("stablish_connection", 2, pl_stablish_connection, 0);
}

int main() {
  install_conn();
}