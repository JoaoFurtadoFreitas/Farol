#include <Wire.h>
#include <LiquidCrystal_I2C.h>


LiquidCrystal_I2C lcd(0x27, 21, 22);

// LEDs controlados via ponteiros
int ledVerde = 33;
int ledAmarelo = 25;
int ledVermelho = 26;

// Ponteiros
int* pVerde = &ledVerde;
int* pAmarelo = &ledAmarelo;
int* pVermelho = &ledVermelho;

// Tempos (em segundos)
const int tempoVerde = 5;
const int tempoAmarelo = 2;
const int tempoVermelho = 5;

void setup() {
  lcd.init();          // Inicializa o display
  lcd.backlight();     // Liga a luz de fundo

  pinMode(*pVerde, OUTPUT);
  pinMode(*pAmarelo, OUTPUT);
  pinMode(*pVermelho, OUTPUT);

  lcd.print("Farol iniciado");
  delay(1000);
  lcd.clear();
}

void loop() {
  // --- Verde ---
  digitalWrite(*pVerde, HIGH);
  lcd.clear();
  lcd.print("Farol: VERDE");
  lcd.setCursor(0, 1);
  lcd.print("Verde em: 0s");
  delay(tempoVerde * 1000);
  digitalWrite(*pVerde, LOW);

  // --- Amarelo ---
  digitalWrite(*pAmarelo, HIGH);
  lcd.clear();
  lcd.print("Farol: AMARELO");
  for (int i = tempoAmarelo; i > 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("Verde em: ");
    lcd.print(i + tempoVermelho);
    lcd.print("s   ");
    delay(1000);
  }
  digitalWrite(*pAmarelo, LOW);

  // --- Vermelho ---
  digitalWrite(*pVermelho, HIGH);
  lcd.clear();
  lcd.print("Farol: VERMELHO");
  for (int i = tempoVermelho; i > 0; i--) {
    lcd.setCursor(0, 1);
    lcd.print("Verde em: ");
    lcd.print(i);
    lcd.print("s   ");
    delay(1000);
  }
  digitalWrite(*pVermelho, LOW);
}
