# ♟️ Simulação de Movimentos de Peças de Xadrez em C

Projeto desenvolvido como parte do **Desafio de Programação - Nível Novato**, com foco na aplicação prática das estruturas de repetição `for`, `while` e `do-while` na linguagem C. O objetivo é simular os movimentos de três peças do jogo de xadrez: Torre, Bispo e Rainha.

## 👨‍🎓 Aluno Desenvolvedor

**Marcos Augusto do Couto**

## 🎯 Objetivo

Simular os movimentos das peças de xadrez utilizando estruturas de repetição diferentes para cada uma:

- **Torre**: movimento horizontal (direita) usando `for`
- **Bispo**: movimento diagonal (cima e direita) usando `while`
- **Rainha**: movimento horizontal (esquerda) usando `do-while`

## 🧩 Estrutura do Código

O código está contido em um único arquivo: `xadrez.c`.

Cada peça é simulada com uma estrutura de repetição específica:

| Peça   | Direção do Movimento        | Estrutura Usada |
|--------|-----------------------------|------------------|
| Torre  | 5 casas para a direita      | `for`            |
| Bispo  | 5 casas na diagonal superior direita | `while`          |
| Rainha | 8 casas para a esquerda     | `do-while`       |

## 📦 Como Executar

1. Clone o repositório:
   ```bash
   git clone https://github.com/seu-usuario/xadrez-simulacao.git
   cd xadrez-simulacao

