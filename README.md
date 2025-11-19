# 🎮 Super Trunfo - Jogo de Cartas
Sistema de comparação de cartas de países com múltiplos níveis de complexidade.
## 📁 Estrutura do Projeto
```
super_trunfo_tema2/
├── .vscode/              # Configurações do VS Code
├── aventureiro.c         # Nível intermediário (menu interativo)
├── mestre.c             # Nível avançado (2 atributos)
├── super_trunfo.c       # Implementação base
└── README.md            # Este arquivo
```
##🎯 Níveis de Jogo
### 🥉 Nível Básico - super_trunfo.c

Sistema fundamental de cadastro de cartas
Comparação básica de atributos
Base para os níveis avançados

### 🥈 Nível Aventureiro - aventureiro.c

Menu interativo com sistema de escolha
Jogador seleciona 1 atributo para comparação
Implementação com switch/case
Cálculo de densidade populacional e PIB per capita
Interface amigável no terminal

### 🥇 Nível Mestre - mestre.c

Comparação com 2 atributos simultâneos
Menu dinâmico (oculta opção já escolhida)
Sistema de pontuação por soma
Uso de operador ternário
Lógica avançada de comparação

## 🃏 Atributos das CartasAtributoRegraExemploPopulaçãoMaior vence214.000.000 habÁreaMaior vence8.515.767 km²PIBMaior vence2.055 bilhõesPontos TurísticosMaior vence100 pontosDensidade⚠️ Menor vence25.13 hab/km²
🚀 Como Compilar
bash# Compilar o nível básico
gcc super_trunfo.c -o super_trunfo

# Compilar o nível aventureiro
gcc aventureiro.c -o aventureiro

# Compilar o nível mestre
gcc mestre.c -o mestre
## ▶️ Como Executar
```bash
bash# Executar nível básico
./super_trunfo

# Executar nível aventureiro
./aventureiro

# Executar nível mestre
./mestre
```

## 💡 Exemplo de Uso - Nível Mestre
```
╔════════════════════════════════════════╗
║     🎮 SUPER TRUNFO - NÍVEL MESTRE     ║
║          Comparação de Países          ║
╚════════════════════════════════════════╝

╔════════════════════════════════════════╗
║   ESCOLHA O PRIMEIRO ATRIBUTO          ║
╚════════════════════════════════════════╝
1. 🏙️  População
2. 🗺️  Área (km²)
3. 💰 PIB
4. 🏛️  Pontos Turísticos
5. 📊 Densidade Demográfica
════════════════════════════════════════
Escolha (1-5): 1

╔════════════════════════════════════════╗
║   ESCOLHA O SEGUNDO ATRIBUTO           ║
╚════════════════════════════════════════╝
2. 🗺️  Área (km²)
3. 💰 PIB
4. 🏛️  Pontos Turísticos
5. 📊 Densidade Demográfica
════════════════════════════════════════
Escolha (diferente de 1): 3

📊 RESULTADO DA COMPARAÇÃO:
─────────────────────────────────────
Brasil venceu em População!
Brasil venceu em PIB!

🏆 VENCEDOR FINAL: Brasil!
```

## 🔧 Tecnologias Utilizadas
Linguagem: C
Estruturas: switch, if-else, operador ternário
Compilador: GCC
## 👤 Autor
Bárbara Galdino

## 📄 Licença
Projeto educacional - Livre para uso acadêmico
