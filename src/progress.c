#include <SWI-Prolog.h>

static foreign_t pl_stablish_connection(term_t connection, term_t options) { 
  
}

install_t install_progress() { 
  PL_register_foreign("stablish_connection", 2, pl_stablish_connection, 0);
}

int main() {

}