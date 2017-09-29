#ifndef __PROBAR__
#define __PROBAR__

void probar(unsigned int rate)
{    
    static char bar[102]={0};
    
    const static char *sta="-\\|/";    
    {   
        printf("[%-100s]%d%%,[%c]\r",bar,rate,sta[rate%4]);        
        fflush(stdout);
        bar[rate]= '*';
        rate++;
        bar[rate]='\0';
    }
    return ;
}

#endif
