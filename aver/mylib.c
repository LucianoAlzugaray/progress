#include <SWI-Prolog.h>

static foreign_t
pl_say_hello(term_t to)
{
    PL_succeed;
}

install_t
install_mylib()
{ PL_register_foreign("say_hello", 1, pl_say_hello, 0);
}

int main(){
    
}