/*
 Copyright (C) 2014 G. Spanos <spaniakos@gmail.com

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */

/**
 * @file LCD.h
 *
 * Class declaration for TempSensor and helper enums
 */

#ifndef __LCD_H__
#define __LCD_H__

#include "LCD_config.h"

class LCD : public rgb_lcd{	
	private:
			int colorR;
			int colorG;
			int colorB;
			int cols;
			int lines;
	public:
	char LCD_out[16];
	/* class constructor
	 * 
	 * 
	 */
	LCD(int R,int G, int B, int c, int l);
	
	/* begin the class
	 * 
	 */
	 void begin();
	
	/* pad strings with spaces
	 * 
	 */
	 void Pad_Str(String* my_str,int size);
	 
	 /* clear a char array  to be used next
	  * 
	  */
	 void Clear_Char_Array(char *my_ar,int size);
	 
	 /* print to LCD
	  * 
	  */
	 void Print_To_LCD(int col,int line);
	 
	 /*	print two string, one per line, to the lcd screen
	  * 
	  */
	 void Print_To_Screen(String str1,String str2);
	 
	 
};
#endif //TempSennsor


