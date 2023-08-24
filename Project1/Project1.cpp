// Project1.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>;
#include <string>;


using namespace std;

class Cars {
public:
    int ano = 2020;
    string marca;
    string modelo;

    void buzinar() {
        cout << "bi bi bi!\n";
    };
};

class Carros : public Cars {
private:
    double price;

public:
    void setPrice(double p) {
        price = p;
    };

    double getPrice() {
        return price;
    }
    
};

int main()
{
    Cars car1;
    Carros car2;
    
    cout << "Digite a marca do carro: \n";
    cin >> car1.marca;
    cout << "Digite o ano do seu carro: \n";
    cin >> car1.ano;
    cout << "Digite o modelo do seu carro: \n";
    cin >> car1.modelo;
    
    car2.buzinar();

    car2.setPrice(60000);
    if (car1.ano > 2020)
    {
        cout << "Wow, que belo carro! Parabens \n";
        cout << "O seu carro eh da marca " << car1.marca << " ano " << car1.ano << " modelo " << car1.modelo << endl;
    }
    else if(car1.ano > 2000) {
        cout << "Belissimo carro meu amigo! \n";
        cout << "O seu carro eh da marca " << car1.marca << " ano " << car1.ano << " modelo " << car1.modelo << endl;
    }
    else {
        cout << "Talvez esteja na hora de trocar de carro, amigo! \n";
        cout << "O seu carro eh da marca " << car1.marca << " ano " << car1.ano << " modelo " << car1.modelo << endl;
    }
    
    

    cout << "O Pre"<< static_cast<char>(135) << "o " << static_cast<char>(130) << " : " << car2.getPrice() << "\n";
    
    
    
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
