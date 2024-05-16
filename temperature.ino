#define BUZZER_PIN 6
#define TEMP_PIN A0
#define GAS_PIN A1
#define LED_PIN 7

void setup(){
  pinMode(BUZZER_PIN,OUTPUT);
  pinMode(LED_PIN,OUTPUT);
  pinMode(TEMP_PIN,INPUT);
  pinMode(GAS_PIN,INPUT);
}
 
void loop(){
  int temp=analogRead(A0);
  int air=analogRead(A1);  
  if(temp>60 && air>=250){
    digitalWrite(BUZZER_PIN,400);
    digitalWrite(LED_PIN,HIGH);
  }
  else{
    digitalWrite(BUZZER_PIN,LOW);
    digitalWrite(LED_PIN,LOW);
  } 
  }
