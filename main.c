#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char ** parse_args(char * line) {
    printf("HERE");
    char ** parsed_args = malloc(sizeof(char *) * 5);
    char * args = line;
    printf("LINE: %s", line);
    args = strsep(&args," ");
    
    //while(line++) {
    //}
    printf("[%s]\n", args);
    return parsed_args;


}

int main() {
    printf("HEREEE\n");
    char ** p = parse_args("ls -l --all --color");
    execvp(p[0], p);
    return 0;
}
