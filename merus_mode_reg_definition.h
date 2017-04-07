#ifndef MERUS_MODE_REG_DEFINITION_H
#define MERUS_MODE_REG_DEFINITION_H

// Name Mode  register brouser
#define NAME_MODE_REG_BROWSER    "Debug Monitor"

//  MONITOR REGISTER DESCRIPTION
#define MODE_REG_START_AADDRES      96
#define MODE_REG_SIZE               32

// Position field in data QVector "mode_reg"
#define MODE_REG_LENGTH_STR          30
#define MODE_REG_POS_NUM              0
#define MODE_REG_POS_BIT              1
#define MODE_REG_POS_NAME_REG         9
#define MODE_REG_POS_DESCRIPTION_REG 10
#define MODE_REG_POS_DESCRIPTION     11
#define MODE_REG_POS_INTERPRETATION  12

//----Not read string--------------------------
#define NOT_READ_STR                "NOT_READ"



#endif // MERUS_MEM_MAP_DEFINITION_H
