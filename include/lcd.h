#ifndef LCD_H
#define LCD_H

#include "pico/stdlib.h"

// Estructura que define un LCD en modo 4 bits
typedef struct {
    uint8_t rs;        // Pin RS
    uint8_t en;        // Pin EN
    uint8_t data[4];   // Pines de datos D4-D7
} LCD;

// Funciones básicas
void lcd_init(LCD *lcd, uint8_t rs, uint8_t en, uint8_t d4, uint8_t d5, uint8_t d6, uint8_t d7);
void lcd_clear(LCD *lcd);
void lcd_set_cursor(LCD *lcd, uint8_t row, uint8_t col);
void lcd_send_char(LCD *lcd, char c);
void lcd_print(LCD *lcd, const char *str);

#endif