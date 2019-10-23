#include "rom.h"
#include "TMS1000.h"

#define K1 A0
#define K2 A1
#define K4 A2
#define K8 A3

#define O6 3

#define R0 4
#define R1 5
#define R2 6
#define R3 7

// Buttons connected to K1-K8
void inputKCallback() {
      TMS1000::g_cpu.K = (PINC & 15) ^ 15;
}

// LED connected to R0-R3
void outputRCallback(TMS1000::BYTE pin, bool state) {
  digitalWrite(R0+pin, state);
}

void outputOCallback(TMS1000::BYTE val) {
  digitalWrite(O6, val & 8);
}

void setup() {
  pinMode(K1, INPUT_PULLUP);
  pinMode(K2, INPUT_PULLUP);
  pinMode(K4, INPUT_PULLUP);
  pinMode(K8, INPUT_PULLUP);  

  pinMode(R0, OUTPUT);
  pinMode(R1, OUTPUT);
  pinMode(R2, OUTPUT);
  pinMode(R3, OUTPUT);

  pinMode(O6, OUTPUT);
   
  TMS1000::Init(TMS1000::CPU_TMS1700, 512, 32); 
  TMS1000::SetInputKCallback(inputKCallback);
  TMS1000::SetOutputOCallback(outputOCallback);
  TMS1000::SetOutputRCallback(outputRCallback);
  TMS1000::g_memory.ROM = rom;
  TMS1000::Reset();
}

void loop() {
  TMS1000::Step();
  delayMicroseconds(10);
}
