#include <stdio.h>
#include <ctype.h>

main()
{
  int c;
  int up, down;

  c = getchar();
  while(c != EOF){
    /*    if (islower(c))
      {
	up++;
	printf("++");
      }
    else if (isupper(c))
      {
	down++;
	printf("--");
      }
    */
  //  up = 1;
  //  down = 2;
  //printf("Up %d; down %d\n", up, down);
    printf("%c : %s\n", c, isalnum(c) ? "Yes" : "No");
    c = getchar();
  }
}
