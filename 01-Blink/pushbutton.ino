const int btn = 2;
int btnState = 0;

void setup(){
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(btn, INPUT);
}

void loop(){
  btnState = digitalRead(Botao); 

  digitalWrite(LED_BUILTIN, btnState);
}

