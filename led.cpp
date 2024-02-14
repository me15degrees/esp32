#include "BluetoothSerial.h"

#if !defined(CONFIG_BT_ENABLED) || !defined(CONFIG_BLUEDROID_ENABLED)
#error Bluetooth is not enabled! Please run 'make menuconfig' to and enable it
#endif

BluetoothSerial SerialBT;

char valorRecebido;

void setup() {
    Serial.begin(115200);
    SerialBT.begin("bluetooth_led");
    Serial.println("Dispositivo visível");

    pinMode(13, OUTPUT);
}

void loop() {
    if (SerialBT.available()) {
        valorRecebido = (char)SerialBT.read();
        
        if (valorRecebido == '1') {
            SerialBT.println("LED 1 Ligado");
            digitalWrite(13, HIGH);
        } else if (valorRecebido == '2') {
            SerialBT.println("LED 1 Desligado");
            digitalWrite(13, LOW);
        }
    }
    delay(50);
}
