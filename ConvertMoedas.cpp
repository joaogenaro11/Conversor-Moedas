#include <iostream>
#include <iomanip>

int main() {
    double reais;
    int opcao;
    
    std::cout << "Digite o valor em reais: ";
    std::cin >> reais;
    
    std::cout << "Converter para: 1 - Dolar, 2 - Euro, 3 - Libra: ";
    std::cin >> opcao;
    
    switch (opcao) {
        case 1: std::cout << "Valor em Dolar: " << std::fixed << std::setprecision(2) << reais / 5.80 << std::endl; break;
        case 2: std::cout << "Valor em Euro: " << std::fixed << std::setprecision(2) << reais / 6.50 << std::endl; break;
        case 3: std::cout << "Valor em Libra: " << std::fixed << std::setprecision(2) << reais / 7.50 << std::endl; break;
        default: std::cout << "Opcao invalida!" << std::endl;
    }
    return 0;
}