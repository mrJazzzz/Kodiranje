//DEKODER
#include <stdio.h>
#include <stdlib.h>
#define CONST 1
int main()
{
    char c[900];
    gets(c);
    //printf("\n%s", c);

    int n = strlen(c);
   // printf("\n%d\n", n);

    char s[n/3];

    for(int i=0; i<n; i+=3)
    {
        if (c[i+1]==(char) 110)
        {
            s[i/3] = c[i];
        }
        else
        {
            int x = ((int) c[i] - CONST);
            if (x<0) x += 256;
            x %= 256;
            int a = x/16; //printf("    %d    ", a);
            int b = x%16;// printf("_____%d______", b);//x = 8*a +b
            int y = (16*b + a)%256;
            s[i/3] = (char) y;
        }

        printf("%c", s[i/3]);
    }

    //printf("\n%d", strlen(s));
   // printf("%s", s);
   // printf("%c", s[1]);
    return 0;
}

