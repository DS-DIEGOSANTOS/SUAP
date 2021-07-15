int login,aluno,b=0,c=0,d=0;

void validacao_aluno(){
    char usuario1[10];//estring para digita usuario;
    int senhar;//para digitar a senhar
    
    cadastroaluno = fopen("arquivos\\cadastros_alunos.txt","a+");
    registradas_notas = fopen("arquivos\\notas_alunos.txt","a+");

    if(cadastroaluno == NULL && registradas_notas == NULL){
            printf("\n erro na abertura");
            system("pause");
            menu_admin();
    }

    //ARMAZENA INFORMAÇOES DO ALUNO
    for(b;b<aluno_max;b++){
        fscanf(cadastroaluno,"%s %s %s",texto_nome,nome_aluno[b],sobre_nome[b]);
        fscanf(cadastroaluno,"%s %d", texto_matricula,& matricula_aluno[b]);
        fscanf(cadastroaluno,"%s %s", texto_usuario,usuario_aluno[b]);
        fscanf(cadastroaluno,"%s %d", texto_senhar,& senha_aluno[b]);
    }

    //armazena NOTAS DO ALUNO       
    for(d;d<professores_max;d++){
        fscanf(registradas_notas,"%s %s",texto_materia,materia[d]);
        c = 0;
        do{
            fscanf(registradas_notas,"%s %s %s",texto_nome,nome_aluno[c],sobre_nome[c]);
            fscanf(registradas_notas,"%s %f",texto_notas,& notas_alunos[d][c]);
            printf("%.2f\n",notas_alunos[d][c]);
            c++;
        }while(c<aluno_max);
    
    }

    system("cls");
    printf("VALIDACAO ALUNO");
    printf("\n----------------------\n\n");
    printf("\nUsuario:");
    scanf("%s", usuario1);
    printf("\nSenhar:");
    scanf("%d",& senhar);

    for(aluno = 0; aluno < aluno_max;aluno++){
        if(strcmp(usuario1,usuario_aluno[aluno])==0 && senhar==senha_aluno[aluno]){
            login =  1;
            break;
        }else{
            login = 0;
        }
    }

    if(login == 1){
        printf("\nlogin efetuado com sucesso...");
        sleep(1);
        printf("indo para o modo Aluno");
        menu_aluno();
    }
    if(login == 0){
        do{
            system("cls");
            printf("\nerro de login");
            printf("\ndeseja tenta novamente:");
            printf("\n1 - sim");
            printf("\n2 - nao");
            printf("\nescolha sua opcao:");
            scanf("%d",& opcao);
        }while(opcao<1 || opcao>2);

        if(opcao==1){
            validacao_aluno();
        }
        if(opcao==2){
            menu_principal();
        }
    }
}

void menu_aluno(){

    


    do{
        system("cls");
        printf("MENU ALUNO");
        printf("\n-------------------\n\n");
        printf("\nSEJA BEM-VINDO, %s %s",nome_aluno[aluno],sobre_nome[aluno]);
        printf("\n1 - minhas informacoes");
        printf("\n2 - minhas notas");
        printf("\n3 - volta");
        printf("\nescolha sua opcao:");
        scanf("%d",& opcao);
        system("cls");
    }while (opcao<1 || opcao>3);

    switch(opcao){
        case 1:informacoes_aluno2();break;
        case 2:minhas_notas();break;
        case 3:menu_principal();break;
    }
    
}

void informacoes_aluno2(){
    printf("MINHAS INFORMACOES");
    printf("\n--------------------------\n\n");
    printf("\nNOME: %s %s",nome_aluno[aluno],sobre_nome[aluno]);
    printf("\nMATRICULA: %d", matricula_aluno[aluno]);
    printf("\nUSUARIO: %s",usuario_aluno[aluno]);
    printf("\nSENHAR: %d\n",senha_aluno[aluno]);
    system("pause");
    menu_aluno();
}

void minhas_notas(){


    printf("MINHAS NOTAS");
    printf("\n--------------------------\n\n");
    for(a=0;a<professores_max;a++){
        if(notas_alunos[a][aluno]>=0 && notas_alunos[a][aluno]<=10){
            printf("\n Materia: %s", materia[a]);
            printf("\n nota: %.2f\n", notas_alunos[a][aluno]);
            
        }
    }
    system("pause");
    menu_aluno();
}
