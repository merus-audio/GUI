#ifndef REGBROWFILLDATA_H
#define REGBROWFILLDATA_H

//#include<registerbrowser.h>
//#include<QList>
#include<QString>

QString const_data[][12] =
{{"  0","-","0","-","-","-","-","-","-","manualPM","Out","Select Manual PowerMode control"},
 {"  0","-","-","1","1","-","-","-","-","PM_man","Out","Manual selected power mode"},
 {"  0","-","-","-","-","1","1","-","-","PM_max","Out","Highest Powermode in Auto power mode"},
 {"  0","-","-","-","-","-","-","0","1","PM_min","Out","Lowest Powermode in Auto power mode"},
 {"  0","0","-","-","-","-","-","-","-","sw_en_force","Out","High to force switchContorllers to drive switches"},
 {"  1","0","0","1","1","1","1","0","0","Mthr_1to2","Out","Mod. index threshold value for PM1=>PM2 change."},
 {"  2","0","0","1","1","0","0","1","0","Mthr_2to1","Out","Mod. index threshold value for PM2=>PM1 change."},
 {"  3","0","1","0","1","1","0","1","0","Mthr_2to3","Out","Mod. index threshold value for PM2=>PM3 change."},
 {"  4","0","1","0","1","0","0","0","0","Mthr_3to2","Out","Mod. index threshold value for PM3=>PM2 change."},
 {"  7","0","-","-","-","-","-","-","-","dcu1_dis","Out","Disable DCU 1"},
 {"  7","-","0","-","-","-","-","-","-","dcu0_dis","Out","Disable DCU 0"},
 {" 10","1","-","-","-","-","-","-","-","lf_clamp_en","Out","High (default) to enable LF int2+3 clamping on clip"},
 {" 29","f","f","f","f","f","0","0","0","PMprofile","Out","PM profile select. Valid presets: 0-1-2-3-4. 5=> custom profile."},
 {" 30","f","f","1","0","-","-","-","-","PM3_man","Out"," Custom profile PM3 contents. 0=>A; 1=>B; 2=>C; 3=>D "},
 {" 30","f","f","-","-","1","1","-","-","PM2_man","Out"," Custom profile PM2 contents. 0=>A; 1=>B; 2=>C; 3=>D "},
 {" 30","f","f","-","-","-","-","1","1","PM1_man","Out"," Custom profile PM1 contents. 0=>A; 1=>B; 2=>C; 3=>D "},
 {" 32","0","-","-","-","-","-","-","-","ocp_latch_clear","Out","Low-high clears current OCP latched condition."},
 {" 37","0","0","0","-","-","-","-","-","audio_in_mode","Out","Audio input mode; 0-1-2-3-4-5"},
 {" 38","f","f","f","f","-","1","-","-","eh_dcShdn","Out","High to enable DC protection"},
 {" 39","-","0","-","-","-","-","-","-","oc_thr_ext","Out","High to use reg bank setting"},
 {" 39","0","-","-","-","-","-","-","-","oc_blnk_ext","Out","High to use reg bank setting"},
 {" 39","-","-","0","-","-","-","-","-","audio_in_mode_ext","Out"," If set; audio_in_mode is controlled from audio_in_mode register. If not set audio_in_mode is set from fuse bank setting "},
 {" 45","-","-","-","-","-","0","-","-","eh_clear","Out","Flip to clear error registers"},
 {" 45","-","-","1","-","-","-","-","-","thermal_compr_en","Out","Enable otw-contr. input compression?"},
 {" 46","1","-","f","f","f","-","-","-","oc_bias_high","Out","Set OCP circuit bias level"},
 {" 51","0","1","1","1","-","-","-","-","oc_thr_reg","Out","OCP threshold from register bank"},
 {" 51","-","-","-","-","0","1","1","1","oc_blnk_reg","Out","OCP blanking delay from register bank"},
 {" 53","-","-","-","-","0","-","-","-","audio_proc_enable","Out"," Enable Audio proc; bypass if not enabled "},
 {" 53","-","-","0","0","-","-","-","-","audio_proc_release","Out"," 00:slow; 01:normal; 10:fast "},
 {" 53","0","0","-","-","-","-","-","-","audio_proc_attack","Out"," 00:slow; 01:normal; 10:fast "},
 {" 53","-","-","-","-","-","0","0","1","i2s_format","Out"," i2s basic data format; 000 = std. i2s; 001 = left justified (default) "},
 {" 54","-","0","-","-","-","-","-","-","audio_proc_limiterEnable","Out"," 1: enable limiter; 0: disable limiter "},
 {" 54","0","-","-","-","-","-","-","-","audio_proc_mute","Out"," 1: mute; 0: unmute "},
 {" 54","-","-","-","-","-","-","-","1","i2s_sck_pol","Out","i2s sck polarity cfg. 0 = rising edge data change"},
 {" 54","-","-","-","0","0","-","-","-","i2s_framesize","Out"," i2s word length. 00 = 32bit; 01 = 24bit "},
 {" 54","-","-","-","-","-","-","0","-","i2s_ws_pol","Out","i2s ws polarity. 0 = low first"},
 {" 54","-","-","-","-","-","0","-","-","i2s_order","Out","i2s word bit order. 0 = MSB first"},
 {" 54","-","-","0","-","-","-","-","-","i2s_rightfirst","Out","i2s L/R word order; 0 = left first"},
 {" 64","0","0","0","1","1","0","0","0","vol_db_master","Out","Master volume db"},
 {" 65","f","f","f","f","f","f","0","0","vol_lsb_master","Out","Master volume lsb 1/4 steps"},
 {" 66","0","0","0","1","1","0","0","0","vol_db_ch0","Out","Volume channel 0"},
 {" 67","0","0","0","1","1","0","0","0","vol_db_ch1","Out","Volume channel 1"},
 {" 68","0","0","0","1","1","0","0","0","vol_db_ch2","Out","Volume channel 2"},
 {" 69","0","0","0","1","1","0","0","0","vol_db_ch3","Out","Volume channel 3"},
 {" 70","-","-","-","-","-","-","0","0","vol_lsb_ch0","Out","volume channel 1 - 1/4 steps"},
 {" 70","-","-","-","-","0","0","-","-","vol_lsb_ch1","Out","volume channel 3 - 1/4 steps"},
 {" 70","-","-","0","0","-","-","-","-","vol_lsb_ch2","Out","volume channel 2 - 1/4 steps"},
 {" 70","0","0","-","-","-","-","-","-","vol_lsb_ch3","Out","volume channel 3 - 1/4 steps"},
 {" 71","0","0","0","1","1","0","0","0","thr_db_ch0","Out","thr_db channel 0"},
 {" 72","0","0","0","1","1","0","0","0","thr_db_ch1","Out","Thr db ch1"},
 {" 73","0","0","0","1","1","0","0","0","thr_db_ch2","Out","thr db ch2"},
 {" 74","0","0","0","1","1","0","0","0","thr_db_ch3","Out","Threshold db ch3"},
 {" 75","-","-","-","-","-","-","0","0","thr_lsb_ch0","Out","Thr lsb ch0"},
 {" 75","-","-","-","-","0","0","-","-","thr_lsb_ch1","Out","thr lsb ch1"},
 {" 75","-","-","0","0","-","-","-","-","thr_lsb_ch2","Out","thr lsb ch2 1/4 db step"},
 {" 75","0","0","-","-","-","-","-","-","thr_lsb_ch3","Out","threshold lsb ch3"},
 {"109","0","0","0","0","0","0","0","0","error_acc","In"," Accumulated errors; at and after triggering "},
 {"124","0","0","0","0","0","0","0","0","error","In","Current error flag monitor reg - for app. ctrl."},
 {"126","0","0","0","0","-","-","-","-","audio_proc_limiter_mon","In","b7-b4: Channel 3-0 limiter active"},
 {"126","-","-","-","-","0","0","0","0","audio_proc_clip_mon","In","b3-b0: Channel 3-0 clipping monitor"},
 {"127","0","0","0","0","0","0","0","0","hw_version","In","Hardware version ID number"}};

// -------------------------------MODE REGISTER DESCRIPTION--------------------------------------
QVector< QVector<QString> >  mode_reg={
    {"109", "-","-","-","-","-","-","-","0", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "Flying capacitor normal", "1", "flying capacitor normal over-voltage ERROR"},
    {"109", "-","-","-","-","-","-","0","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "Over-curent normal", "1", "Over-curent ERROR"},
    {"109", "-","-","-","-","-","0","-","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "Pll normal", "1", "Pll ERROR"},
    {"109", "-","-","-","-","0","-","-","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "PVDD under-voltage normal", "1", "PVDD under-voltage PROTECTION"},
    {"109", "-","-","-","0","-","-","-","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "Over-temperature normal", "1", "Over-temperature WARNING"},
    {"109", "-","-","0","-","-","-","-","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "Over-temperature normal", "1", "Over-temperature ERROR"},
    {"109", "-","0","-","-","-","-","-","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "Pin-to-pin low impedance normal", "1", "Pin-to-pin low impedance PROTECTION"},
    {"109", "0","-","-","-","-","-","-","-", "ERROR ACC", "Error monitor register. Gives the accumulated error", "Accumulated error register",               "0", "DC normal", "1", "DC PROTECTION"}
};

#endif // REGBROWFILLDATA_H
