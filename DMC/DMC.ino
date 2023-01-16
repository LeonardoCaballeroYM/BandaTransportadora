const int ENABLE = 11;
const int INP1 = 10;
const int INP2 = 9;
const int INP3 = 8;
const int BOTON_A = 7;
const int BOTON_B = 2;
const int BOTON_C = 6;


void setup() {
  // Inicializamos los pines del chip como salida:
  pinMode(ENABLE, OUTPUT);
  pinMode(INP1, OUTPUT);
  pinMode(INP2, OUTPUT);
   pinMode(INP3, OUTPUT);
  // Inicializamos los pines de los botones como entrada:
  pinMode(BOTON_A, INPUT);
  pinMode(BOTON_B, INPUT);
  pinMode(BOTON_C, INPUT);
  
}

void loop() {
  if(digitalRead(BOTON_A) == HIGH) {   // Si el botón A está pulsado
    digitalWrite(INP1, HIGH);         // Activa INP1
    digitalWrite(ENABLE, HIGH);       // Activa el pin ENABLE
    
  } else (digitalRead(BOTON_B) == HIGH) { // Si en lugar del botón A, está pulsado el botón B
    digitalWrite(INP2, HIGH);         // Activa INP2
    digitalWrite(ENABLE, HIGH);       // Activa el pin ENABLE
    
     else(digitalRead(BOTON_C) == HIGH) { // Si en lugar del botón A, está pulsado el botón B
    digitalWrite(INP3, HIGH);         // Activa INP2
    digitalWrite(ENABLE, HIGH);       // Activa el pin ENABLE
    
  } else {                            // De lo contrario, desactívalo todo
   
    digitalWrite(INP3, LOW);
    digitalWrite(ENABLE, LOW);
  }
}
