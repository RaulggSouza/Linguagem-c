#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
    printf("Salario bonus: \n");
    float salario_fixo;
    int vendas_efetuadas;
    printf("Informe o salario fixo do funcionario: ");
    scanf("%f", &salario_fixo);
    printf("Informe as vendas efetuadas pelo funcionarios: ");
    scanf("%d", &vendas_efetuadas);
    float salario_total = salario_fixo + vendas_efetuadas*0.18;
    printf("%.2f", salario_total);
    return 0;
}
