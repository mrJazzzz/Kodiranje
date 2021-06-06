//KODER
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CONST 1
int main()
{
    char s[300];
    gets(s);
   // printf("\n%s", s);

    int n = strlen(s);
  //  printf("%d", n);
    char c[3*(n-1)];
    srand(time(0));
    for(int i=0; i<3*n; i+=3)
    {
       // if ((int)s[i/3]==32) printf("BIIIIIIP");
        int x = (int) s[i/3];
        int a = x/16;
        int b = x%16; //x = 8*a +b
        int y = (16*b +a + CONST);
        if (y<0) y += 256;
        y %= 256;
        c[i] = (char) y;
      //  printf(" \n  %c   ", c[i]);

        c[i+1] = (char) (rand()%8+65);
        c[i+2] = (char) (rand()%8+45);

        if (0<=y && y<=31)
        {
            c[i] = (char) x;
            c[i+1] = (char) 110;
           // c[i+2] = (char) 76;  ne treba mi i bolje je bez toga
        }
    }
    printf("\n");
    for(int i=0; i<3*n; i++)
        printf("%c",c[i] );
    //printf("\n%s", c);

   // for(int i=0; i<5; i++)
    //    printf("\n%c", (char) 97+256*i);
    return 0;
}
