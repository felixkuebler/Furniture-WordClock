#ifndef _TINE_UTIL_H
#define _TINE_UTIL_H

#include "pin_util.h"

uint8_t* time_to_pinout(uint8_t hour, uint8_t minutes)
{
  uint8_t pin_state[22] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 , 0, 0, 0, 0 }

  if (hour > 12) hour -= 12;

  uint8_t hour_pin = 0;
  
  switch(hour)
  {
    case 1:
      hour_pin = PIN_NAME.EINS_H;
      break;
    case 2: 
      hour_pin = PIN_NAME.ZWEI_H;
      break;
    case 3: 
      hour_pin = PIN_NAME.DREI_H;
      break;
    case 4: 
      hour_pin = PIN_NAME.VIER_H;
      break;
    case 5: 
      hour_pin = PIN_NAME.FUNF_H;
      break;
    case 6: 
      hour_pin = PIN_NAME.SECHS_H;
      break;
    case 7: 
      hour_pin = PIN_NAME.SIEBEN_H;
      break;
    case 8: 
      hour_pin = PIN_NAME.ACHT_H;
      break;
    case 9: 
      hour_pin = PIN_NAME.NEUN_H;
      break;
    case 10: 
      hour_pin = PIN_NAME.ZEHN_H;
      break;
    case 11: 
      hour_pin = PIN_NAME.ELF_H;
      break;
    case 12: 
      hour_pin = PIN_NAME.ZWOLF_H;
      break;
  }

  if (minutes> = 30) hour_pin++;
  if (hour_pin > 12) hour -= 12;

  
  switch(minutes)
  {
    case 5: 
      pin_state [PIN_NAME.FUNF_M] = 1;
      pin_state [PIN_NAME.NACH] = 1;
      break;
    case 10: 
      pin_state [PIN_NAME.ZEHN_M] = 1;
      pin_state [PIN_NAME.NACH] = 1;
      break;
    case 15: 
      pin_state [PIN_NAME.VIERTEL] = 1;
      pin_state [PIN_NAME.NACH] = 1;
      break;
     case 20: 
      pin_state [PIN_NAME.ZWANZIG_M] = 1;
      pin_state [PIN_NAME.NACH] = 1;
      break;
    case 25: 
      pin_state [PIN_NAME.FUNF_M] = 1;
      pin_state [PIN_NAME.VOR] = 1;
      pin_state [PIN_NAME.HALB] = 1;
      break;
    case 30: 
      pin_state [PIN_NAME.HALB] = 1;
      break;
    case 35: 
      pin_state [PIN_NAME.FUNF_M] = 1;
      pin_state [PIN_NAME.NACH] = 1;
      pin_state [PIN_NAME.HALB] = 1;
      break;
    case 40: 
      pin_state [PIN_NAME.ZWANZIG_M] = 1;
      pin_state [PIN_NAME.VOR] = 1;
      break;
    case 45: 
      pin_state [PIN_NAME.VIERTEL] = 1;
      pin_state [PIN_NAME.VOR] = 1;
      break;
    case 50: 
      pin_state [PIN_NAME.ZEHN_M] = 1;
      pin_state [PIN_NAME.VOR] = 1;
      break;
    case 55: 
      pin_state [PIN_NAME.FUNF_M] = 1;
      pin_state [PIN_NAME.VOR] = 1;
      break;
    case 00: 
      pin_state [PIN_NAME.UHR] = 1;
      break;
  }


  return pin;
}

#endif // _TINE_UTIL_H    

