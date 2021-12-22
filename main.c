#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
    int n,x=0,y=0;
    char a[100];
    gets(a);
    n = strlen(a);
    for(int i = 0;i<n;i++){
        if(a[i] == 'N'){
            x++;
        }if(a[i] == 'S'){
            x--;
        }if(a[i] == 'E'){
            y++;
        }if(a[i] == 'W'){
            y--;
        }if(a[i] == 'Z'){
            x = 0;
            y = 0;
        }
    }
    printf("%d %d",y,x);
}
