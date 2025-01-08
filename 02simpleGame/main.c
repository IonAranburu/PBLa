/*#include "orokorrak.h"
#include "bukaera.h"
#include "errealitateFisikoa.h"
#include "jokoa.h"
#include "sarrera.h"*/

//---------------------------------------------------------------------------------
#include "ebentoak.h"
#include "graphics.h"
#include "imagen.h"
#include "soinua.h"
#include "text.h"
//---------------------------------------------------------------------------------

#include <stdio.h>

#include "lib/game02.h"
#include "ourTypes.h"

int main(int argc, char *str[])
{

    if (sgHasieratu() == -1)
    {
        fprintf(stderr, "Unable to set video: %s\n", SDL_GetError());
        return 1;
    }
    textuaGaitu();
    audioInit();

    while (1)
    {

        doInput();
        SDL_Delay(16);
        jokoaAurkeztu();
    }
    audioTerminate();
    sgItxi();
    return 0;
}