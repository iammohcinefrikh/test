#include <stdio.h>
#include <stdlib.h>

int main(){

  char *student[4] = {"ahmed","ali", "mohammed" , "marwan" };
  int seats[4] = {1,2,3,4};



  for (int i = 0; i < 4 ; i++){

    printf("<%s>, you will take seat %d\n",student[i], seats[i]);

  }  

}