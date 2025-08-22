#ifndef DISPLAY_H
#define DISPLAY_H

#ifdef __cplusplus
extern "C" {
#endif

// แก้ไขชื่อและ parameters ให้ตรงกับ main.c
void display_init(void);
void display_show_message(const char* message);
void display_show_sensor_data(float temp, float hum, float heat_index);
void display_show_status(const char* status_message);
void display_clear(void);

#ifdef __cplusplus
}
#endif

#endif // DISPLAY_H