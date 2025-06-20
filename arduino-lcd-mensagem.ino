#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Hello, Luiz!");
  delay(1000); // Aguarda 1 segundo antes de começar a rolar
}

void loop() {
  lcd.scrollDisplayLeft();  // Move o texto uma posição à esquerda
  delay(300);               // Intervalo entre cada movimento (ajuste se quiser mais rápido ou lento)
}
