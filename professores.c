int professor,notas = 0;
int i = 0,j = 0,a =0;

void validacao_prof(){
    int senhar_prof;//para usuario digita a senhar de acesso
    char usuario_prof[20];//para usuario digita o usuario de acesso

    int login=0;

    cadastroprofessor = fopen("arquivos\\cadastro_professores.txt","a+");
    if(cadastroprofessor == NULL){
            printf("\n erro na abertura");
            system("pause");
            menu_principal();
    }

    for(i;i<professores_max;i++){
        fscanf(cadastroprofessor,"%s %s %s",texto_nome ,nome_professores[i],sobrenome_professor[i]);
        fscanf(cadastroprofessor,"%s %s",texto_materia, materia[i]);
        fscanf(cadastroprofessor,"%s %s",texto_usuario,usuario_professores[i]);
        fscanf(cadastroprofessor,"%s %d",texto_senhar,& senha_professores[i]);
    }

    system("cls");
    printf("VALIDACAO PROFESSOR");
    printf("\n--------------------\n\n");
    printf("\nUsuario:");
    scanf("%s",usuario_prof);
    fflush(stdin);
    printf("\nSenhar:");
    scanf("%d",& senhar_prof);

    for(professor = 0;professor<professores_max;professor++){
        if(strcmp(usuario_prof,usuario_professores[professor]) == 0 && (senhar_prof == senha_professores[professor])){
            login =1;
            break;
        }else{
            login=0;
        }
    }

    if(login==1){
        printf("\n\nlogin efetuado com sucesso...");
        printf("\nindo para o modo professor...");
        sleep(3);
        menu_professor();
    }
    if(login==0){
        do{
            system("cls");
            printf("\n\nfalha de login...");
            printf("\ndeseja tenta novamente:");
            printf("\n1 - SIM");
            printf("\n2 - NAO");
            printf("\ndigite uma opcao:");
            scanf("%d",& opcao);
        }while ((opcao<1) || (opcao>2));
      
       if(opcao==1){
           validacao_prof();
       }else{
           menu_principal();
       }
    }
}
void menu_professor(){
    system("cls");

    //colocando informaçoes do aluno
    cadastroaluno = fopen("arquivos\\cadastros_alunos.txt","a+");
    if(cadastroaluno == NULL){
            printf("\n erro na abertura");
            system("pause");
            menu_admin();
    }
    for(j;j<aluno_max;j++){
        fscanf(cadastroaluno,"%s %s %s",texto_nome,nome_aluno[j],sobre_nome[j]);
        fscanf(cadastroaluno,"%s %d", texto_matricula,& matricula_aluno[j]);
        fscanf(cadastroaluno,"%s %s", texto_usuario,usuario_aluno[j]);
        fscanf(cadastroaluno,"%s %d", texto_senhar,& senha_aluno[j]);
    }    

    //menu principal da aba professor
    do{
        printf("MENU PROFESSOR");
        printf("\n--------------------\n\n");
        printf("\nseja bem-vindo, %s %s",nome_professores[professor],sobrenome_professor[professor]);
        printf("\n1 - minhas informacoes");
        printf("\n2 - procura informacoes do aluno");
        printf("\n3 - registra notas");
        printf("\n4 - volta");
        printf("\nescolha sua opcao:");
        scanf("%d", & opcao);
        system("cls");
    }while((opcao<1) || (opcao>4));

    switch(opcao){
        case 1:informacoes_professor(); break;
        case 2:informacoes_aluno();break;
        case 3:registra_nota();break;
        case 4:menu_principal(); break;
    }

}


void informacoes_professor(){
    printf("MINHAS INFORMACOES");
    printf("\n--------------------------\n\n");
    printf("\nNOME: %s %s",nome_professores[professor],sobrenome_professor[professor]);
    printf("\nMATERIA: %s", materia[professor]);
    printf("\nUSUARIO: %s",usuario_professores[professor]);
    printf("\nSENHAR: %d\n",senha_professores[professor]);
    system("pause");
    system("cls");
    menu_professor();
}

void informacoes_aluno(){
    int aluno;
    printf("INFORMACAO ALUNO");
    printf("\n--------------------\n\n");
    printf("\ndigite o numero de matricula:");
    scanf("%d",& aluno);
    for(i =0;i<aluno_max;i++){
        if(aluno == matricula_aluno[i]){
            opcao = 1;
            break;
        }else{
            opcao =0;
        }
    }

    if(opcao== 1){
        system("cls");
        printf("\nNOME: %s %s", nome_aluno[i],sobre_nome[i]);
        printf("\nMATRICULA: %d",matricula_aluno[i]);
        printf("\nUSUARIO: %s\n",usuario_aluno[i]);
        system("pause");
        menu_professor();
    }
    if (opcao ==0){
        int opcao1;
       do{
            system("cls");
            printf("\n\naluno nao encontrado...");
            printf("\ndeseja tenta novamente:");
            printf("\n1 - sim");
            printf("\n2 - nao");
            printf("\nescolha sua opcao:");
            scanf("%d",& opcao1);
       }while(opcao1<1 || opcao1>2);    

       if(opcao1 == 1){
           informacoes_aluno();
       }else{
           menu_professor();
       }
    }
    
}

void registra_nota(){
    registradas_notas = fopen("arquivos\\notas_alunos.txt","a");
    if(registradas_notas == NULL){
        printf("\n erro na abertura");
        system("pause");
        menu_professor();
    }
    
    fprintf(registradas_notas,"MATERIA: %s\n",materia[professor]);

    for(a; a<aluno_max;a++){
        system("cls");
        printf("REGISTRO DE NOTAS");
        printf("\n------------------------\n\n");
        printf("\nnome: %s %s", nome_aluno[a],sobre_nome[a]);
        printf("\nmatricula: %d",matricula_aluno[a]);
        printf("\nnota:");  
        scanf("%f", & notas_alunos[professor][a]);

        fprintf(registradas_notas,"NOME: %s %s\n",nome_aluno[a],sobre_nome[a]);
        fprintf(registradas_notas,"NOTA: %.2f\n",notas_alunos[professor][a]);

        printf("\nnota registrada com sucesso\n");
        system("pause");
        notas++;
    }

    if(notas>aluno_max){
        printf("todas os alunos tiveram suas notas cadastrada");
        system("pause");
        menu_professor();
    }

    menu_professor();

}