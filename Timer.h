
void timer5PinSetup();
uint8_t timer5ParamSet(uint16_t bpm);
void timer5Init();
void  timer5Mute();
void timer5Play();
int8_t rdDetect();

void timer3Init();
void timer3Off();
uint8_t timer3Overflow();
void timer3OverflowClear();

extern uint16_t halfPeriod ;
extern uint32_t count;
extern uint8_t cpmsTop ; 
extern uint8_t cpmsBtm ;

extern volatile uint16_t inputDiff ;
extern volatile uint8_t missInput ; 
#define MAXdiffms 120
extern uint16_t prefectZone;

extern volatile uint16_t beatNumber;
#define LOGSize 5000
extern volatile uint8_t logArray[LOGSize];
extern volatile uint16_t logIndex ;


