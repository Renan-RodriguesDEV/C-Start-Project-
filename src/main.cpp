#include <iostream>
#include <string>
// função sem retorno, imprime uma mensagem na tela
void print(std::string message)
{
    std::cout << message << std::endl;
}

// função principal
int main()
{

    for (int i = 0; i < 20; i++)
    {
        print(std::to_string(i));
        if (i == 10 or i == 19)
        {
            print("Chegou no 10 ou 19");
        }
        print("Repetindo...");
    }

    return 0;
}