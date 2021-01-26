#ifndef mycobotlanguage_h
#define mycobotlanguage_h

#include <Arduino.h>
#include <M5Stack.h>
#include "mycobot_24px.h"
#include <EEPROM.h>

#define Lan_Add     2
#define EEPROM_SIZE 64

#define EN_NO   1
#define CN_NO   2

class MycobotLanguage {

public:
    MycobotLanguage();
    int language_val;
  
    void clearLanguage();
    int language();
    void setLanguage(int lan_num);
  
private:
    
    bool hasSeletecd();
    int selectLanguage();

};



#endif