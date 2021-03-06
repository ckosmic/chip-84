#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern uint16_t opcode;
extern uint8_t memory[0x1000];
extern uint8_t SV[8];
extern uint8_t V[16];
extern uint16_t I;
extern uint16_t pc;
extern int16_t delay_timer;
extern int16_t sound_timer;
extern uint16_t stack[16];
extern uint8_t sp;
extern uint8_t keys[16];
extern bool drawFlag;

extern bool paused;
extern bool playing;
extern bool extendedScreen;
extern uint8_t plane;

extern uint8_t screen_width;
extern uint8_t screen_height;
extern uint16_t pixel_number;

extern ti_var_t file;

extern uint8_t game_data[3584];
extern uint8_t keypad[16];
extern uint8_t controlMap[16];

void loadFontset(void);
void initialize(void);
void loadProgram(char *fileName);
void emulateCycle(uint8_t steps);
void setKeys(void);