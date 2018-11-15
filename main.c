#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

char ** parse_args(char * line) {
    char ** parsed_args = calloc(5, sizeof(char **));
    char * p = line;
    int index = 0;
    while(p != NULL) {
        parsed_args[index] = strsep(&p, " ");
        index++; 
    }
        
    return parsed_args;
}

int main() {
    char line[100] = "ls -l --all --color"; 
    char ** p = parse_args(line);
    execvp(p[0], p);
    return 0;
}
