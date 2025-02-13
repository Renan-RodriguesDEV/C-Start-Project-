# Projeto de Estudo C++

Este repositório contém meus projetos e exercícios de estudo em C++.

## Pré-requisitos

- Compilador G++
- VS Code (recomendado)
- Extensão C/C++ para VS Code

## Como Compilar e Executar

1. Abra o terminal no diretório do projeto
2. Compile e execute o arquivo:
```bash
g++ src/main.cpp -o main && ./main

g++ <path/file.cpp> -o <file> && ./<file>
```

Esse comando realiza os seguintes passos:
- Compila o arquivo main.cpp que se encontra no diretório src.
- Cria um executável chamado main.
- Executa o programa logo após a compilação.
O comando acima compila o arquivo main.cpp e executa o programa em sequência.

## Depuração no VS Code

1. Instale a extensão C/C++
2. Crie o arquivo `launch.json`:
    - Pressione `F1`
    - Digite "Debug: Open launch.json"
    - Selecione "C++ (GDB/LLDB)"

3. Defina pontos de interrupção clicando à esquerda dos números das linhas
4. Pressione F5 para iniciar a depuração

## Estrutura de Pastas

- `src/` - Arquivos fonte
- `include/` - Arquivos de cabeçalho
- `build/` - Arquivos compilados

## Comandos Básicos

- F5: Iniciar depuração
- F9: Alternar ponto de interrupção
- F10: Passar por cima
- F11: Passar para dentro
