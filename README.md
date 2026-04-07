# 💻 2026.1 - Exercícios de C++

Aqui ficarão organizados os exercícios de Programação feitos em C++.

Este repositório serve como um portfólio de aprendizado, cobrindo desde conceitos básicos de entrada e saída de dados até a manipulação de estruturas mais complexas e, futuramente, Programação Orientada a Objetos (POO).

---

## 📘 Capítulo 1 - Fundamentos da Programação Estruturada

Neste primeiro capítulo, os exercícios focam na lógica de programação estruturada, utilizando C++ para resolver problemas fundamentais, criar loops, manipular vetores, matrizes, strings e structs.

<details>
<summary><strong>Lista 01 - Variáveis e Expressões</strong></summary><br>

-    **1.** Escreva um programa que leia dois números inteiros fornecidos pelo usuário, calcule a soma desses números e exiba o resultado de forma clara e explicativa na tela.
-    **2.** Crie um programa que leia um número decimal (do tipo `double`) e mostre esse número formatado com exatamente três casas decimais na saída. Use manipuladores de fluxo para garantir a formatação.
-    **3.** Desenvolva um programa que peça ao usuário a quantidade de dias e, usando uma constante que represente o número de horas em um dia, calcule e exiba quantos segundos existem no total desse período informado.
-    **4.** Faça um programa que leia o valor do raio de um círculo (tipo `float`), utilize uma constante para armazenar o valor de $\pi$ (pi) e calcule a área do círculo. Apresente o resultado com duas casas decimais.
-    **5.** Escreva um programa que receba um único caractere do usuário e exiba o código ASCII correspondente a esse caractere na saída.
-    **6.** Crie um programa que solicite ao usuário três números inteiros, calcule a média aritmética desses valores e mostre o resultado com duas casas decimais.
-    **7.** Elabore um programa que receba um número inteiro do usuário e exiba o seu valor elevado ao quadrado.
-    **8.** Faça um programa que leia um número inteiro e mostre o resultado da divisão desse número por 2, demonstrando tanto a divisão inteira quanto a divisão real (ponto flutuante).
-    **9.** Crie um programa que leia um número inteiro e mostre na tela o seu antecessor e seu sucessor.
-    **10.** Faça um programa que receba a temperatura em graus Celsius e converta para Fahrenheit, exibindo o resultado com uma casa decimal. A fórmula para conversão é: `F = C * 9/5 + 32`.
</details>

<details>
<summary><strong>Lista 02 - Estruturas Condicionais</strong></summary><br>

-    **1.** Faça um programa que leia um número inteiro e informe se ele é positivo (maior que zero). Caso contrário, não precisa imprimir nada.
-    **2.** Escreva um programa que receba um número inteiro e informe se ele é par. Se for par, exiba "Número par". Caso contrário, não exiba nada.
-    **3.** Crie um programa que receba um número inteiro e informe se ele é positivo ou negativo. Não é necessário tratar o caso do zero.
-    **4.** Faça um programa que leia um número inteiro e informe se ele é múltiplo de 5 ou não.
-    **5.** Desenvolva um programa que leia a idade de uma pessoa e informe se ela é menor de idade (menos de 18 anos) ou maior de idade (18 anos ou mais).
-    **6.** Faça um programa que leia três números inteiros e informe qual deles é o maior.
-    **7.** Crie um programa que leia a nota de um aluno e informe se ele foi aprovado (nota maior ou igual a 60), reprovado (nota menor que 40) ou se está de recuperação (nota entre 40 e 59).
-    **8.** Faça um programa que leia o ano de nascimento de uma pessoa e informe se ela já pode votar (idade mínima 16 anos) ou não.
-    **9.** Desenvolva um programa que receba três números inteiros e informe se eles formam um triângulo válido segundo a regra: a soma de dois lados sempre deve ser maior que o terceiro.
-    **10.** Escreva um programa que leia um número inteiro e informe se ele é positivo, negativo ou zero, utilizando estruturas condicionais aninhadas.
-    **11.** Crie um programa que leia um número inteiro de 1 a 7 e exiba o nome correspondente ao dia da semana (1 = Domingo, 2 = Segunda-feira, etc.). Caso o número não esteja entre 1 e 7, exiba uma mensagem de erro.
-    **12.** Faça um programa que leia um caractere representando uma vogal (a, e, i, o, u) e exiba uma mensagem confirmando qual vogal foi digitada. Caso seja uma consoante ou outro caractere, informe que não é vogal.
-    **13.** Desenvolva um programa que leia um código de operação (1 para soma, 2 para subtração, 3 para multiplicação, 4 para divisão), leia dois números e execute a operação correspondente, exibindo o resultado. Caso o código seja inválido, exiba uma mensagem de erro.
-    **14.** Escreva um programa que leia um número inteiro entre 1 e 12 e exiba o nome do mês correspondente (1 = Janeiro, 2 = Fevereiro, etc.). Caso o número esteja fora desse intervalo, informe que é inválido.
-    **15.** Faça um programa que receba um caractere representando uma operação matemática básica (`+`, `-`, `*`, `/`) e exiba uma mensagem descrevendo a operação escolhida. Para qualquer outro caractere, informe que é inválido.
</details>

<details>
<summary><strong>Lista 03 - Estruturas de Repetição</strong></summary><br>

-    **1.** Escreva um programa que use `for` para imprimir todos os números pares de 2 até 20, inclusive.
-    **2.** Peça ao usuário um número N e use `for` para calcular e exibir a soma de todos os números naturais de 1 até N.
-    **3.** Use `for` aninhado para gerar e exibir a tabuada completa de 1 a 10.
-    **4.** Faça um programa que peça números ao usuário até que ele digite um número negativo. Ao final, exiba a quantidade de números positivos digitados.
-    **5.** Desenvolva um programa em C++ que implemente um menu interativo utilizando a estrutura de repetição `do-while`. O menu deve exibir uma lista de opções para o usuário (olá, tchau e sair), e após cada escolha válida (exceto a opção de sair), o menu deve ser exibido novamente automaticamente. O programa só deve terminar quando o usuário digitar a opção 0 (sair).
-    **6.** Peça ao usuário um número inteiro `n` e use `for` aninhado para imprimir um triângulo de asteriscos com `n` linhas.
-    **7.** O programa deve garantir que o número de repetições `n` seja maior que 0 (usando `do-while`), e depois usar `while` para ler `n` números e somá-los.
-    **8.** O programa deve permitir calcular a média de notas de uma turma. A cada execução, o usuário informa a quantidade de alunos. Depois, insere as notas e vê a média. O menu repete até que o usuário digite 0 para sair.
-    **9.** Crie um programa em C++ que leia 5 números inteiros do usuário, armazene em um vetor e depois calcule e exiba a soma de todos os elementos usando `for-each`.
-    **10.** Crie um programa que leia 10 números inteiros e conte quantos deles são positivos, utilizando `for-each`.
-    **11.** Faça um programa que leia 6 números reais, armazene em um vetor, e exiba a média deles usando `for-each`.
-    **12.** Faça um programa que leia 8 números inteiros, armazene em um vetor e exiba quantos deles são pares, usando `for-each`.
</details>

<details>
<summary><strong>Lista 04 - Vetores e Matrizes</strong></summary><br>

-  **1.** Escreva um programa que leia 10 números reais e os armazene em um vetor. Em seguida, calcule e exiba a soma de todos os valores positivos.
-    **2.** Faça um programa que leia 5 números inteiros e os armazene em um vetor. Em seguida, exiba os valores na ordem inversa à da entrada.
-    **3.** Escreva um programa que leia 15 números inteiros em um vetor e exiba quantos deles são ímpares.
-    **4.** Leia 8 números reais em um vetor, calcule a média aritmética dos valores e exiba quantos deles estão acima da média.
-    **5.** Crie um programa que leia 10 números entre 0 e 9 e mostre quantas vezes cada número apareceu.
-    **6.** Crie dois vetores de 5 elementos inteiros e calcule o produto escalar entre eles. Exiba o resultado.
-    **7.** Leia 12 números reais. Substitua todos os valores negativos por zero e exiba o vetor resultante.
-    **8.** Crie uma matriz 3x3 de inteiros. Leia os valores do usuário e exiba a soma total de todos os elementos.
-    **9.** Crie um programa que leia uma matriz 3x3 de inteiros e verifique se ela é simétrica (`A[i][j] == A[j][i]`).
-    **10.** Crie uma matriz 4x4 de inteiros e calcule a soma dos elementos da diagonal principal.
-    **11.** Faça um programa que leia 10 números inteiros do usuário e armazene-os em um `vector<int>`. Em seguida, calcule e exiba a soma de todos os números positivos inseridos.
-    **12.** Crie um programa que leia 8 números inteiros em um `vector<int>` e depois peça ao usuário um número a ser buscado. Informe se o número está presente ou não no vetor.
-    **13.** Escreva um programa que leia números reais em um `vector<float>` até que o usuário digite um valor negativo. Ao final, exiba a média dos valores lidos (desconsidere o negativo).
</details>

<details>
<summary><strong>Lista 05 - Strings e Structs</strong></summary><br>

-    **1.** Leia um nome completo e exiba a quantidade de caracteres (sem contar espaços). Usar função `getline`.
-    **2.** Leia uma palavra e exiba-a ao contrário.
-    **3.** Leia uma palavra e verifique se é um palíndromo.
-    **4.** Leia uma frase e conte quantas vogais possui. Use a função `getline` e `tolower`.
-    **5.** Leia uma frase e substitua todos os espaços por underline. Usar função `getline` e `for-each`.
-    **6.** Leia duas strings e verifique se são iguais (sem usar `==`). Usar funções `getline` e `length`.
-    **7.** Leia uma frase e conte quantas palavras ela possui. Usar `getline`.
-    **8.** Crie uma `struct` Pessoa com nome e idade, leia os dados e exiba formatado. Usar `getline`.
-    **9.** Leia os dados de 3 alunos (nome e nota) e exiba os que tiraram nota >= 7. Usar função `getline` e `cin.ignore`.
-    **10.** Crie uma `struct` Produto com nome, preço e quantidade. Calcule e exiba o valor total em estoque. Usar função `getline`.
</details>

<details>
<summary><strong>Lista 06 - Funções</strong></summary><br>

-  **1.**  Crie uma função que receba um número inteiro e retorne seu quadrado. O programa deve solicitar um número ao usuário e exibir o resultado do quadrado.
-    **2.** Implemente uma função que converta temperaturas de Celsius para Fahrenheit. O usuário digita a temperatura em Celsius e o programa exibe o valor em Fahrenheit.
-    **3.** Crie uma função que receba duas notas e retorne a média. O usuário informa duas notas e o programa mostra a média final.
-    **4.** Faça uma função que verifique se um número é par. O programa deve informar ao usuário se o número digitado é par ou ímpar.
-    **5.** Crie uma `struct` Pessoa com nome e idade, e um método que exiba uma saudação personalizada. Leia os dados de uma pessoa, e use o método para exibir a mensagem.
-    **6.** Crie uma função que dobre o valor de um número inteiro usando passagem por referência.
-    **7.** Crie uma função que troque os valores de duas variáveis usando passagem por referência.
-    **8.** Uma função deve calcular a média de 3 valores e armazenar o resultado em uma variável passada por referência.
-    **9.** Faça uma função que receba um número inteiro e incremente ele em 1 (por referência).
-    **10.** Crie uma `struct` ContaBancaria com titular e saldo. A `struct` deve ter um método para depósito. Leia os dados, deposite um valor usando uma função com passagem por referência e exiba o saldo final.
</details>

## 📘 Capítulo 2 - Programação Orientada a Objetos

<details>
<summary><strong>Lista 01 - Classes, Objetos, Atributos e Métodos </strong></summary><br>


-  **1.**  Crie uma classe Retangulo com atributos largura e altura e um método que calcule a área. No main, leia os valores e mostre o resultado.
-  **2.**  Crie uma classe Aluno com atributos nome e nota. Crie um método que exiba se o aluno está aprovado (nota >= 6) ou reprovado. Pesquise função de entrada de dados na biblioteca <string>.
-  **3.**  Crie uma classe Produto com atributos nome, preco e quantidade. Crie um método que calcule o valor total em estoque.
-  **4.**  Crie uma classe Carro com atributos marca e velocidade. Crie métodos para acelerar (aumentar a velocidade) e frear (diminuir a velocidade).
-  **5.**  Crie uma classe Conversor com um método estático converter que recebe um valor em dólares e uma taxa de conversão, e retorna o valor em reais.
-  **6.**  Crie uma classe Conversor com atributos valor e taxa. Adicione um método estático converter que recebe valor e taxa e retorna o valor convertido. No main, peça ao usuário o valor e a taxa, e mostre o valor convertido usando o método estático.
-  **7.**  Crie uma classe Temperatura com atributos cidade e valor (Celsius) e um método estático celsiusParaFahrenheit. No main, leia a cidade e a temperatura e mostre o valor em Fahrenheit.
