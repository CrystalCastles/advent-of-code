#include <stdio.h>

main ()
{
  FILE *fp;
  fp = fopen("input.txt", "r");
  int instruction;
  int floor = 0;
  
  while((instruction = fgetc(fp)) != EOF) {
    if (instruction == '(')
    { 
      floor++;
    } 
    else 
    {
      floor--;
    }
  }
  printf("%i\n", floor);
  fclose(fp);
}
