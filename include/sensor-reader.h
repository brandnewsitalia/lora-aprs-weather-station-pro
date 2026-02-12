#ifndef SENSOR_READER_H
#define SENSOR_READER_H

#include <Adafruit_Sensor.h>
#include <Wire.h>
#include <Adafruit_BME680.h>
#include <Adafruit_BME280.h>
#include <Adafruit_BMP280.h>
#include <Adafruit_AHTX0.h>

// Structure to hold sensor data
struct SensorData {
    float temperature;
    float humidity;
    float pressure;
    float air_quality;
};

class SensorReader {
public:
    SensorReader();
    bool begin();
    SensorData readSensors();

private:
    Adafruit_BME680 bme680;
    Adafruit_BME280 bme280;
    Adafruit_BMP280 bmp280;
    Adafruit_AHTX0 aht;
    bool isBME680;
    bool isBME280;
    bool isBMP280;
    bool isAHT20;
};

#endif // SENSOR_READER_H