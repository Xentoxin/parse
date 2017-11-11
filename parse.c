#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
char ** parse_args( char * line ){
  char ** argss = malloc(6*sizeof(char*));
  char * temp = NULL;
  int i = 0;
  while((temp  =strsep(&line, " "))){
    argss[i] = temp;
    i++;
  }
  argss[i] = NULL;
  return argss;
}
int main(){
char line[] = "ls -a -l";
char ** args = parse_args(line);
execvp(args[0] ,args);
return 0;
}
