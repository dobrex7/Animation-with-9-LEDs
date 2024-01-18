//definiramo vhode led luck
int modra_levo = 4;
int modra_sredina = 3;
int modra_desno = 2;

void setup() {               
  // inicializiramo lucke kot output
  pinMode(modra_levo, OUTPUT);
  pinMode(modra_sredina, OUTPUT);
  pinMode(modra_desno, OUTPUT); 
}
void loop() {
  // prizgemo vse lucke za 1 sekundo
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(1000);      

  // ugasnemo vse lucke za sekundo
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);  
  delay(1000);               
}

