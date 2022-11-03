int porta_1 = 2;
int porta_2 = 3;
int sinal_1 = 10;
int sinal_2 = 11;
int test = 5;


void setup() {
  Serial.begin(9600);
pinMode(porta_1, OUTPUT);  
pinMode(porta_2, OUTPUT);
pinMode(sinal_1, INPUT);
pinMode(sinal_2, INPUT);
pinMode(test, INPUT); 

}

void loop() {
  if (Serial.available()){ 
 
 
char leitura = Serial.read();
  switch (leitura) 
  {
    case  '1':
    RELE(porta_1);
    break;
    case  '2':
    RELE(porta_2);
    break;
    case '3':
    frequencia(sinal_1);
    break;
    case '4':
    frequencia(sinal_2);
    break;
    case '5':
    sinal(test);
    break;
   
  }  
 }
}

void RELE(int pino){
  
   digitalWrite(pino, LOW);
  delay(1000);
  
   Serial.println("Ligado"); 
  digitalWrite(pino, HIGH);
  delay(1000);
  
  digitalWrite(pino, LOW);
Serial.println("Desligado");
}

void frequencia(int pin)
{ 

 char aux = digitalRead(pin);
  
  if (pin, aux == HIGH){
 Serial.println("PASS");
 }
 
  else{
    Serial.println("FAIL");
    } 
  }

void sinal(int teste){
  
  char vol = digitalRead(teste);
  
  if (teste, vol == HIGH){
  Serial.println("EM TESTE");   
}
else{
  Serial.println("FIM");  
  }
}

 
  
