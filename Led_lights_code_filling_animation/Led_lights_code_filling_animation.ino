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
//animacija zalivanje

  //1. krog z 200ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(200);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(200);
  
  digitalWrite(modra_levo, HIGH);    
  delay(200);            
  digitalWrite(modra_sredina, HIGH);   
  delay(200);                    
  digitalWrite(modra_desno, HIGH);    
  delay(200); 

   //2. krog z 200ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(200);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(200);
  
  digitalWrite(modra_levo, HIGH);    
  delay(200);            
  digitalWrite(modra_sredina, HIGH);   
  delay(200);                    
  digitalWrite(modra_desno, HIGH);    
  delay(200); 

  //3. krog  z 100ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(100);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(100);
  
  digitalWrite(modra_levo, HIGH);    
  delay(100);            
  digitalWrite(modra_sredina, HIGH);   
  delay(100);                    
  digitalWrite(modra_desno, HIGH);    
  delay(100);

    //4. krog  z 100ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(100);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(100);
  
  digitalWrite(modra_levo, HIGH);    
  delay(100);            
  digitalWrite(modra_sredina, HIGH);   
  delay(100);                    
  digitalWrite(modra_desno, HIGH);    
  delay(100);

  //5. krog  z 100ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(100);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(100);
  
  digitalWrite(modra_levo, HIGH);    
  delay(100);            
  digitalWrite(modra_sredina, HIGH);   
  delay(100);                    
  digitalWrite(modra_desno, HIGH);    
  delay(100);

    //6. krog  z 100ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(100);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(100);
  
  digitalWrite(modra_levo, HIGH);    
  delay(100);            
  digitalWrite(modra_sredina, HIGH);   
  delay(100);                    
  digitalWrite(modra_desno, HIGH);    
  delay(100);

  //7. krog z 200ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(200);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(200);
  
  digitalWrite(modra_levo, HIGH);    
  delay(200);            
  digitalWrite(modra_sredina, HIGH);   
  delay(200);                    
  digitalWrite(modra_desno, HIGH);    
  delay(200);

 //8. krog z 200ms
  digitalWrite(modra_levo, HIGH);   
  digitalWrite(modra_sredina, HIGH);
  digitalWrite(modra_desno, HIGH);
  delay(200);               
 
  digitalWrite(modra_levo, LOW);  
  digitalWrite(modra_sredina, LOW);
  digitalWrite(modra_desno, LOW);   
  delay(200);
  
  digitalWrite(modra_levo, HIGH);    
  delay(200);            
  digitalWrite(modra_sredina, HIGH);   
  delay(200);                    
  digitalWrite(modra_desno, HIGH);    
  delay(200);

}

