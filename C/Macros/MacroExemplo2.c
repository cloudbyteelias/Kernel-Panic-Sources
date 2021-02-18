#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define VERSION     "0.1"
#define NET_ERROR   "Sem internet"
#define AUTH_ERROR  "Erro de autenticação"


#define LOG_ERROR(log, ...) \
 fprintf(stderr, log, __VA_ARGS__)


int main(int argc, char const *argv[]){

    int x = 10;

    if(x <= 10){
        LOG_ERROR("NÂO SUPORTADO [%s]\n", NET_ERROR);
    }



    return EXIT_SUCCESS;
}
