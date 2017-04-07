// Fuse bank defines
// Created 01-06-2016
// Author: Rien Oortgiesen

#include <devicecontrol.h>
#include<registerbrowser.h>
unsigned char Fuse_bank0[7];
unsigned char Fuse_bank1[7];

/* bit map:
                fuse bank 0                 fuse bank 1
                63 62 61 60 59 58 57 56     127 126 125 124 123 122 121 120
                55 54 53 52 51 50 49 48     119 118 117 116 115 114 113 112
                47 46 45 44 43 42 41 40     111 110 109 108 107 106 105 104
                39 38 37 36 35 34 33 32     103 102 101 100 099 098 097 096
addr point ---> 31 30 29 28 27 26 25 24 --> 095 094 093 092 091 090 089 088
                23 22 21 20 19 18 17 16     087 086 085 084 083 082 081 080
                15 14 13 12 11 10 09 08     079 078 077 076 075 074 073 072
                07 06 05 04 03 02 01 00     071 070 069 068 067 066 065 064

Note:           for a given (bit)address the pointer will point to the row containing
                this bit addres and read out all 8 bits of this row
Example:        Giving address 44 will read out all bits in row 5   */
