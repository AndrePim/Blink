#include <Arduino.h>

#define LED_PIN 13 // Светодиод подключён к 13 пину
#define BLINK_DELAY 1000 // Задержка 1000 мс

void setup() {
    pinMode(LED_PIN, OUTPUT); // Установка режима работы на выход
}

void loop() {
    digitalWrite(LED_PIN, HIGH); // Включение светодиода
    delay(BLINK_DELAY); // Светодиод горит 1с
    digitalWrite(LED_PIN, LOW); // Выключение светодиода
    delay(BLINK_DELAY); // Светодиод не горит 1с
}
