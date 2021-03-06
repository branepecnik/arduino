#include <TaskManager.h>
#include "Button.h"

const unsigned long R_VentLow  =26;
const unsigned long R_TalGret  =27;
const unsigned long R_Luc  =28;
const unsigned long R_Led  =29;
const unsigned long R_Infra  =30;
const unsigned long R_Pec  =31;
const unsigned long R_Vent  =32;
const unsigned long R_Vent_WC  =33;     
const unsigned long R_Roleta_Gor  =34;
const unsigned long R_Roleta_Dol  =35;
const unsigned long R_SplakMG  =36;
const unsigned long R_SplakMD  =37;
const unsigned long R_SplakVG  =38;
const unsigned long R_SplakVD  =39;
const unsigned long R_Pisoar  =40;


Hardware::Button T_VentLow = Hardware::Button(42);
Hardware::Button *T_TalGretje = new Hardware::Button(43, false);
Hardware::Button *T_Luc = new Hardware::Button(44, false);
Hardware::Button *T_Led = new Hardware::Button(45, false);
Hardware::Button *T_Infra = new Hardware::Button(46, false);
Hardware::Button *T_Pec = new Hardware::Button(47, false);
Hardware::Button *T_Vent = new Hardware::Button(48, false);
Hardware::Button *T_VentWC = new Hardware::Button(49, false);
Hardware::Button *T_RoletaG = new Hardware::Button(50, false);
Hardware::Button *T_RoletaD = new Hardware::Button(51, false);
Hardware::Button *T_SplakMali = new Hardware::Button(52, false);
Hardware::Button *T_SplakVeliki = new Hardware::Button(53, false);
Hardware::Button *T_Pisoar = new Hardware::Button(41, false);

int globalgumb=0;
int globalcount=0;
unsigned long startT=0;
unsigned long startT1=0;
unsigned long startT2=0;
unsigned long startT3=0;
unsigned long startT4=0;
unsigned long startT5=0;
unsigned long startT6=0;
unsigned long startT7=0;
unsigned long startT8=0;
unsigned long startT9=0;
unsigned long startT10=0;
unsigned long startT11=0;
unsigned long startT12=0;
unsigned long startT13=0;
unsigned long startT14=0;
 unsigned long Tipka1_nx;
 unsigned long Tipka2_nx;
 unsigned long Tipka3_nx;
 unsigned long Tipka4_nx;
 unsigned long Tipka5_nx;
 unsigned long Tipka6_nx;
 unsigned long Tipka7_nx;
 unsigned long Tipka8_nx;
 unsigned long Tipka9_nx;
 unsigned long Tipka10_nx;
 unsigned long Tipka11_nx;
 unsigned long Tipka12_nx;
 unsigned long Tipka13_nx;
 unsigned long Tipka14_nx;
 unsigned long Tipka15_nx;

 bool ugasnil_V =false;
 bool ugasnil_M =false;
 

void onPress(Hardware::Button& sender)
{
  globalcount=1;
  globalgumb=sender.id;
}

void onLongPress(Hardware::Button& sender)
{
  globalgumb = sender.id;
  globalcount=0;
}

void onMultiplePress(Hardware::Button& sender)
{
  globalcount=sender.pressCount;
  globalgumb=sender.id;
}

void onLongPressing(Hardware::Button& sender)
{
//  Serial.print(" onLongPressing ");
//  Serial.println(sender.id);
}

void setup() {
  Serial.begin(57600);

  T_VentLow.id = 1;
T_TalGretje->id = 2;
T_Luc->id = 3;
T_Led->id = 4;
T_Infra->id = 5;
T_Pec->id = 6;
T_Vent->id = 7;
T_VentWC ->id = 8;
T_RoletaG->id = 9;
T_RoletaD->id = 10;
T_SplakMali->id = 11;
T_SplakVeliki->id = 12;
T_Pisoar->id = 13;


// 
 //  T_VentLow.onLongPressing = &onLongPressing;
 // T_TalGretje->onLongPressing = &onLongPressing;
 // T_Luc->onLongPressing = &onLongPressing;

   
  T_VentLow.onPress = &onPress;
  T_VentLow.onLongPress = &onLongPress;
  T_VentLow.onMultiplePress = &onMultiplePress;
  
  T_TalGretje->onPress = &onPress;
  T_TalGretje->onLongPress = &onLongPress;
  T_TalGretje->onMultiplePress = &onMultiplePress;

  T_Luc->onPress = &onPress;
  T_Luc->onLongPress = &onLongPress;
  T_Luc->onMultiplePress = &onMultiplePress;

  T_Led->onPress = &onPress;
  T_Led->onLongPress = &onLongPress;
  T_Led->onMultiplePress = &onMultiplePress;
  
  T_Infra->onPress = &onPress;
  T_Infra->onLongPress = &onLongPress;
  T_Infra->onMultiplePress = &onMultiplePress;

  T_Pec->onPress = &onPress;
  T_Pec->onLongPress = &onLongPress;
  T_Pec->onMultiplePress = &onMultiplePress;

  T_Vent->onPress = &onPress;
  T_Vent->onLongPress = &onLongPress;
  T_Vent->onMultiplePress = &onMultiplePress;

  T_VentWC->onPress = &onPress;
  T_VentWC->onLongPress = &onLongPress;
  T_VentWC->onMultiplePress = &onMultiplePress;

  T_RoletaG->onPress = &onPress;
  T_RoletaG->onLongPress = &onLongPress;
  T_RoletaG->onMultiplePress = &onMultiplePress;

  T_RoletaD->onPress = &onPress;
  T_RoletaD->onLongPress = &onLongPress;
  T_RoletaD->onMultiplePress = &onMultiplePress;

  T_SplakMali->onPress = &onPress;
  T_SplakMali->onLongPress = &onLongPress;
  T_SplakMali->onMultiplePress = &onMultiplePress;

  T_SplakVeliki->onPress = &onPress;
  T_SplakVeliki->onLongPress = &onLongPress;
  T_SplakVeliki->onMultiplePress = &onMultiplePress;

  T_Pisoar->onPress = &onPress;
  T_Pisoar->onLongPress = &onLongPress;
  T_Pisoar->onMultiplePress = &onMultiplePress;


  pinMode(R_VentLow, OUTPUT);
  pinMode(R_TalGret, OUTPUT);
  pinMode(R_Luc, OUTPUT);
  pinMode(R_Led, OUTPUT);
  pinMode(R_Infra, OUTPUT);
  pinMode(R_Pec, OUTPUT);
  pinMode(R_Vent, OUTPUT);
  pinMode(R_Vent_WC, OUTPUT);
  pinMode(R_Roleta_Gor, OUTPUT);
  pinMode(R_Roleta_Dol, OUTPUT);
  pinMode(R_SplakMG, OUTPUT);
  pinMode(R_SplakMD, OUTPUT);
  pinMode(R_SplakVG, OUTPUT);
  pinMode(R_SplakVD, OUTPUT);
  pinMode(R_Pisoar, OUTPUT);
  
  digitalWrite(R_VentLow, LOW);
  digitalWrite(R_TalGret, LOW);
  digitalWrite(R_Luc, LOW);
  digitalWrite(R_Led, LOW);
  digitalWrite(R_Infra, LOW);
  digitalWrite(R_Pec, LOW);
  digitalWrite(R_Vent, LOW);
  digitalWrite(R_Vent_WC, LOW);
  digitalWrite(R_Roleta_Gor, LOW);
  digitalWrite(R_Roleta_Dol, LOW);
  digitalWrite(R_SplakMG, LOW);
  digitalWrite(R_SplakMD, LOW);
  digitalWrite(R_SplakVG, LOW);
  digitalWrite(R_SplakVD, LOW);
  digitalWrite(R_Pisoar, LOW);
  
  TaskMgr.add(1, R_VentLowLoop); 
  TaskMgr.add(2, R_TalGretLoop);
  TaskMgr.add(3, R_LucLoop);  
  TaskMgr.add(4, R_LedLoop);
  TaskMgr.add(5, R_InfraLoop);   
  TaskMgr.add(6, R_PecLoop);
  TaskMgr.add(7, R_VentLoop);   
  TaskMgr.add(8, R_Vent_WCLoop);
  TaskMgr.add(9, R_Roleta_GorLoop);   
  TaskMgr.add(10, R_Roleta_DolLoop);
   
  TaskMgr.add(12, R_SplakVLoop);   
  TaskMgr.add(13, R_pisoarLoop);
  TaskMgr.add(14, BereTipke); 
  TaskMgr.add(15, Print); 
  TaskMgr.add(11, R_SplakMLoop);  

  // TaskMgr.add(14, R_SplakVDLoop);
  //TaskMgr.add(12, R_SplakMDLoop); 
}


void BereTipke() {
  T_VentLow.update();
  T_TalGretje->update();
  T_Luc->update();
  T_Led->update();
  T_Infra->update();
  T_Pec->update();        
  T_Vent->update();       
  T_VentWC->update();     
  T_RoletaG->update();    
  T_RoletaD->update();    
  T_SplakMali->update();  
  T_SplakVeliki->update();
  T_Pisoar->update();   
  
}
void Print() {
 // Serial.println(globalgumb);
 // Serial.println(globalcount);
 // TaskMgr.yieldDelay(700);
}
  
void R_VentLowLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 1){
     digitalWrite(R_VentLow, HIGH);
     globalgumb = 0; 
     trenutniT = millis(); 
     startT1 = trenutniT;  
     Tipka1_nx = globalcount;
  }
  if (trenutniT - startT1 > (Tipka1_nx*2000)){
    digitalWrite(R_VentLow, LOW);   
  }
  
}

void R_TalGretLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 2){
     digitalWrite(R_TalGret, HIGH);
     globalgumb = 0; 
     trenutniT = millis(); 
     startT2 = trenutniT;  
     Tipka2_nx = globalcount;
  }
  if (trenutniT - startT2 > (Tipka2_nx*2000)){
    digitalWrite(R_TalGret, LOW);   
  }
}




void R_LucLoop() {
   unsigned long trenutniT = millis(); 
   if (globalgumb == 3){
         digitalWrite(R_Luc, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT3 = trenutniT;  
         Tipka3_nx = globalcount;
  }
  if (trenutniT - startT3 > (Tipka3_nx*2000)){
    digitalWrite(R_Luc, LOW);   
  }
}

void R_LedLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 4){
         digitalWrite(R_Led, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT4 = trenutniT;  
         Tipka4_nx = globalcount;
  }
  if (trenutniT - startT4 > (Tipka4_nx*2000)){
    digitalWrite(R_Led, LOW);   
  }
}

void R_InfraLoop() {
  unsigned long trenutniT = millis();  
  if (globalgumb == 5){
         digitalWrite(R_Infra, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT5 = trenutniT;  
         Tipka5_nx = globalcount;
  }
  if (trenutniT - startT5 > (Tipka5_nx*2000)){
    digitalWrite(R_Infra, LOW);   
  }
}

void R_PecLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 6){
         digitalWrite(R_Pec, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT6 = trenutniT;  
         Tipka6_nx = globalcount;
  }
  if (trenutniT - startT6 > (Tipka6_nx*2000)){
    digitalWrite(R_Pec, LOW);   
  }
}

void R_VentLoop() {
  unsigned long trenutniT = millis();  
  if (globalgumb == 7){
         digitalWrite(R_Vent, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT7 = trenutniT;  
         Tipka7_nx = globalcount;
  }
  if (trenutniT - startT7 > (Tipka7_nx*2000)){
    digitalWrite(R_Vent, LOW);   
  }
}

void R_Vent_WCLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 8){
         digitalWrite(R_Vent_WC, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT8 = trenutniT;  
         Tipka8_nx = globalcount;
  }
  if (trenutniT - startT8 > (Tipka8_nx*2000)){
    digitalWrite(R_Vent_WC, LOW);   
  }
}

void R_Roleta_GorLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 9){
         digitalWrite(R_Roleta_Gor, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT9 = trenutniT;  
         Tipka9_nx = globalcount;
  }
  if (trenutniT - startT9 > (Tipka9_nx*2000)){
    digitalWrite(R_Roleta_Gor, LOW);   
  }
}

void R_Roleta_DolLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 10){
         digitalWrite(R_Roleta_Dol, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT10 = trenutniT;  
         Tipka10_nx = globalcount;
  }
  if (trenutniT - startT10 > (Tipka10_nx*2000)){
    digitalWrite(R_Roleta_Dol, LOW);   
  }
}

void R_SplakMLoop() {
  unsigned long trenutniT = millis();
  if (globalgumb == 11){
         digitalWrite(R_SplakMG, HIGH);
         globalgumb = 0;
         trenutniT = millis();
         startT11 = trenutniT;
         Tipka11_nx = globalcount;
  }
  
  if (trenutniT - startT11 > (700) && digitalRead(R_SplakMG)){
    ugasnil_M=true;
    digitalWrite(R_SplakMG, LOW);
  }
  if (trenutniT - startT11 > (820) && ugasnil_M){
    digitalWrite(R_SplakMD, HIGH);
  }
  if (trenutniT - startT11 > (1520) && digitalRead(R_SplakMD)){
    digitalWrite(R_SplakMD, LOW);
    ugasnil_M = false;
  }
}

void R_SplakVLoop() {
  unsigned long trenutniT = millis();
  if (globalgumb == 12){
         digitalWrite(R_SplakVG, HIGH);
         globalgumb = 0;
         trenutniT = millis();
         startT12 = trenutniT;
         //Tipka12_nx = globalcount;
  }
  if (trenutniT - startT12 > (700) && digitalRead(R_SplakVG)){
    ugasnil_V=true;
    digitalWrite(R_SplakVG, LOW);
  }
  if (trenutniT - startT12 > (820) && ugasnil_V){
    digitalWrite(R_SplakVD, HIGH);
  }
  if (trenutniT - startT12 > (1520) && digitalRead(R_SplakVD)){
    digitalWrite(R_SplakVD, LOW);
    ugasnil_V = false;
  }
}

void R_pisoarLoop() {
  unsigned long trenutniT = millis(); 
  if (globalgumb == 13){
         digitalWrite(R_Pisoar, HIGH);
         globalgumb = 0; 
         trenutniT = millis(); 
         startT13 = trenutniT;  
         Tipka13_nx = globalcount;
  }
  if (trenutniT - startT13 > (Tipka13_nx*2000)){
    digitalWrite(R_Pisoar, LOW);   
  }
}






// static bool isLow = true;
 // digitalWrite(R_Vent_WC, isLow ? HIGH : LOW);
 // isLow = !isLow;
   //Serial.print("tipka ");
  // Serial.println(globalgumb);
  // Serial.println(globalcount);
 
 
 //unsigned long startT;
//delay (310);  
 //  Serial.println(trenutniT);
 // Serial.println(startT);
   
//Serial.println(globalcount);
//Serial.println(Tipka1_nx);   
//delay (310);  
 //  Serial.println(trenutniT);
 // Serial.println(startT);
   
//Serial.println(globalcount);
//Serial.println(Tipka2_nx);   
//Serial.println("=====================");     
