
#include <stdio.h>
#include <string.h>
int main()
{   
    char metin;
    int bosluksayisi=0;
    int i=0;
    printf("metin giriniz..: ");
    scanf("%c",&metin);
    
    while(metin!='\n'){          
    	if(metin==' ')
            bosluksayisi++;
        i++;
        scanf("%c",&metin);
    }

    printf("bosluk sayisi: %d dolayisiyla kelime sayisi %d\n",bosluksayisi,bosluksayisi+1); 
    return 0;
}

