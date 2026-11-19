#include "idgen.h"

static int s_lastID{ 0 };

int getNextID()
{
   
    ++s_lastID;
    return s_lastID;
}

void resetIDs()
{
   s_lastID = 0;
}