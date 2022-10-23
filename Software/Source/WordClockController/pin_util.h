#ifndef _PIN_UTIL_H
#define _PIN_UTIL_H

#define pin_es 0
#define pin_ist 1

#define pin_nach 2
#define pin_vor 3
#define pin_min_funf 4
#define pin_min_zehn 5
#define pin_min_viertel 6
#define pin_min_zwanzig 7
#define pin_min_halb 8

#define pin_hour_eins 9
#define pin_hour_zwei 10
#define pin_hour_drei 11
#define pin_hour_vier 12
#define pin_hour_funf 13
#define pin_hour_sechs 14
#define pin_hour_sieben 15
#define pin_hour_acht 16
#define pin_hour_neuen 17
#define pin_hour_zehen 18
#define pin_hour_elf 19
#define pin_hour_zwolf 20

#define pin_uhr 21

enum PIN_NAME {ES, IST, NACH, VOR, FUNF_M, ZEHN_M, VIERTEL, ZWANZIG_M, HALB, EINS_H, ZWEI_H, DREI_H, VIER_H, FUNF_H, SECHS_H, SIEBEN_H, ACHT_H, NEUN_H, ZEHN_H, ELF_H, ZWOLF_H, UHR }
uint8_t pinIO[22] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22}



#endif // _PIN_UTIL_H    
