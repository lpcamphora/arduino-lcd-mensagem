# arduino-lcd-mensagem

Este projeto Arduino exibe uma mensagem em um display LCD 16x2 utilizando a biblioteca `LiquidCrystal`.

## 🧰 Materiais utilizados

- 1x Placa Arduino UNO
- 1x Display LCD 16x2 (com ou sem módulo I2C)
- 1x Potenciômetro (se LCD sem I2C)
- 1x Protoboard
- Jumpers

## 💻 Código

O sketch `arduino-lcd-mensagem.ino` inicializa o display e mostra uma mensagem estática.  
Você pode adaptar para mostrar sensores, relógio, estados etc.

## 🚀 Como usar

1. Abra o código `.ino` na IDE do Arduino.
2. Selecione a placa correta: **Ferramentas > Placa > Arduino Uno**
3. Selecione a porta: **Ferramentas > Porta > COMx**
4. Faça o upload para a placa.
5. A mensagem aparecerá no display.

## 📦 Bibliotecas necessárias

Se estiver usando um LCD **com I2C**, instale:
```cpp
LiquidCrystal_I2C
