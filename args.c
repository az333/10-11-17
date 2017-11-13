#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char ** parse_args (char * line){
  char ** args = (char **)calloc(6, sizeof(char *));
  int i = 0;
  while(i < sizeof(args)){
    args[i] = strsep(&line," ");
    i++;
  }
  args[i] = NULL;
  return args;
}

int main(){
    char s[100] = "ls -a -l";
    char ** args = parse_args(s);
    execvp(args[0],args);

    return 0;
}
