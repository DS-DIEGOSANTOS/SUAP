// BIBLIOTECA UTILIZADA
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <windows.h>
#define Aluno_max 3 // define a quantidade de aluno
#define professore_max 2// define a quantidade de professor
int main (){
   //administrador
   int volta_admin;

   int codigo_admin=0000;//codigo do administrador

   //arquivo
   FILE *cadastro_aluno;//cadastro aluno3
   FILE *usuario_aluno;//usuario aluno
   FILE *professor;//professores
   FILE *notas_alunos;//nota de aluno

   //nota
   int notas[professore_max][Aluno_max];
   int recebe_notas[professore_max][Aluno_max];
   char notas_materias[professore_max][100];

   //alunos cadastro intro
   int alunos=0;
   char nome_aluno[Aluno_max][100],sobrenome_aluno[Aluno_max][100];
   int idade_aluno[Aluno_max];

   //aluno cadastro recebe
   int alunos_recebe=0,alunos_recebe1=0;
   char nome_recebe_aluno[Aluno_max][100],sobrenome_recebe_aluno[Aluno_max][100];
   int idade_recebe_aluno[Aluno_max];


   //usuario aluno
   int matricula_aluno[Aluno_max], senha_aluno[Aluno_max];
   int recebe_matricula_aluno[Aluno_max], recebe_senha_aluno[Aluno_max];

   //profesores
   int professor_into = 0;
   char nome_professor[professore_max][100];
   char materia[professore_max][100];
   int codigo_professor[professore_max];

   //professor recebe
   int recebe_professor_into = 0,recebe_professor_01=0;
   char recebe_nome_professor[professore_max][100];
   char recebe_materia[professore_max][100];
   int recebe_codigo_professor[professore_max];

   //outros
   int autenticacao,autenticacao_matricula,verificacao,abrir_professor,abrir_aluno,login,visualizacao_aluno,visualizacao_resultado;
   int opcao,opcao_adm,opcao_aluno,sair,sair_menu_admin,sair_menu_professor,sair_menu_aluno,opcao_professor,abrir_notas,contado=0;
   int i , j ;
   

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

   
    printf("\n\n\n             ..:: Sejam bem-vindos ao SUAP-SISTEMA ACADEMICO! ::.. ");


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
      
   while (sair!=2){
   do{
      system("cls");
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
     professor = fopen("professor.txt","a+");
     cadastro_aluno = fopen("cadastro_aluno.txt","a+");
     usuario_aluno = fopen("usuario_aluno.txt","a+");
     notas_alunos = fopen("notas_alunos.txt","a+");


      if(professor == NULL || cadastro_aluno == NULL || usuario_aluno == NULL){
       printf("erro na abertura\n");
       system("pause");
       exit(1);
      }
     printf("----------------------"); 
     printf("\nPAINEL DE AUTENTICACAO PROFESSOR\n");
     printf("-----------------------\n\n");
     printf("digite o codigo do professor:");
     scanf("%d", & autenticacao);
     system("cls");
     for(abrir_professor = 0; abrir_professor < professore_max; abrir_professor++){
        fscanf(professor,"%s",recebe_nome_professor[abrir_professor]);
        fscanf(professor,"%s",recebe_materia[abrir_professor]);
        fscanf(professor,"%d", & recebe_codigo_professor[abrir_professor]);
     }
     for (abrir_aluno = 0; abrir_aluno < Aluno_max; abrir_aluno++){
         fscanf(cadastro_aluno,"%s",nome_recebe_aluno[abrir_aluno]);
         fscanf(cadastro_aluno,"%s",sobrenome_recebe_aluno[abrir_aluno]);
         fscanf(cadastro_aluno,"%d",& idade_recebe_aluno[abrir_aluno]);
         fscanf(usuario_aluno,"%d",& recebe_matricula_aluno[abrir_aluno]);
         fscanf(usuario_aluno,"%d",& recebe_senha_aluno[abrir_aluno]); 
     }
     
     for(verificacao = 0; verificacao < professore_max; verificacao++){
        if(autenticacao == recebe_codigo_professor[verificacao]){
           login = 1;
           break;
         }else{
            login = 2;
         }
     }
      sair_menu_professor = 0;
     if(login == 1){
      printf("login efetuado com sucesso....");
      sleep(2);  
      
      while (sair_menu_professor!=2){ 
         system("cls");
         do{  
         printf("MENU PROFESSOR");
         printf("\n---------------\n");
         printf("\nseja bem-vindo(a),%s", recebe_nome_professor[verificacao]);
         printf("\n1 - minhas informacoes"); 
         printf("\n2 - visualiza aluno");
         printf("\n3 - registra nota");
         printf("\n4 - volta"); 
         printf("\nescolha uma opcao:");
         scanf("%d", & opcao_professor);
         system("cls");
         }while(opcao_professor<1 || opcao_professor>4);
         switch(opcao_professor){
         case 1://informacao professor
            printf("MINHAS INFORMACOES");
            printf("\n---------------------\n\n");
            printf("\nNome: %s", recebe_nome_professor[verificacao]);
            printf("\nMateria: %s", recebe_materia[verificacao]);
            printf("\nCodigo: %d\n",recebe_codigo_professor[verificacao]);
            system("pause");
            break;
         case 2://visualiza aluno
            printf("VISUALIZA INFORMACOES");
            printf("\n----------------------\n");
            printf("\nDigite o numero de matricula:");   
            scanf("%d", & opcao_adm);
            system("cls");
            for (visualizacao_aluno = 0; visualizacao_aluno < Aluno_max; visualizacao_aluno++){
               if (opcao_adm == recebe_matricula_aluno[visualizacao_aluno]){
                  visualizacao_resultado = 1;
                  break;
               }else{
                  visualizacao_resultado = 0;
               }
               
            }
            if(visualizacao_resultado == 1){
            printf("VISUALIZA INFORMAÇOES");
            printf("\n----------------------\n");
            printf("\nNome: %s %s", nome_recebe_aluno[visualizacao_aluno],sobrenome_recebe_aluno[visualizacao_aluno]);
            printf("\nIdade: %d", idade_recebe_aluno[visualizacao_aluno]);
            printf("\nMatricula: %d", recebe_matricula_aluno[visualizacao_aluno]);
            system("pause");
            }else{
               printf("\nnao existe aluno cadastrado com essa matricula\n");
               system("pause");
            }
            break; 
         case 3 : //registra notas
            for(visualizacao_aluno=0;visualizacao_aluno<Aluno_max;visualizacao_aluno++){
               printf("REGISTRO DE NOTA");
               printf("\n---------------------\n\n");
               fprintf(notas_alunos,"%s\n",recebe_materia[verificacao]);
               printf("\nMatricula: %d", recebe_matricula_aluno[visualizacao_aluno]);
               printf("\nNome: %s",nome_recebe_aluno[visualizacao_aluno]);
               printf("\ndigite nota do aluno:");
               scanf("%d",& notas[verificacao][visualizacao_aluno]);
               fprintf(notas_alunos,"%d\n",notas[verificacao][visualizacao_aluno]);
               printf("\nregistrando nota...");
               sleep(2);
               printf("\nnota registrada com sucesso");
               system("cls");     
            }  
            if(visualizacao_aluno>Aluno_max){
               printf("todos os alunos com notas registrada");
            } 
            break;
         case 4:
            printf("VOCE REALMENTE  DESEJA\n\n");
            printf("1 - NAO");  
            printf("\n2 - SIM");
            printf("\nescolha uma opcao:");
            scanf("%d",& sair_menu_professor);
            break;
            }
      
         }
      fclose(professor);
      fclose(usuario_aluno);
      fclose(cadastro_aluno);
      fclose(notas_alunos);
     }
     break;
    //aluno  
  case 2:
      cadastro_aluno = fopen("cadastro_aluno.txt","a+");
      usuario_aluno = fopen("usuario_aluno.txt","a+");
      notas_alunos = fopen("notas_alunos.txt","a+");
     
      do{
         for(abrir_aluno=0; abrir_aluno<Aluno_max;abrir_aluno++){
            fscanf(notas_alunos,"%s",notas_materias[contado]);
            fscanf(notas_alunos,"%d",& recebe_notas[contado][abrir_aluno]);         
         }        
         contado=contado+1;
      }while (contado<professore_max);


      for (abrir_aluno = 0; abrir_aluno < Aluno_max; abrir_aluno++){
         fscanf(cadastro_aluno,"%s",nome_recebe_aluno[abrir_aluno]);
         fscanf(cadastro_aluno,"%s",sobrenome_recebe_aluno[abrir_aluno]);
         fscanf(cadastro_aluno,"%d",& idade_recebe_aluno[abrir_aluno]);
         fscanf(usuario_aluno,"%d",& recebe_matricula_aluno[abrir_aluno]);
         fscanf(usuario_aluno,"%d",& recebe_senha_aluno[abrir_aluno]);
      }   


      printf("---------------------");
      printf("\nPAINEL DE AUTENTICACAO ALUNO\n");
      printf("----------------------\n\n");
      printf("\ndigite sua matricula:");
      scanf("%d", & autenticacao_matricula);
      printf("\ndigite sua senha:");
      scanf("%d", & autenticacao);

      for (verificacao = 0; verificacao < Aluno_max; verificacao++){
         if(autenticacao_matricula == recebe_matricula_aluno[verificacao] && autenticacao == recebe_senha_aluno[verificacao]){
            login = 1;
            break;
         }else{
            login = 0;
         }
         
      }
       
      if(login==1){
         printf("login efeituado com sucesso...");
         sleep(2);
        while(sair_menu_aluno!=2){
         do{
         system("cls");   
         printf("MENU ALUNO");
         printf("\n-------------\n\n");
         printf("\nseja bem vindo, %s",nome_recebe_aluno[verificacao]);
         printf("\n1 - Minhas Informacoes");
         printf("\n2 - Minhas Notas");
         printf("\n3 - volta");
         printf("\nescolha uma opcao:");
         scanf("%d", & opcao_aluno);
         system("cls");
         }while(opcao_aluno<1 || opcao_aluno>3);

         switch(opcao_aluno){
         case 1://minhas informaçoes
            printf("VISUALIZA INFORMACOES");
            printf("\n----------------------\n");
            printf("\nNome: %s %s", nome_recebe_aluno[verificacao],sobrenome_recebe_aluno[verificacao]);
            printf("\nIdade: %d", idade_recebe_aluno[verificacao]);
            printf("\nMatricula: %d", recebe_matricula_aluno[verificacao]);
            printf("\nSenhar: %d", recebe_senha_aluno[verificacao]);
            system("pause");
            break;
         case 2://minhas notas
            printf("VISUALIZA NOTAS");
            printf("\n--------------------\n"); 
            for(abrir_notas = 0;abrir_notas<professore_max;abrir_notas++){
               printf("%s : %d\n", notas_materias[abrir_notas], recebe_notas[abrir_notas][verificacao]);
            }
            system("pause");
            break;  
         case 3:
            printf("REALMENTE DESEJA SAIR");
            printf("\n---------------------------\n\n");
            printf("\n1 - Nao");
            printf("\n2 - Sim");
            printf("\nescolha uma opcao:");
            scanf("%d",& sair_menu_aluno);
            break;   
         }
        }
      }

      fclose(usuario_aluno);
      fclose(cadastro_aluno);
      fclose(notas_alunos);
      break;
    //ADMINISTRADOR 
   case 3:
      printf("---------------------");
      printf("\nPAINEL DE AUTENTICACAO ADMINISTRADOR\n");
      printf("----------------------\n\n");
      printf("\nDigite o codigo do administrador:");
      scanf("%d", & autenticacao);
      system("cls");

      if (autenticacao!=codigo_admin){

         printf("falhar de login.../n");
         system("pause");
         break;
      }
      //menu adm
      if(autenticacao==codigo_admin){
         volta_admin = 0;
         while(volta_admin!=2){
            do{
            printf("--------------");
            printf("\nMENU DO ADMINISTRADOR\n");
            printf("--------------\n\n");
            printf("1 - sistema aluno\n");
            printf("2 - cadastra professor\n");
            printf("3 - voltar\n");
            printf("escolha sua opcao:");
            scanf("%d",& opcao_adm);
            system("cls");
            }while(opcao_adm<1 || opcao_adm>3);
            switch(opcao_adm){
               case 1: //sistema aluno

                  do{
                  system("cls");
                  printf("--------------");
                  printf("\nMENU DO SISTEMA ALUNO\n");
                  printf("--------------\n\n");
                  printf("\n1 - cadastro aluno");
                  printf("\n2 - criar usuario aluno");
                  printf("\nescolha uma opcao:");
                  scanf("%d",& opcao_adm);
                  system("cls");
                  }while(opcao_adm<1 || opcao_adm>2);
                  
                  switch(opcao_adm){
                  case 1:// cadastro de aluno

                     cadastro_aluno = fopen("cadastro_aluno.txt","a");
                     if(cadastro_aluno == NULL){
                        printf("erro na abertura\n");
                        system("pause");
                        exit(1);
                     }
                     for(alunos ;alunos<Aluno_max; alunos++){
                        printf("CADASTRO ALUNO");
                        printf("\n-----------------\n\n");
                        printf("\nALUNO %d",alunos+1);
                        printf("\nDIGITE O NOME DO ALUNO:");
                        scanf("%s", & nome_aluno[alunos]);
                        fprintf(cadastro_aluno,"%s\n",nome_aluno[alunos]);
                        fflush(stdin);
                        printf("\nDIGITE O SOBRENOME:");
                        scanf("%s", sobrenome_aluno[alunos]);
                        fprintf(cadastro_aluno,"%s\n",sobrenome_aluno[alunos]);
                        fflush(stdin);
                        printf("\nIDADE DO ALUNO:");
                        scanf("%d", & idade_aluno[alunos]);
                        fprintf(cadastro_aluno,"%d\n",idade_aluno[alunos]);                    
                        system("cls");
                        printf("\n\ncadastrando aluno no sistema....");
                        sleep(5);
                        printf("\n\ncadastro realizado com sucesso");
                        printf("\ndeseja continua");
                        printf("\n1 - sim");
                        printf("\n2 - nao");
                        printf("\ndigite uma opcao:");
                        scanf("%d",& opcao_adm);
                           if(opcao_adm == 2){
                              break;
                           }             
                     }
                     if(alunos > Aluno_max){
                        printf("numero  maximo de aluno atingido");
                        system("pause");
                        break;
                     }
                     fclose(cadastro_aluno);
                     break; 
                  case 2:// usuario aluno

                     cadastro_aluno = fopen("cadastro_aluno.txt","a+");
                     usuario_aluno = fopen("usuario_aluno.txt","a");
                     if(cadastro_aluno == NULL || usuario_aluno == NULL){
                        printf("erro na abertura\n");
                        system("pause");
                        exit(1);
                     }
                     for (alunos_recebe = 0; alunos_recebe < Aluno_max; alunos_recebe++){ 
                        fscanf(cadastro_aluno , "%s",nome_recebe_aluno[alunos_recebe]);
                        fscanf(cadastro_aluno,"%s",sobrenome_recebe_aluno[alunos_recebe]);  
                        fscanf(cadastro_aluno, "%d", & idade_recebe_aluno[alunos_recebe]);               
                     }
                     
                     for (alunos_recebe1 = 0; alunos_recebe1 < Aluno_max; alunos_recebe1++) {
                        printf("\nUSUARIO ALUNO");
                        printf("\n-------------------\n\n");
                        printf("\nNOME DO ALUNO: %s %s", nome_recebe_aluno[alunos_recebe1],sobrenome_recebe_aluno[alunos_recebe1]);
                        printf("\nIDADE:%d", idade_recebe_aluno[alunos_recebe1]);
                        printf("\ndigite o numero de matricula:");
                        scanf("%d",& matricula_aluno[alunos_recebe1]);        
                        fprintf(usuario_aluno,"%d\n",matricula_aluno[alunos_recebe1]);
                        printf("\ndigite a senhar:");
                        scanf("%d",& senha_aluno[alunos_recebe1]);
                        fprintf(usuario_aluno,"%d\n",senha_aluno[alunos_recebe1]);
                        printf("\n\ncriando usuario....");
                        sleep(5);     
                        system("cls");                      
                     }
                     if(alunos > Aluno_max){
                        printf("todos os alunos com usuario criado");
                        system("pause");
                        break;
                     } 
                        system("pause");
                     }
                     fclose(usuario_aluno);
                     fclose(cadastro_aluno);
                     break; 
               case 2:   //cadastro professor
                  professor = fopen("professor.txt","a");
                  if(professor== NULL){
                     printf("erro na abertura");
                     system("pause");
                     exit(1);
                  }
                  for (professor_into; professor_into < professore_max; professor_into++){
                  printf("---------------------\n");
                  printf("\nCADASTRO PROFESSOR\n");
                  printf("\n----------------------\n");
                  printf("\nNome Do Professor:");
                  scanf("%s", &  nome_professor[professor_into]);
                  fprintf(professor,"%s\n",nome_professor);
                  fflush(stdin);
                  printf("\n-----------------------\n");
                  printf("\nNome Da Materia:");
                  scanf("%s", & materia[professor_into]);
                  fprintf(professor,"%s\n",materia[professor_into]);
                  fflush(stdin);
                  printf("\n-----------------------\n");
                  printf("\nCodigo Do Professor:");
                  scanf("%d",& codigo_professor[professor_into]);
                  fprintf(professor,"%d\n",codigo_professor[professor_into]);
                  system("cls");
                  printf("\n\ncriando usuario....");
                  sleep(5);
                  printf("\n\nusuario realizado com sucesso");
                  system("cls");     
                  }
                  if(professor_into> professore_max){
                     printf("numero maximo de registro alcancado");
                  }
                  fclose(professor);
                  break;
               case 3:
                  do{
                  printf("VOCE REALMENTE DESEJA VOLTA\n\n");
                  printf("1 - NAO");  
                  printf("\n2 - SIM");
                  printf("\nescolha uma opcao:");
                  scanf("%d",& volta_admin);
                  }while (volta_admin<1 ||  volta_admin>2);
                  break;
            }      
            }
         }

     break;
    //SAIR 
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
   printf(" SSSSSSSSSSSSSSS         UUUUUUUUU      AAAAAA                     AAAAA   PPPP\n");

   printf("\n\n\n        ..::  Obrigado Por Utiliza SUAP-Sistena Academico! ::.. \n\n\n\n");
 system("pause");
 return 0;
}  