#include "inout.h"

   int
main (void)
{
   int i = 0;
   int error = 0;

   error = inout();

   if ( error )  goto TERMINATE;

TERMINATE:

   PCMcheckerror (error);
   return 0;
}

