#define ONE_SECOND 1000 

//define pin constants
  int const EW_RED = 10;
  int const EW_YELLOW = 9;
  int const EW_GREEN = 8;
  int const NS_RED = 7;
  int const NS_YELLOW = 6;
  int const NS_GREEN = 5;

//define light status arrays and light location
  int const GREEN_LIGHT[] = {HIGH,LOW,LOW};
  int const YELLOW_LIGHT[] = {LOW,HIGH,LOW};
  int const RED_LIGHT[] = {LOW,LOW,HIGH};
  int const GREEN_STATUS = 0;
  int const YELLOW_STATUS = 1;
  int const RED_STATUS = 2;

//setup led pins as output
void setup() {
    pinMode(EW_RED, OUTPUT);
    pinMode(EW_YELLOW, OUTPUT);
    pinMode(EW_GREEN, OUTPUT);
  
  	pinMode(NS_RED, OUTPUT);
    pinMode(NS_YELLOW, OUTPUT);
    pinMode(NS_GREEN, OUTPUT);
}

//turn EW lights on and off accroding to the light_status array
void setLights_EW(int const light_status[]){
    digitalWrite(EW_GREEN, light_status[GREEN_STATUS]);
    digitalWrite(EW_YELLOW, light_status[YELLOW_STATUS]);
    digitalWrite(EW_RED, light_status[RED_STATUS]);
}

//turn NS lights on and off accroding to the light_status array
void setLights_NS(int const light_status[]){
    digitalWrite(NS_GREEN, light_status[GREEN_STATUS]);
    digitalWrite(NS_YELLOW, light_status[YELLOW_STATUS]);
    digitalWrite(NS_RED, light_status[RED_STATUS]);
}

//Controls the lights using predefined timing provided in E1 handout        
void loop(){ 
  //first line of the table in E1 handout
    setLights_EW(GREEN_LIGHT);
    setLights_NS(RED_LIGHT);
    delay(5*ONE_SECOND);
  
  //second line
    setLights_EW(YELLOW_LIGHT);
    setLights_NS(RED_LIGHT);
    delay(2*ONE_SECOND);
  
  //third line
    setLights_EW(RED_LIGHT);
    setLights_NS(RED_LIGHT);
    delay(1*ONE_SECOND);
  
  //fourth line
    setLights_EW(RED_LIGHT);
    setLights_NS(GREEN_LIGHT);
    delay(4*ONE_SECOND);
  
  //fifth line
    setLights_EW(RED_LIGHT);
    setLights_NS(YELLOW_LIGHT);
    delay(2*ONE_SECOND);
  
  //sixth line
    setLights_EW(RED_LIGHT);
    setLights_NS(RED_LIGHT);
    delay(1*ONE_SECOND);
}