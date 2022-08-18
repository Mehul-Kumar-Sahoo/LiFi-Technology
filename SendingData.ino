String data = "";  
int led = 11;

void setup()   
{  
    Serial.begin(9600);
    pinMode(led, OUTPUT);
}  
  
void loop()   
{  
//    digitalWrite(led, HIGH);
    Serial.println("Enter the data for tranfer - ");  
    while (Serial.available() == 0){}  
    data = Serial.readString();
    Serial.println("-------------------------");
    Serial.println("Data To Be Transferred:" + data);    
    
    for(int i=0; i<data.length() - 1; i++){
        char myChar = data.charAt(i);
        digitalWrite(led, HIGH);
        delay(100);
        for(int i=7; i>=0; i--){
            byte bytes = bitRead(myChar,i);
            Serial.print(bytes, BIN);
            if(bytes == 0){
                digitalWrite(led, LOW);
                delay(100);
            } else{
                digitalWrite(led, HIGH);
                delay(100);
            }
        }
        Serial.println("");
    }
    digitalWrite(led, LOW);
    delay(100);
}
