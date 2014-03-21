/*

Grove LED : http://www.seeedstudio.com/wiki/Grove_-_LED

*/

#define LED  2

int incomingByte = 0;
 
void setup() {
    pinMode(LED, OUTPUT);
     
    Serial.begin(38400);
    Serial.println("Appuyer sur A pour ALLUMER la DEL");
    Serial.println("Appuyer sur E pour ETEINDRE la DEL");
}
 
void loop() {
    if (Serial.available() > 0) {
        incomingByte = Serial.read();
     
        if(incomingByte == 'A'){
            digitalWrite(LED, HIGH);
            Serial.println("ALLUMER");
        }else if(incomingByte == 'E'){
            digitalWrite(LED, LOW);
            Serial.println("ETEINDRE");
        }else{
            Serial.println("Invalide !");
        }
       
    }
}
