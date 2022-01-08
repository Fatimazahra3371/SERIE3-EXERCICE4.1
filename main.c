#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,W,i,sumW;
 sumW=0;
 printf("donner la valeur de n \n");
 scanf("%d" ,&n);
 for(i=1;i<=n;i++)
 switch(i)
 {
     case 1:
     W=2;
     break;
     case 2:
     W=1;
     break;
     case 3:
     W=6;
     break;
     case 4:
     W=7;
     break;
     default:
     W=i*i-3*i+3;
     }
     sumW=sumW+W;
     printf("la somme de  W est %d",sumW);

    return 0;
}
