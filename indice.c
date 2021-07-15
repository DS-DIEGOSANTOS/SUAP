
#define aluno_max 3 //define a quantidade maxima de aluno
#define professores_max 2 //define a quantidade maxima de professores

char admin_usuario[]="admin";//definiçao do usuario
int admin_senhar = 0000; //senhar do administrador


char nome_aluno[aluno_max][20],sobre_nome[aluno_max][20],usuario_aluno[aluno_max][20];//strings necessario para aluno    
int senha_aluno[aluno_max],matricula_aluno[aluno_max];//array´s necessarias para alunos

//outros
char texto_nome[10],texto_usuario[10],texto_senhar[10],texto_matricula[10],texto_materia[10],texto_notas[10];


float notas_alunos[professores_max][aluno_max];//necessario para armazenamento de notas

char nome_professores[professores_max][20],sobrenome_professor[professores_max][20],materia[professores_max][20],usuario_professores[professores_max][20];//strings necessario para professores
int senha_professores[professores_max];//array´s necessarias para professores


//arquivos
FILE *cadastroaluno;//arquivos para armazena o cadastro de aluno
FILE *cadastroprofessor;//arquivos para armazena o cadastro do professor
FILE *registradas_notas;//arquivos para armazena nota do aluno
