#include <iostream>

using namespace std;

float retornaSalarioLiquido(float);
float retornaGratificacao(float);
float retornaImpostos(float);

int main(){
    int numeroFuncionarios = 5;
    int vFuncionarios[numeroFuncionarios];
    float salarioBase, salarioLiquido, gratificacao, impostos;

    for(int i = 0; i < numeroFuncionarios; i++){
    cout << "Informe o salario bruto do funcionário " << i << endl;
    cin >> salarioBase;

    vFuncionarios[i] = salarioBase;

    salarioLiquido = retornaSalarioLiquido(salarioBase);
    gratificacao = retornaGratificacao(salarioBase);
    impostos = retornaImpostos(salarioBase);

    cout << "Funcionario: " << i << endl;
    cout << "Salario liquido " << salarioLiquido << endl;
    cout << "Gratificaçao " << gratificacao << endl;
    cout << "Impostos " << impostos << endl << endl;

    }
}

float retornaSalarioLiquido(float salarioBase){
    float salarioBruto = salarioBase;

    float gratificacao = retornaGratificacao(salarioBruto);
    float impostos = retornaImpostos(salarioBruto);

    float salarioLiquido = (salarioBruto + gratificacao) - impostos;

    return salarioLiquido;
}

float retornaGratificacao(float salarioBase){
    float salarioBruto = salarioBase;
    float gratificacao = (salarioBruto * 16)/100;

    return gratificacao;
}

float retornaImpostos(float salarioBase){
    float salarioBruto = salarioBase;
    float impostos = (salarioBruto * 30)/100;

    return impostos;
}
