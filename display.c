#include <stdio.h>
#include "esp_log.h"
#include "display.h"

static const char *TAG = "DISPLAY";

void display_init(void)
{
    ESP_LOGI(TAG, "🖥️  Display initialized from file: %s, line: %d", __FILE__, __LINE__);
    ESP_LOGI(TAG, "💡 Display module ready");
}

void display_show_message(const char* message)
{
    ESP_LOGI(TAG, "📢 Displaying from file: %s, line: %d", __FILE__, __LINE__);
    ESP_LOGI(TAG, "📺 Message: %s", message);
}

// แก้ไขชื่อฟังก์ชันและ parameters ให้ตรงกับที่เรียกใช้ใน main.c
void display_show_sensor_data(float temp, float hum, float heat_index)
{
    ESP_LOGI(TAG, "📊 Sensor data display from file: %s, line: %d", __FILE__, __LINE__);
    ESP_LOGI(TAG, "🌡️ Temperature: %.2f", temp);
    ESP_LOGI(TAG, "💧 Humidity: %.2f", hum);
    ESP_LOGI(TAG, "🔥 Heat Index: %.2f", heat_index);
}

// เพิ่มฟังก์ชันที่หายไป
void display_show_status(const char* status_message)
{
    ESP_LOGI(TAG, "📝 Status update from file: %s, line: %d", __FILE__, __LINE__);
    ESP_LOGI(TAG, "Status: %s", status_message);
}

// แก้ไขชื่อฟังก์ชันให้ตรงกับที่เรียกใช้ใน main.c
void display_clear(void)
{
    ESP_LOGI(TAG, "🧹 Screen cleared from file: %s, line: %d", __FILE__, __LINE__);
    ESP_LOGI(TAG, "✨ Display ready for new content");
}