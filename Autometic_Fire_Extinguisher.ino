
const int flamePin = A1;  
const int buzzerPin = 12; 
const int relayPin = 13;  
const int ledPin = 9;     

int flameValue = 0;       

void setup() { 
    pinMode(flamePin, INPUT);     
    pinMode(buzzerPin, OUTPUT);   
    pinMode(relayPin, OUTPUT);    
    pinMode(ledPin, OUTPUT);      
    Serial.begin(9600);           
}

void loop() {
    flameValue = digitalRead(flamePin); 

    if (flameValue == HIGH) { 
        Serial.println("Flame Detected!");  
        Serial.print("Flame Value: ");
        Serial.println(flameValue);

        digitalWrite(buzzerPin, HIGH); 
        digitalWrite(relayPin, HIGH); 
        digitalWrite(ledPin, LOW);     
    }
    else { 
        Serial.println("No Flame Detected");
        Serial.print("Flame Value: ");
        Serial.println(flameValue);

        digitalWrite(buzzerPin, LOW);  
        digitalWrite(relayPin, LOW);   
        digitalWrite(ledPin, HIGH);    
    }

    delay(500); 
}
