# 🏧 Caixa Eletrônico em C

Um sistema de simulação de Caixa Eletrônico (ATM) desenvolvido em linguagem C para praticar conceitos de lógica de programação, estruturas de repetição, condicionais e manipulação de variáveis.

## 🚀 Funcionalidades

O programa roda diretamente no terminal e oferece as seguintes operações:
*   **Consulta de Saldo:** Exibe o saldo atual disponível na conta corrente.
*   **Saque Inteligente:** Permite retirar valores validando limites e calculando a menor quantidade possível de cédulas a serem entregues.
*   **Distribuição de Notas:** Suporta cédulas de R$ 100, R$ 50, R$ 20, R$ 10 e R$ 5.

### 🛡️ Validações do Sistema
*   Impede saques de valores negativos ou zerados.
*   Verifica se há saldo suficiente antes de efetuar a transação.
*   Garante que o valor solicitado seja compatível com as notas disponíveis (múltiplos de 5).

## 🛠️ Tecnologias Utilizadas

*   **Linguagem:** C
*   **Bibliotecas:** `stdio.h`

## 💻 Como Executar o Projeto

Certifique-se de ter um compilador de C instalado (como o `gcc`).

1. **Clone o repositório:**
   ```bash
   git clone https://github.com
   ```

2. **Acesse a pasta do projeto:**
   ```bash
   cd NOME_DO_REPOSITORIO
   ```

3. **Compile o código:**
   ```bash
   gcc main.c -o caixa_eletronico
   ```

4. **Execute o programa:**
   * No Linux/macOS:
     ```bash
     ./caixa_eletronico
     ```
   * No Windows:
     ```bash
     caixa_eletronico.exe
     ```

---
Desenvolvido por [Rafael Sterzinger Silva](https://github.com) 💻
