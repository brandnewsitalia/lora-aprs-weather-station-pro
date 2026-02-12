#ifndef DISPLAY_MANAGER_H
#define DISPLAY_MANAGER_H

#include <SSD1306.h>

// Function to initialize the display for the boot screen
void initBootScreen() {
    // Code to initialize SSD1306 display for boot screen
}

// Function to show APRS send feedback
void showAPRSSendFeedback(bool success) {
    if (success) {
        // Code to display success message  
    } else {
        // Code to display failure message
    }
}

// Function to display sensor information
void displaySensorInfo(float temperature, float humidity) {
    // Code to display temperature and humidity on SSD1306
}

#endif // DISPLAY_MANAGER_H
