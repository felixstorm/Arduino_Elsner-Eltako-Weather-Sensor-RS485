#ifndef Arduino_Elsner_Eltako_Weather_Sensor_RS485_h
#define Arduino_Elsner_Eltako_Weather_Sensor_RS485_h

#include <Arduino.h>


typedef struct
{
  unsigned long timestamp_millis;
  signed int temperature_tenth_c;
  unsigned int sun_east_klx;
  unsigned int sun_south_klx;
  unsigned int sun_west_klx;
  bool is_dark;
  unsigned int daylight_lx;
  unsigned int wind_speed_tenth_ms;
  unsigned int wind_speed_gusts_tenth_ms;
  bool is_raining;
} SensorData;

#define WIND_SPEED_BUFFER_SIZE 60
typedef struct
{
  unsigned int value[WIND_SPEED_BUFFER_SIZE];
  unsigned int position;
} WindSpeedBuffer;

extern SensorData sensor_data;


typedef struct
{
  bool cover_protection_1_is_active;
  long cover_protection_1_delay_start_millis;
  bool cover_protection_2_is_active;
  long cover_protection_2_delay_start_millis;
} CoverProtectionData;

extern CoverProtectionData cover_protection_data;


void setup_sensor();
void setup_cover_protection();
void setup_webserver();

void loop_sensor();
void loop_cover_protection();
void loop_webserver();


#endif  // Arduino_Elsner_Eltako_Weather_Sensor_RS485_h
