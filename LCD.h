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
			int colorR;/**< holds the Red color value */
			int colorG;/**< holds the green color value */
			int colorB;/**< holds the blue color value */
			int cols;/**< holds the columns of the screen */
			int lines;/**< holds the lines of the screen */
	public:
	char LCD_out[16];/**< Buffer to print to the screen */
	/**
	 * class constructor.
	 *
	 * @param R integer value of Red
	 * @param G intefer value of Green
	 * @param B integer value of Blue
	 * @param c integer value of columns
	 * @param l integer value of lines
	 */
	LCD(int R,int G, int B, int c, int l);
	
	/**
	 * Initialized the base grove class with the balues given in the constructor.
	 * 
	 */
	 void begin();
	
	/**
	 * pad strings with spaces.
	 * 
	 * @param my_str string pointer that holds the string given
	 * @param size integer value of the string length
	 * @return No return value, the string is stored in the my_str pointer
	 */
	 void Pad_Str(String* my_str,int size);
	 
	 /**
	  * clear a char array  to be used next.
	  * @param my_ar char pointer that holds the string given
	  * @param size integer value of the string length
	  * @return No return value, the string is stored in the my_ar pointer
	  */
	 void Clear_Char_Array(char *my_ar,int size);
	 
	 /**
	  * print to LCD.
	  * prints contents of the LCD_OUT array in the screen
	  * @param col integer value of the column to start printing
	  * @param line integer value of the line to start printing
	  */
	 void Print_To_LCD(int col,int line);
	 
	 /**
	  * print two string. 
	  * The strings will be printed one per line to the lcd screen,
	  * before that, the strings will be padded in order to avoid flickering
	  * and in order to clear the rest of the screen.
	  * @param str1 the first string to be printed in line 1
	  * @param str2 the second string to be printed in line 2
	  */
	 void Print_To_Screen(String str1,String str2);
	 
	 
};

/**
 * @example LCD.ino
 * <b>For Arduino</b><br />
 * <b updated: spaniakjos 2015</b><br />
 *
 * This is an example of a clock that is printed into an grove LCD screen<br />
 * The format is 
 * H: <hours> M: <minutes> in the first row
 * Seconds: <seconds> in the seconds row
 * the clock count time passed from the sketch start
 */

/**
  * @mainpage grove LCD library for arduino
  *
  * @section Goals Design Goals
  *
  * This library is designed to:
  * @li extend the basic grove library
  * @li be able to write efficiently and easylly on the screen
  *
  *section News News
  *
  * If issues are discovered with the documentation please report them <a href="https://github.com/spaniakos/spaniakos.github.io/issues"> here</a>
  * 
  * @section Useful Useful References
*
* Please refer to:
*
* @li <a href="http://spaniakos.github.io/LCD/classLCD.html"><b>LCD</b> Class Documentation</a>
* @li <a href="https://github.com/spaniakos/LCD/archive/master.zip"><b>Download</b></a>
* @li <a href="https://github.com/spaniakos/LCD/"><b>Source Code</b></a>
* @li <a href="http://spaniakos.github.io/">All spaniakos Documentation Main Page</a>
*
* @section Board_Support Board Support
*
* Most standard Arduino based boards are supported:
* - Arduino
* - Intel Galileo support
*/
#endif //TempSennsor


