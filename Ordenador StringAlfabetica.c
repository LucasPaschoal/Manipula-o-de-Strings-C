#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char palavra[50],aux;
    int x,y;
    
    printf("digite uma palavra: \n");
    scanf("%s",palavra);
    
    for(x=0;x<50;x++){
        for(y=x+1;y<50;y++){
            if(palavra[x]>palavra[y] && palavra[y]!='\0'){
                aux=palavra[x];
                palavra[x]=palavra[y];
                palavra[y]=aux;
            }
        }
    }
    printf("%s",palavra);

    return 0;
}

