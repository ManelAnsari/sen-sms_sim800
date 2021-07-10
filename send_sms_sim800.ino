
  #include <SoftwareSerial.h>
SoftwareSerial sim808(10, 11);

char phone_no[] = "+216xxxxxxxxx; //
void setup() {
  sim808.begin(9600);
  Serial.begin(9600);
  Serial.println("sending sms");
  sim808.print("AT+CMGS=\"");
  sim808.print(phone_no);
  sim808.println("\"");

  delay(300);

  sim808.print("heeeeeeeelllloooooooooo");
  delay(200);
  sim808.println((char)26); // End AT command with a ^Z, ASCII code 26
  delay(200);
  sim808.println();
  Serial.println("sms teb3eth");
}

void loop() {


}
 
