#ifndef Arduino_Elsner_Eltako_Weather_Sensor_RS485_h
#define Arduino_Elsner_Eltako_Weather_Sensor_RS485_h

#include <Arduino.h>


typedef struct
{
  long timestamp_millis;
  int temperature_tenth_c;
  int sun_east_klx;
  int sun_south_klx;
  int sun_west_klx;
  bool is_dark;
  int daylight_lx;
  int wind_speed_tenth_ms;
  bool is_raining;
} SensorData;

extern SensorData sensor_data;


void setup_sensor();
void setup_webserver();

void loop_sensor();
void loop_webserver();


#endif  // Arduino_Elsner_Eltako_Weather_Sensor_RS485_h
