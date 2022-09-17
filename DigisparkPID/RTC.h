#ifndef RTC_H_
#define RTC_H_

#include "main.h"

unsigned char RTC_BCDtoDEC(unsigned char c); //перевод двоично-десятичного числа в десятичное
unsigned char RTC_DECtoBCD(unsigned char c); //перевод десятичного числа в двоично-десятичное

#endif /* RTC_H_ */