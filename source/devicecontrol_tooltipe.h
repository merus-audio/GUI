#ifndef DEVICECONTROL_TOOLTIPE_H
#define DEVICECONTROL_TOOLTIPE_H

#include <QMap>
#include <QString>

//-----------------"newwindow.h" tooltipe-----------------------

QString tooltipe_string[][2]={
//=======IF SOME WIDGET DOES NOT NEED TOOTIPE - INSERT "NoN" TOOLTIPE STRING===============================
//axample: "{"clippingCH0", "NoN"}"

/*
* Column "WIDGET"      - widget name
* Column "TOOLTIPE"    - widgets tooltipe (INSERT TOOLTIP STRING IN THAT COLUMN).If does not need tooltip, insert "NoN" - string
* Column "DESCRIPTION" - short widget description
*/

/*
 *============================================WINDOWS  "Digital Audio Processing" set tooltipe====================================
 *--------------------------------------------------------------------------------------------------------------------------------
 *----WIDGET----------TOOLTIPE----------------------------DESCRIPTION------------------------------------------------------------*/
                                                       //++++++++++++++++++++Channel volume SCROLL CONTROL set tooltipe
    {"ch0vol", "Volume control chanel 0"},              //chanel0 "volume control" set tooltipe
    {"ch1vol", "Volume control chanel 1"},              //chanel1 "volume control" set tooltipe
    {"ch2vol", "Volume control chanel 2"},              //chanel2 "volume control" set tooltipe
    {"ch3vol", "Volume control chanel 3"},              //chanel3 "volume control" set tooltipe

                                                       //++++++++++++++++++++Channel volume LABLE SHOW VALUE set tooltipe
    {"ch0volLabel", "Volume value chanel 0"},           //chanel0 "show volume value" set tooltipe
    {"ch1volLabel", "Volume value chanel 1"},           //chanel1 "show volume value" set tooltipe
    {"ch2volLabel", "Volume value chanel 2"},           //chanel2 "show volume value" set tooltipe
    {"ch3volLabel", "Volume value chanel 3"},           //chanel3 "show volume value" set tooltipe

                                                       //++++++++++++++++++++Channel total volume LABLE SHOW VALUE set tooltipe
    {"ch0volTotLabel", "Volume value total chanel 0"},  //chanel0 "show total volume value" set tooltipe
    {"ch1volTotLabel", "Volume value total chanel 1"},  //chanel1 "show total volume value" set tooltipe
    {"ch2volTotLabel", "Volume value total chanel 2"},  //chanel2 "show total volume value" set tooltipe
    {"ch3volTotLabel", "Volume value total chanel 3"},  //chanel3 "show total volume value" set tooltipe

                                                       //+++++++++++++++++++++Clipping occured LABLE INDICATE set tooltipe
    {"clippingCH0", "Status cliping chanel 0"},         //chanel0 "indicate clipping occured" set tooltipe
    {"clippingCH1", "Status cliping chanel 1"},         //chanel1 "indicate clipping occured" set tooltipe
    {"clippingCH2", "Status cliping chanel 2"},         //chanel2 "indicate clipping occured" set tooltipe
    {"clippingCH3", "Status cliping chanel 3"},         //chanel3 "indicate clipping occured" set tooltipe

                                                        //+++++++++++++++++++++Clipping occured LABLE INDICATE set tooltipe
    {"limiterActiveCH0", " Limitet activ chanel 0"},    //chanel0 "indicate limited activ" set tooltipe
    {"limiterActiveCH1", " Limitet activ chanel 1"},    //chanel1 "indicate limited activ" set tooltipe
    {"limiterActiveCH2", " Limitet activ chanel 2"},    //chanel2 "indicate limited activ" set tooltipe
    {"limiterActiveCH3", " Limitet activ chanel 3"},    //chanel3 "indicate limited activ" set tooltipe

                                                        //+++++++++++++++++++++Channel threshold control SCROLL CONTROL set tooltipe
    {"ch0thr", "Threshold control chanel 0"},           //chanel0  "threshold control" set tooltipe
    {"ch1thr", "Threshold control chanel 1"},           //chanel1  "threshold control" set tooltipe
    {"ch2thr", "Threshold control chanel 2"},           //chanel2  "threshold control" set tooltipe
    {"ch3thr", "Threshold control chanel 3"},           //chanel3  "threshold control" set tooltipe

                                                       //++++++++++++++++++++Channel threshold value SHOW VALUE set tooltipe
    {"ch0thrLabel", "Threshold value chanel 0"},        //chanel0 "show threshold value" set tooltipe
    {"ch1thrLabel", "Threshold value chanel 1"},        //chanel1 "show threshold value" set tooltipe
    {"ch2thrLabel", "Threshold value chanel 2"},        //chanel2 "show threshold value" set tooltipe
    {"ch3thrLabel", "Threshold value chanel 3"},        //chanel3 "show threshold value" set tooltipe

                                                       //+++++++++++++++++++++Master volume SCROLL CONTROL set tooltipe
    {"mrvol", "Global control"},                       //Master volume control set tooltipe

                                                       //++++++++++++++++++++Master volume LABLE SHOW VALUE set tooltipe
    {"mrvolLabel", " Global control value"},           //Master volume value set tooltipe

                                                       //++++++++++++++++++++Control the mutex mux RADIO BUTON set tooltipe
    {"pushButton_Mute", "Mute the audio / Play as norma"}, //Audio proc

                                                         //++++++++++++++++++++Control the limiter bypass RADIO BUTON set tooltipe
    {"pushButton_Limiter", "Use limiter/limit Disable"}, //Limiter bypass

                                                       //++++++++++++++++++++Control the limiter attack time RADIO BUTON set tooltipe
    {"atkFast", "Limiter attack time: Fast"},          //Limiter attack time: Fast
    {"atkNormal", "Limiter attack time: Normal"},      //Limiter attack time: Normal
    {"atkSlow", "Limiter attack time: Slow"},          //Limiter attack time: Slow

                                                       //++++++++++++++++++++Control the limiter release time RADIO BUTON set tooltipe
    {"decFast", "Limiter release time: Fast "},        //Limiter release time: Fast set tooltipe
    {"decNormal", "Limiter release time: Normall"},    //Limiter release time: Normal set tooltipe
    {"decSlow", "Limiter release time: Slow"},         //Limiter release time: Slow set tooltipe

                                                       //++++++++++++++++++++Digital audio control RADIO BUTON set tooltipe
    {"pushButton_Digital_Audio_enable", "dig audio enable/disable"},    // Digital audio control Enable/Disable set tooltipe

                                                       //++++++++++++++++++++Control the processing bypass mux RADIO BUTON set tooltipe
    {"pushButton_Audio_Processor_enable", "audio proc enable/disable"}, //Processing bypass mux: Enable/Disable set tooltipe

    //++++++++++++++++++++Control the switching Limiter attack tooltipe
    {"quser_dial_swith_left", "Limiter attack switching"}, //

    //++++++++++++++++++++Control the switching Limiter decay tooltipe
    {"quser_dial_swith_right", "Limiter decay switching"}, //


/*==============================================WINDOWS "I2S RX control" set tooltipe============================================
*--------------------------------------------------------------------------------------------------------------------------------
*----WIDGET----------TOOLTIPE----------------------------DESCRIPTION------------------------------------------------------------
*/
                                                       //++++++++++++++++++++I2S format RADIO BUTON set tooltipe
    {"I2Sradio", "I2S radio"},                         //I2S format: I2S radio set tooltipe
    {"LeftRadio", "Left Radio"},                       //I2S format: Left justified set tooltipe
    {"right16radio", "right 16 radio"},                //I2S format: Right justified 16 set tooltipe
    {"right18radio", "right 18 radio"},                //I2S format: Right justified 18 set tooltipe
    {"right20radio", "right 20 radio"},                //I2S format: Right justified 20 set tooltipe
    {"right24radio", "right 24 radio"},                //I2S format: Right justified 24 set tooltipe

                                                       //++++++++++++++++++++I2S bit clock polarity RADIO BUTON set tooltipe
    {"sckpolRisingradio", "Set sckpol Rising radio"},  //I2S bit clock polarity: Rising set tooltipe
    {"sckpolFallingRadio", "Set sckpol Falling radio"},//I2S bit clock polarity: Falling set tooltipe

                                                       //++++++++++++++++++++I2S frame size RADIO BUTON set tooltipe
    {"frame32", "frame 2x32 bit"},                     //I2S frame size: frame 2x32 bit set tooltipe
    {"frame24", "frame 2x24 bit"},                     //I2S frame size: frame 2x24 bit set tooltipe
    {"frame16", "frame 2x16 bit"},                     //I2S frame size: frame 2x16 bit set tooltipe

                                                       //++++++++++++++++++++I2S word selected polarity RADIO BUTON set tooltipe
    {"wsPolRise", "ws lowe peeriod firest"},           //I2S word polarity: Lowe peeriod firest set tooltipe
    {"wsPolFall", "ws high peeriod fires"},            //I2S word polarity: High peeriod fires set tooltipe

                                                       //++++++++++++++++++++I2S left/right data order RADIO BUTON set tooltipe
    {"LeftFirst", "Set I2S Left First"},               //I2S left/right data order: I2S Left First set tooltipe
    {"RightFirst", "Set I2S Right First"},             //I2S left/right data order: I2S Right First set tooltipe

                                                       //++++++++++++++++++++I2S word bit orderr RADIO BUTON set tooltipe
    {"msbfirst", "Set I2S MSB first"},                 //I2S word bit orderr: MSB first set tooltipe
    {"lsbfirst", "Set I2S LSB first"},                 //I2S word bit orderr: LSB first set tooltipe

/*==============================================WINDOWS "DEVISE CONTROL" set tooltipe============================================
*--------------------------------------------------------------------------------------------------------------------------------
*----WIDGET----------TOOLTIPE----------------------------DESCRIPTION------------------------------------------------------------
*/
                                                           //++++++++++++++++++++
     {"ActionRegister",    "Register operation"},               //Register operation
     {"progressBar_ch0",   "Channel 0 modulation index"},
     {"progressBar_ch1",   "Channel 1 modulation index"},
     {"pushButton_DAP",    "Open device control window"},
     {"pushButtonProgram", "Program devise"},
     {"pushButtonLoad",    "Open firmware"},
     {"pushButtonSave",    "Save firmware"},
     {"pushButtonRec",     "Reconnect device"},
     {"radioButton_pmp1",  "Selected power mode 0"},
     {"radioButton_pmp2",  "Selected power mode 1"},
     {"radioButton_pmp3",  "Selected power mode 2"},
     {"radioButton_pmp4",  "Selected power mode 3"},
     {"radioButton_pmp5",  "Selected power mode 4"},
     {"frame_ch0_pm1",         "Chanel 0 power mode 1"},
     {"frame_ch0_pm2",         "Chanel 0 power mode 2"},
     {"frame_ch0_pm3",         "Chanel 0 power mode 3"},
     {"frame_ch1_pm1",         "Chanel 1 power mode 1"},
     {"frame_ch1_pm2",         "Chanel 1 power mode 2"},
     {"frame_ch1_pm3",         "Chanel 1 power mode 3"},
     {"pushButtonSoftClipping","Enable/Disable Soft Clipping"}
};

#endif // DEVICECONTROL_TOOLTYPE_H
