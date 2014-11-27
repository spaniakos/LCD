/*
 Copyright (C) 2014 G. Spanos <spaniakos@gmail.com>

 This program is free software; you can redistribute it and/or
 modify it under the terms of the GNU General Public License
 version 2 as published by the Free Software Foundation.
 */
 
#include "LCD_config.h"
#include "LCD.h"

/****************************************************************************/

	LCD::LCD (int R,int G, int B, int c, int l){
		colorR = R;
		colorG = G;
		colorB = B;
		cols = c;
		lines = l;
	}
	
	void LCD::begin(){
		rgb_lcd::begin(cols,lines);
		rgb_lcd::setRGB(colorR, colorG, colorB);
	}
	
	void LCD::Pad_Str(String* my_str,int size){
		unsigned int i;
		for (i=my_str->length();i<=size;i++){
			my_str->concat(" ");
		}
	}
	 
	void LCD::Clear_Char_Array(char *my_ar,int size){
		for (int i=0;i<size;i++){
			my_ar[i] = ' ';
		} 
	}
	 
	void LCD::Print_To_LCD(int col,int line){
		rgb_lcd::setCursor(col, line);
		rgb_lcd::print(LCD_out);
	}
	 
	 void LCD::Print_To_Screen(String str1,String str2){
		Pad_Str(&str1,16);
		Pad_Str(&str2,16);
		Clear_Char_Array(LCD_out,17);
		str1.toCharArray(LCD_out,17);
		Print_To_LCD(0,0);
		Clear_Char_Array(LCD_out,17);
		str2.toCharArray(LCD_out,17);
		Print_To_LCD(0,1); 
	}
