#  Projeto Farol com Ponteiros e LCD 

##  Contexto da Atividade
Este projeto foi desenvolvido como parte de uma **atividade ponderada da disciplina de Computação**, cujo objetivo era ir além da simples execução de um código em Arduino.  
A proposta pedia o uso de **conceitos de ponteiros em C++** e a **integração de um módulo externo** ao microcontrolador.  
Para cumprir esse desafio, o projeto implementa um **sistema de farol semafórico** utilizando **ponteiros para manipulação de pinos** e um **display LCD I²C** para exibir o tempo restante até o LED verde acender novamente.



## 💡 Ideia do Projeto
A ideia central é **simular o funcionamento de um semáforo** real, alternando entre os estados **verde, amarelo e vermelho** com tempos pré-definidos.  
Enquanto os LEDs acendem e apagam, o **LCD 16x2 com interface I²C** exibe o estado atual do farol e o **tempo regressivo até o próximo verde**.

Além de demonstrar conceitos de lógica sequencial, este projeto reforça o **uso de ponteiros** para acessar os pinos dinamicamente, promovendo uma abordagem mais próxima da **programação de baixo nível em C++**.

## 🔧 Componentes Utilizados
- **ESP32**
- **3 LEDs (verde, amarelo e vermelho)**
- **Resistor**
- **Display LCD 16x2 com módulo I²C (4 pinos)**
- **Jumpers e protoboard**



##  Conceitos Aplicados
- **Ponteiros em C++** → manipulação indireta de pinos com `int*`
- **Controle de fluxo com `delay()`**
- **Integração de periférico I²C (LCD)**
- **Estrutura modular com CMake + Arduino CLI**
- **Documentação técnica do projeto**



## Como Executar o Projeto (Arduino CLI + CMake)

 **Pré-requisitos:**
 - Arduino CLI instalado  
 - Biblioteca `LiquidCrystal I2C` instalada  
 - CMake instalado  
 - ESP32 conectada via USB


## Demonstração em Vídeo

Assista ao vídeo de demonstração do funcionamento completo do sistema:

 [Clique aqui para ver o vídeo](https://drive.google.com/file/d/1TqT2aSRMkJJRGtHbYceyf7MSGFc2dTHt/view?usp=sharing)
 

## Feedback dos colegas

&nbsp;A implementação do projeto foi avaliada pelos colegas Rafael e Nicole, que destacaram aspectos positivos tanto do código quanto do circuito desenvolvido. Ambos atribuíram nota máxima (10) à atividade, ressaltando que o funcionamento do semáforo foi claro, organizado e bem estruturado, demonstrando uma boa aplicação dos conceitos de programação e eletrônica.