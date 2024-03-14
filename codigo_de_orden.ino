//PINES DE LOS BOTONES
#define button1 8
#define button2 9
#define button3 10

//VARIABLES
volatile String array = "";
volatile bool pulso1 = false;
volatile bool pulso2 = false;
volatile bool pulso3 = false;

//FUNCION AGREGAR CARACTER
void agregarCaracter(char caracter) {
  array += caracter;
}

//FUNCIONES DE INTERRUPCION

//void IRAM_ATTR interrupcionPulsador
void interrupcionPulsador1() {
  pulso1 = true;
  agregarCaracter("A");
}

void interrupcionPulsador2() {
  pulso2 = true;
  agregarCaracter("B");
}

void interrupcionPulsador3() {
  pulso3 = true;
  agregarCaracter("C");
}

void setup() {

  //PIN MODES
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);

  //INTERRUPCIONES
  attatchInterrupt(digitalPinToInterrupt(button1), interrupcionPulsador1, FALLING);
  attatchInterrupt(digitalPinToInterrupt(button2), interrupcionPulsador2, FALLING);
  attatchInterrupt(digitalPinToInterrupt(button3), interrupcionPulsador3, FALLING);

  Serial.begin(9600);
}

void loop() {
  Serial.println(array);
}