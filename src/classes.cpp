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

int main()
{
    Person pessoa("Renan", 20);
    std::cout << "Seu nome é: " << pessoa.getName() << std::endl;
    std::cout << "Sua idade é: " << std::to_string(pessoa.getAge()) << std::endl;
    return 0;
}