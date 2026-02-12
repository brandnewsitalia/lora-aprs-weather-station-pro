#ifndef SLEEP_MANAGER_H
#define SLEEP_MANAGER_H

#include <Arduino.h>
#include <esp_sleep.h>

// Function to initialize light sleep
void initLightSleep() {
    // Set the sleep duration for light sleep (300 seconds)
    esp_sleep_enable_timer_wakeup(300 * 1000000);  // 300 seconds in microseconds
}

// Function to enter light sleep
void enterLightSleep() {
    Serial.println("Entering light sleep for 5 minutes...");
    esp_deep_sleep_start();
}

// Function to initialize deep sleep
void initDeepSleep() {
    // Set the sleep duration for deep sleep (20 minutes)
    esp_sleep_enable_timer_wakeup(1200 * 1000000);  // 1200 seconds in microseconds
}

// Function to enter deep sleep
void enterDeepSleep() {
    Serial.println("Entering deep sleep for 20 minutes...");
    esp_deep_sleep_start();
}

#endif // SLEEP_MANAGER_H