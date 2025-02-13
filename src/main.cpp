#include <string>
#include <iostream>

// classe Person com atributos name e age
class Person
{
    // atibutos privados
private:
    std::string name;
    int age;
    // metodos públicos
    // Construtor da classe Person
public:
    Person(std::string name, int age)
    {
        this->name = name;
        this->age = age;
    };
    // métodos get e set
    void setName(std::string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    std::string getName()
    {
        return this->name;
    }
    int getAge()
    {
        return this->age;
    }
};

// função sem retorno, imprime uma mensagem na tela
void print(std::string message)
{
    std::cout << message << std::endl;
}

// função principal
int main()
{
    Person pessoa("Renan", 20);
    print(pessoa.getName());
    print(std::to_string(pessoa.getAge()));
    return 0;
}