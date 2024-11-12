#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[64];
    char sexo;
    char registro[12];
    char data[16];
    char curso[32];
} T_STUDENT;

typedef struct{
    int len;
    T_STUDENT** student;
} T_STUDENT_LIST;


T_STUDENT* createStudent(char* input){
    T_STUDENT* student = malloc(sizeof(T_STUDENT));
    strcpy(student->nome, input);
    char sexo;
    scanf("%c", &sexo);
    student->sexo = sexo;
    getchar();
    char registro[12];
    fgets(registro, 12, stdin);
    registro[strlen(registro)-1] = '\0';
    strcpy(student->registro, registro);
    char data[16];
    fgets(data, 16, stdin);
    data[strlen(data)-1] = '\0';
    strcpy(student->data, data);
    char curso[32];
    fgets(curso, 32, stdin);
    curso[strlen(curso)-1] = '\0';
    strcpy(student->curso, curso);
    return student;
}
T_STUDENT_LIST* createStudentList(){
    T_STUDENT_LIST* studentList = malloc(sizeof(T_STUDENT_LIST));
    studentList->len = 0;
    studentList->student = malloc(sizeof(T_STUDENT*) * 1);
    while(1){
        char initialInput[64];
        fgets(initialInput, 64, stdin);
        initialInput[strlen(initialInput)-1] = '\0';
        if(strcmp(initialInput, "FIM") != 0){
            studentList->student[studentList->len] = createStudent(initialInput);
            studentList->student = realloc(studentList->student, studentList->len+1);
            studentList->len++;
        }else if (strcmp(initialInput, "FIM") == 0){
            return studentList;
        }
    }
}


void escreveSexo(char sexo, char* escrito){
    if(sexo == 'F'){
        strcpy(escrito, "Feminino");
    }else{
        strcpy(escrito, "Masculino");
    }
}

void printStudent(T_STUDENT* student){
    char sexo[16]; 
    escreveSexo(student->sexo, sexo);
    printf("Nome: %s - Sexo: %s - RA: %s\n", student->nome, sexo, student->registro);
    printf("Ingresso: %s - Curso: %s\n", student->data, student->curso);   
}

int main(int argc, char const *argv[]){
    T_STUDENT_LIST* studentList = createStudentList();
    if (studentList->len > 0){
        for (int i = 0; i < studentList->len; i++){
            printf("Registro %d:\n", i+1);
            printStudent(studentList->student[i]);
            printf("==========\n");
        }
        for (int i = 0; i < studentList->len; i++){
            free(studentList->student[i]);
        }
    }
    free(studentList);
    return 0;
}
