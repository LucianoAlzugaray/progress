#include <SWI-Prolog.h>

static foreign_t pl_stablish_connection(term_t connection, term_t options) { 
  PL_action(PL_ACTION_WRITE, "ESTA FUNCIONANDO");
  PL_succeed;
}

install_t install_conn() { 
  PL_register_foreign("stablish_connection", 2, pl_stablish_connection, 0);
}

int main() {
  install_conn();
}