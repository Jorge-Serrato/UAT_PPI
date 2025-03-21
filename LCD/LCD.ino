/*

Práctica Manejo de LCD (Conexión Directa)
Programación de Interfaces y Puertos
2025
Objetivo: Conectar y controlar una pantalla LCD alfanumérica utilizando conexión directa con Arduino.
*/ 

    #include <LiquidCrystal.h>

    const int rs = 12, en = 11, d4 = 4, d5 = 8, d6 = 2, d7 = 6;
    LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

    void setup() {
      lcd.begin(16, 2); // Inicializa la pantalla LCD (16 columnas, 2 filas)
      lcd.print("Hola, mundo!"); // Muestra un mensaje en la pantalla
      lcd.setCursor(0, 1); // Coloca el cursor en la segunda filahl
      lcd.print("LCD directo");
    }

    void loop() {
      // No se hace nada en el bucle principal
    }