// BIBLIOTECA UTILIZADA
#include <stdio.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>

int main (){
   //administrador
   int autenticacao_adm;
   int codigo_admin=0000;//codigo do administrador



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

   system("cls");
   int opcao,opcao_adm,sair,sair_menu_admin;
   while (sair!=2){
      
   do{
      printf("--------------");
      printf("\nMENU PRINCIPAL\n");
      printf("--------------\n\n");
      printf("1 - Professor\n");
      printf("2 - Aluno\n");
      printf("3 - Administrador\n");
      printf("4 - Sair\n\n");
      printf("Escolha sua opcao: ");
      scanf("%d",& opcao );
      system("cls");
   }while(opcao<1 || opcao>4);

  switch (opcao){
  case 1: 
   // professor
     printf("----------------------"); 
     printf("\nPAINEL DE AUTENTICACAO PROFESSOR\n");
     printf("-----------------------\n\n");
     break;
    //aluno  
  case 2:
      printf("---------------------");
      printf("\nPAINEL DE AUTENTICACAO ALUNO\n");
      printf("----------------------\n\n");
      break;
    //administrador   
   case 3:
      printf("---------------------");
      printf("\nPAINEL DE AUTENTICACAO ADMINISTRADOR\n");
      printf("----------------------\n\n");
      
     break;
    //sair 
   case 4:
      do{
      printf("VOCE REALMENTE  DESEJA\n\n");
      printf("1 - NAO");  
      printf("\n2 - SIM");
      printf("\nescolha uma opcao:");
      scanf("%d",& sair);
      }while (sair<1 ||  sair>2);
      
  } 
   }


   //fim do sistema
   system("cls");
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
   printf("\n\n\n        ..::  Obrigado Por Utiliza SUAP-Sistena Academico! ::.. \n\n\n\n");
 system("pause");
 return 0;
}  