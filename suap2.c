#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "suap.h"
#include "menu_principal.c"


int main(){
    
   printf("  SSSSSSSSSSSSSSS    UUUUUUU     UUUUUUU               AAA                 PPPPPPPPPPPPPPPPP\n");
   printf(" SS:::::::::::::::S  U:::::U     U:::::U             A:::::A               P::::::::::::::::PP\n");
   printf("S:::::SSSSSS::::::S  U:::::U     U:::::U            A::AAA::A              P::::PPPPPPPPP::::PP\n");
   printf("S:::::S     SSSSSSS  U:::::U     U:::::U           A::A   A::A             P::::P        P::::PP\n");
   printf("S:::::S              U:::::U     U:::::U          A::A     A::A            P::::P        P::::PP\n");
   printf("S:::::S              U:::::D     D:::::U         A::A       A::A           P::::P        P::::PP\n");
   printf(" S::::SSSS           U:::::D     D:::::U        A::A         A::A          P::::PPPPPPPPP::::PP\n");
   printf("  SS::::::SSSSS      U:::::D     D:::::U       A::A           A::A         P:::::::::::::::PP\n");
   printf("    SSS::::::::SS    U:::::D     D:::::U      A::::AAAAAAAAAA:::::A        P:::PPPPPPPPPPPP\n");
   printf("       SSSSSS::::S   U:::::D     D:::::U     A:::::::::::::::::::::A       P:::P\n");
   printf("            S:::::S  U:::::D     D:::::U    A:::::::::::::::::::::::A      P:::P\n");
   printf("            S:::::S  U::::::U   U::::::U   A::::: AAAAAAAAAAAA:::::::A     P:::P\n");
   printf("SSSSSSS     S:::::S  U:::::::UUU:::::::U  A:::::A              A::::::A    P:::P\n");
   printf("S::::::SSSSSS:::::S   UU:::::::::::::UU  A:::::A                A::::::A   P:::P\n");
   printf("S:::::::::::::::SS     UU:::::::::UU    A:::::A                  A::::::A  P:::P\n");
   printf(" SSSSSSSSSSSSSSS         UUUUUUUUU      AAAAAA                     AAAAA   PPPP\n");

   
    printf("\n\n\n             ..:: Sejam bem-vindos ao SUAP-SISTEMA ACADEMICO! ::.. \n");

   printf ("\n\nCarregando o sistema: \n\n");

    for (i = 1; i <= 50; i++){
      printf ("  %d%%\r", i*2);
      fflush (stdout);

      for (j = 0; j < i; j++){
         if (!j)
           printf("  ");

         printf ("%c", 2);
         Sleep(3);
      }
   }
      
    system("cls");
    menu_principal();

    return 0;
}
