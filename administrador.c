#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "suap.h"
#include "indice.c"
 

char usuario[6];//string para digita o usuario para a validaçao
int senhar;//para digita a senhar para a validacao

int opcao,i;
int contadorcadastro_aluno=0;//registra a quantidade de aluno no cadastro
int contadorcadastro_professor=0;//registra a quantidade de professores cadastrado

void validacao_adm(){ 
    system("cls");
    printf("VALIDACAO DE ACESSO");
    printf("\n----------------------\n\n");
    printf("\nUSUARIO:");
    scanf("%s",usuario);
    fflush(stdin);
    printf("\nSENHAR:");
    scanf("%d", & senhar);
    fflush(stdin);
    system("cls");
    
    if(strcmp(admin_usuario,usuario)==0 && (senhar==admin_senhar)){
        printf("login realizado com sucesso");
        Sleep(3);
        menu_admin();

    }else{

        printf("usuario ou login estao incorreto");
        printf("\ndeseja tenta novamente\n");
        printf("\n1 - SIM");
        printf("\n2 - NAO");
        printf("\nescolha sua opcao:");
        scanf("%d", & opcao);
        if(opcao == 1){
            validacao_adm();
        }else{
            menu_principal();
        }
    }
}


void menu_admin(){
    do{
        system("cls");
        printf("MENU DO ADMINISTRADOR");
        printf("\n---------------------------\n\n");
        printf("\nBEM-VINDO ADMINISTRADOR");
        printf("\n1 - cadastra aluno");
        printf("\n2 - cadastra professor");
        printf("\n3 - volta");
        printf("\nescolha sua opcao:");
        scanf("%d",&  opcao);
    }while(opcao<1 && opcao >3);

    switch(opcao){
        case 1: cadastro_aluno(); break;
        case 2: cadastro_professor(); break;
        case 3: menu_principal(); break;
    }
}





void cadastro_aluno(){

    if(contadorcadastro_aluno<aluno_max){
        cadastroaluno = fopen("arquivos\\cadastros_alunos.txt","a");
        if(cadastroaluno == NULL){
            printf("\n erro na abertura");
            system("pause");
            menu_admin();
        }

        for(i =0 ; i< aluno_max;i++){
            system("cls");
            printf("CADASTRO ALUNO %d", i+1);
            printf("\n----------------------\n\n");
            printf("\nprimeiro nome:");
            scanf("%s", nome_aluno[i]);
            printf("\nsegundo nome:");
            scanf("%s",sobre_nome[i]);
            printf("\nnumero de matricula:");
            scanf("%d",& matricula_aluno[i]);
            printf("\nnome de usuario do aluno:");
            scanf("%s",usuario_aluno[i]);
            printf("\nsenhar do aluno:");
            scanf("%d",& senha_aluno[i]);

            contadorcadastro_aluno++;

             fprintf(cadastroaluno,"NOME: %s %s\n",nome_aluno[i],sobre_nome[i]);
             fprintf(cadastroaluno,"Matricula: %d\n", matricula_aluno[i]);
             fprintf(cadastroaluno,"Usuario: %s\n", usuario_aluno[i]);
             fprintf(cadastroaluno,"Senhar: %d\n", senha_aluno[i]);

             printf("\n\n cadastro realizado com sucesso");
             Sleep(3);

             do{
                system("cls"); 
                printf("\ndeseja continua");
                printf("\n1 - Sim");
                printf("\n2 - Nao");
                printf("\nescolha uma opcao:");
                scanf("%d", & opcao);
             }while (opcao<1 || opcao>2);

            if(opcao == 2){
                break;
            }               
        }
        fclose(cadastroaluno);//fechamento do arquivo
        menu_admin();


    }
    if(cadastroaluno>aluno_max){
        printf("\n\n A capacidade de registros de alunos esgotou.");
        system("pause");
        menu_admin();
    }
}


void cadastro_professor(){
    if(contadorcadastro_professor<professores_max){
        cadastroprofessor = fopen("arquivos\\cadastro_professores.txt","a");
        if(cadastroprofessor == NULL){
            printf("\n erro na abertura");
            system("pause");
            menu_admin();
        }

        for(i=0;i<professores_max;i++){
            system("cls");
            printf("CADASTRO PROFESSOR %d",i+1);
            printf("\n------------------------------\n\n");
            printf("\nprimeiro nome do professor:");
            scanf("%s", nome_professores[i]);
            printf("\nsobrenome do professor:");
            scanf("%s", sobrenome_professor[i]);
            printf("\nmateria do professor:");
            scanf("%s",materia[i]);
            printf("\nusuario do professor:");
            scanf("%s", usuario_professores[i]);
            printf("\nsenhar:");
            scanf("%d",& senha_professores[i]);

            contadorcadastro_professor++;

            fprintf(cadastroprofessor,"Nome: %s %s\n",nome_professores[i],sobrenome_professor[i]);
            fprintf(cadastroprofessor,"Materia: %s\n", materia[i]);
            fprintf(cadastroprofessor,"Usuario: %s\n", usuario_professores[i]);
            fprintf(cadastroprofessor,"Senhar: %d\n", senha_professores[i]);

            
             printf("\n\n cadastro realizado com sucesso");
             Sleep(3);

             do{
                system("cls"); 
                printf("\ndeseja continua");
                printf("\n1 - Sim");
                printf("\n2 - Nao");
                printf("\nescolha uma opcao:");
                scanf("%d", & opcao);
             }while (opcao<1 || opcao>2);

            if(opcao == 2){
                break;
            }            
        }
        fclose(cadastroprofessor);
        menu_admin();
    }
    
    if(cadastroprofessor>professores_max){
        printf("\n\n A capacidade de registros de professores esgotou.");
        system("pause");
        menu_admin();
    }
}

