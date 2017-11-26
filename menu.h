#pragma once

struct MenuEntry {
  uint8_t id;
  String label;
  uint8_t on_click;
  uint8_t on_double_click;
};

#define ACTIONS_BASE 0xA0

#define MENU_ROOT 0x00
#define MENU_GPS 0x01
#define MENU_GPS_WAKEUP 0x02
#define MENU_GPS_TIMEOUT 0x03
#define MENU_GPS_TIMEOUT_5M 0x04
#define MENU_GPS_TIMEOUT_10M 0x05
#define MENU_GPS_TIMEOUT_20M 0x06
#define MENU_GPS_TIMEOUT_40M 0x07
#define MENU_GPS_TIMEOUT_INFINITE 0x08
#define MENU_NEXSTAR 0x09
#define MENU_NEXSTAR_SYNC 0x0A
#define MENU_DATE_TIME 0x0B
#define MENU_SET_TIMEZONE 0x0C
#define MENU_SET_DAYLIGHT_SAVING 0x0D
#define MENU_SET_DAYLIGHT_SAVING_OFF 0x0E
#define MENU_SET_DAYLIGHT_SAVING_ON 0x0F
#define MENU_SET_TIMEZONE_GMT_M12 0x10
#define MENU_SET_TIMEZONE_GMT_M11 0x11
#define MENU_SET_TIMEZONE_GMT_M10 0x12
#define MENU_SET_TIMEZONE_GMT_M09 0x13
#define MENU_SET_TIMEZONE_GMT_M08 0x14
#define MENU_SET_TIMEZONE_GMT_M07 0x15
#define MENU_SET_TIMEZONE_GMT_M06 0x16
#define MENU_SET_TIMEZONE_GMT_M05 0x17
#define MENU_SET_TIMEZONE_GMT_M04 0x18
#define MENU_SET_TIMEZONE_GMT_M03 0x19
#define MENU_SET_TIMEZONE_GMT_M02 0x1A
#define MENU_SET_TIMEZONE_GMT_M01 0x1B
#define MENU_SET_TIMEZONE_GMT_P00 0x1C
#define MENU_SET_TIMEZONE_GMT_P01 0x1D
#define MENU_SET_TIMEZONE_GMT_P02 0x1E
#define MENU_SET_TIMEZONE_GMT_P03 0x1F
#define MENU_SET_TIMEZONE_GMT_P04 0x20
#define MENU_SET_TIMEZONE_GMT_P05 0x21
#define MENU_SET_TIMEZONE_GMT_P06 0x22
#define MENU_SET_TIMEZONE_GMT_P07 0x23
#define MENU_SET_TIMEZONE_GMT_P08 0x24
#define MENU_SET_TIMEZONE_GMT_P09 0x25
#define MENU_SET_TIMEZONE_GMT_P10 0x26
#define MENU_SET_TIMEZONE_GMT_P11 0x27
#define MENU_SET_TIMEZONE_GMT_P12 0x28

#define ACTION_GPS_WAKEUP ACTIONS_BASE + 0x00
#define ACTION_SET_GPS_TIMEOUT_5M ACTIONS_BASE + 0x01
#define ACTION_SET_GPS_TIMEOUT_10M ACTIONS_BASE + 0x02
#define ACTION_SET_GPS_TIMEOUT_20M ACTIONS_BASE + 0x03
#define ACTION_SET_GPS_TIMEOUT_40M ACTIONS_BASE + 0x04
#define ACTION_SET_GPS_TIMEOUT_INFINITE ACTIONS_BASE + 0x05
#define ACTION_NEXSTAR_SYNC ACTIONS_BASE + 0x06
#define ACTION_SET_DAYLIGHT_SAVING_OFF ACTIONS_BASE + 0x07
#define ACTION_SET_DAYLIGHT_SAVING_ON ACTIONS_BASE + 0x08
#define ACTION_SET_TIMEZONE_GMT_M12 ACTIONS_BASE + 0x09
#define ACTION_SET_TIMEZONE_GMT_M11 ACTIONS_BASE + 0x0A
#define ACTION_SET_TIMEZONE_GMT_M10 ACTIONS_BASE + 0x0B
#define ACTION_SET_TIMEZONE_GMT_M09 ACTIONS_BASE + 0x0C
#define ACTION_SET_TIMEZONE_GMT_M08 ACTIONS_BASE + 0x0D
#define ACTION_SET_TIMEZONE_GMT_M07 ACTIONS_BASE + 0x0E
#define ACTION_SET_TIMEZONE_GMT_M06 ACTIONS_BASE + 0x0F
#define ACTION_SET_TIMEZONE_GMT_M05 ACTIONS_BASE + 0x10
#define ACTION_SET_TIMEZONE_GMT_M04 ACTIONS_BASE + 0x11
#define ACTION_SET_TIMEZONE_GMT_M03 ACTIONS_BASE + 0x12
#define ACTION_SET_TIMEZONE_GMT_M02 ACTIONS_BASE + 0x13
#define ACTION_SET_TIMEZONE_GMT_M01 ACTIONS_BASE + 0x14
#define ACTION_SET_TIMEZONE_GMT_P00 ACTIONS_BASE + 0x15
#define ACTION_SET_TIMEZONE_GMT_P01 ACTIONS_BASE + 0x16
#define ACTION_SET_TIMEZONE_GMT_P02 ACTIONS_BASE + 0x17
#define ACTION_SET_TIMEZONE_GMT_P03 ACTIONS_BASE + 0x18
#define ACTION_SET_TIMEZONE_GMT_P04 ACTIONS_BASE + 0x19
#define ACTION_SET_TIMEZONE_GMT_P05 ACTIONS_BASE + 0x1A
#define ACTION_SET_TIMEZONE_GMT_P06 ACTIONS_BASE + 0x1B
#define ACTION_SET_TIMEZONE_GMT_P07 ACTIONS_BASE + 0x1C
#define ACTION_SET_TIMEZONE_GMT_P08 ACTIONS_BASE + 0x1D
#define ACTION_SET_TIMEZONE_GMT_P09 ACTIONS_BASE + 0x1E
#define ACTION_SET_TIMEZONE_GMT_P10 ACTIONS_BASE + 0x1F
#define ACTION_SET_TIMEZONE_GMT_P11 ACTIONS_BASE + 0x20
#define ACTION_SET_TIMEZONE_GMT_P12 ACTIONS_BASE + 0x21

static MenuEntry entries[] {
    { MENU_ROOT, "", MENU_GPS, MENU_GPS, },
    { MENU_GPS, "GPS", MENU_NEXSTAR, MENU_GPS_WAKEUP, },
    { MENU_GPS_WAKEUP, "GPS Wakeup", MENU_GPS_TIMEOUT, ACTION_GPS_WAKEUP, },
    { MENU_GPS_TIMEOUT, "GPS Timeout", MENU_GPS_WAKEUP, MENU_GPS_TIMEOUT_INFINITE, },
    { MENU_GPS_TIMEOUT_5M, "GPS Timeout:\n5 minutes", MENU_GPS_TIMEOUT_10M, ACTION_SET_GPS_TIMEOUT_5M, },
    { MENU_GPS_TIMEOUT_10M, "GPS Timeout:\n10 minutes", MENU_GPS_TIMEOUT_20M, ACTION_SET_GPS_TIMEOUT_10M, },
    { MENU_GPS_TIMEOUT_20M, "GPS Timeout:\n20 minutes", MENU_GPS_TIMEOUT_40M, ACTION_SET_GPS_TIMEOUT_20M, },
    { MENU_GPS_TIMEOUT_40M, "GPS Timeout:\n40 minutes", MENU_GPS_TIMEOUT_INFINITE, ACTION_SET_GPS_TIMEOUT_40M, },
    { MENU_GPS_TIMEOUT_INFINITE, "GPS Timeout:\nNo timeout", MENU_GPS_TIMEOUT_5M, ACTION_SET_GPS_TIMEOUT_INFINITE, },
    { MENU_NEXSTAR, "Nexstar", MENU_DATE_TIME, MENU_NEXSTAR_SYNC, },
    { MENU_NEXSTAR_SYNC, "Nexstar Sync", MENU_NEXSTAR_SYNC, ACTION_NEXSTAR_SYNC, },
    { MENU_DATE_TIME, "Date/Time", MENU_GPS, MENU_SET_TIMEZONE, },
    { MENU_SET_TIMEZONE, "Set Timezone", MENU_SET_DAYLIGHT_SAVING, MENU_SET_TIMEZONE_GMT_P00, },
    { MENU_SET_DAYLIGHT_SAVING, "Set Daylight Saving", MENU_SET_TIMEZONE, MENU_SET_DAYLIGHT_SAVING_OFF, },
    { MENU_SET_DAYLIGHT_SAVING_OFF, "Daylight Saving:\nOFF", MENU_SET_DAYLIGHT_SAVING_ON, ACTION_SET_DAYLIGHT_SAVING_OFF, },
    { MENU_SET_DAYLIGHT_SAVING_ON, "Daylight Saving:\nON", MENU_SET_DAYLIGHT_SAVING_OFF, ACTION_SET_DAYLIGHT_SAVING_ON, },
    { MENU_SET_TIMEZONE_GMT_M12, "Set Timezone:\nGMT-12", MENU_SET_TIMEZONE_GMT_M11, ACTION_SET_TIMEZONE_GMT_M12, },
    { MENU_SET_TIMEZONE_GMT_M11, "Set Timezone:\nGMT-11", MENU_SET_TIMEZONE_GMT_M10, ACTION_SET_TIMEZONE_GMT_M11, },
    { MENU_SET_TIMEZONE_GMT_M10, "Set Timezone:\nGMT-10", MENU_SET_TIMEZONE_GMT_M09, ACTION_SET_TIMEZONE_GMT_M10, },
    { MENU_SET_TIMEZONE_GMT_M09, "Set Timezone:\nGMT-09", MENU_SET_TIMEZONE_GMT_M08, ACTION_SET_TIMEZONE_GMT_M09, },
    { MENU_SET_TIMEZONE_GMT_M08, "Set Timezone:\nGMT-08", MENU_SET_TIMEZONE_GMT_M07, ACTION_SET_TIMEZONE_GMT_M08, },
    { MENU_SET_TIMEZONE_GMT_M07, "Set Timezone:\nGMT-07", MENU_SET_TIMEZONE_GMT_M06, ACTION_SET_TIMEZONE_GMT_M07, },
    { MENU_SET_TIMEZONE_GMT_M06, "Set Timezone:\nGMT-06", MENU_SET_TIMEZONE_GMT_M05, ACTION_SET_TIMEZONE_GMT_M06, },
    { MENU_SET_TIMEZONE_GMT_M05, "Set Timezone:\nGMT-05", MENU_SET_TIMEZONE_GMT_M04, ACTION_SET_TIMEZONE_GMT_M05, },
    { MENU_SET_TIMEZONE_GMT_M04, "Set Timezone:\nGMT-04", MENU_SET_TIMEZONE_GMT_M03, ACTION_SET_TIMEZONE_GMT_M04, },
    { MENU_SET_TIMEZONE_GMT_M03, "Set Timezone:\nGMT-03", MENU_SET_TIMEZONE_GMT_M02, ACTION_SET_TIMEZONE_GMT_M03, },
    { MENU_SET_TIMEZONE_GMT_M02, "Set Timezone:\nGMT-02", MENU_SET_TIMEZONE_GMT_M01, ACTION_SET_TIMEZONE_GMT_M02, },
    { MENU_SET_TIMEZONE_GMT_M01, "Set Timezone:\nGMT-01", MENU_SET_TIMEZONE_GMT_P00, ACTION_SET_TIMEZONE_GMT_M01, },
    { MENU_SET_TIMEZONE_GMT_P00, "Set Timezone:\nGMT+00", MENU_SET_TIMEZONE_GMT_P01, ACTION_SET_TIMEZONE_GMT_P00, },
    { MENU_SET_TIMEZONE_GMT_P01, "Set Timezone:\nGMT+01", MENU_SET_TIMEZONE_GMT_P02, ACTION_SET_TIMEZONE_GMT_P01, },
    { MENU_SET_TIMEZONE_GMT_P02, "Set Timezone:\nGMT+02", MENU_SET_TIMEZONE_GMT_P03, ACTION_SET_TIMEZONE_GMT_P02, },
    { MENU_SET_TIMEZONE_GMT_P03, "Set Timezone:\nGMT+03", MENU_SET_TIMEZONE_GMT_P04, ACTION_SET_TIMEZONE_GMT_P03, },
    { MENU_SET_TIMEZONE_GMT_P04, "Set Timezone:\nGMT+04", MENU_SET_TIMEZONE_GMT_P05, ACTION_SET_TIMEZONE_GMT_P04, },
    { MENU_SET_TIMEZONE_GMT_P05, "Set Timezone:\nGMT+05", MENU_SET_TIMEZONE_GMT_P06, ACTION_SET_TIMEZONE_GMT_P05, },
    { MENU_SET_TIMEZONE_GMT_P06, "Set Timezone:\nGMT+06", MENU_SET_TIMEZONE_GMT_P07, ACTION_SET_TIMEZONE_GMT_P06, },
    { MENU_SET_TIMEZONE_GMT_P07, "Set Timezone:\nGMT+07", MENU_SET_TIMEZONE_GMT_P08, ACTION_SET_TIMEZONE_GMT_P07, },
    { MENU_SET_TIMEZONE_GMT_P08, "Set Timezone:\nGMT+08", MENU_SET_TIMEZONE_GMT_P09, ACTION_SET_TIMEZONE_GMT_P08, },
    { MENU_SET_TIMEZONE_GMT_P09, "Set Timezone:\nGMT+09", MENU_SET_TIMEZONE_GMT_P10, ACTION_SET_TIMEZONE_GMT_P09, },
    { MENU_SET_TIMEZONE_GMT_P10, "Set Timezone:\nGMT+10", MENU_SET_TIMEZONE_GMT_P11, ACTION_SET_TIMEZONE_GMT_P10, },
    { MENU_SET_TIMEZONE_GMT_P11, "Set Timezone:\nGMT+11", MENU_SET_TIMEZONE_GMT_P12, ACTION_SET_TIMEZONE_GMT_P11, },
    { MENU_SET_TIMEZONE_GMT_P12, "Set Timezone:\nGMT+12", MENU_SET_TIMEZONE_GMT_M12, ACTION_SET_TIMEZONE_GMT_P12, },
};static uint16_t len_entries = 41;
