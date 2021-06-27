// BIBLIOTECA UTILIZADA
#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <windows.h>

int main (){

    setlocale(LC_ALL,"portuguese");

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

    printf("\n\n\n         ..:: Sejam bem-vindos ao SUAP-Sistena Academico! ::.. ");


 printf ("\n\nCarregando o sistema: \n\n");

   for (int i = 1; i <= 50; i++){
      printf ("  %d%%\r", i*2);

      for (char j = 0; j < i; j++){
         if (!j)
           printf("  ");

         printf ("%c", 2);
         Sleep(3);
      }
   }
    printf ("\n\nInicializando sistema...");
    sleep(2);
    menu_principal();


system("pause");
return 0;
}