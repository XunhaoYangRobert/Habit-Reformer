#include <SoftwareSerial.h>
    SoftwareSerial BluetoothSerial(8, 9); // RX, TX
    char value;       //for transisting data
    int fsrPin = 0; // the FSR and 10K pulldown are connected to a0
    int fsrReading;
    void setup() {
        //open serial connection
        Serial.begin(9600);
        while (!Serial) {
            ; // waiting for serial connection。
        }
        Serial.println("Serial Connected!");

        
        BluetoothSerial.begin(9600);
    }

    void loop() { // loop
            fsrReading = analogRead(0);
            BluetoothSerial.write(fsrReading);//processor to blutooth
            delay(1000);
        

    }
