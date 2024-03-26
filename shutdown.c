#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char input[20]={0};
  system("shutdown -s -t 60");
  again:
  printf("Your computer is shuting down in 1 minutes , Please enter: Iamapig to cancel the shutdown.\n");
  scanf("%s",input);     

  if(strcmp(input,"Iamapig")==0){
    system("shutdown -a");
    
  }
  else{
    goto again;
  }
  return 0;
}
