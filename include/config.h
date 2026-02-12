# config.h

// Configuration constants for Dual-Mode LoRa APRS Weather Station

// BSEC2 Configuration
#define BSEC_SERIAL_PORT 1  // Serial port for BSEC2
#define BSEC_I2C_ADDRESS 0x58  // I2C address for BSEC2

// Sleep Intervals
#define SLEEP_INTERVAL_1 300  // Time to sleep in seconds (5 minutes)
#define SLEEP_INTERVAL_2 600  // Time to sleep in seconds (10 minutes)

// Power Management
#define POWER_MANAGEMENT_MODE 1  // 0: off, 1: on
#define LOW_POWER_MODE true  // Enable low power mode

// APRS Settings
#define APRS_CALLSIGN "N0CALL"  // Your APRS callsign
#define APRS_PASSPHRASE ""  // APRS passphrase for authentication
#define APRS_FREQUENCY 144800  // Frequency in Hz for APRS transmission

// Display Settings
#define DISPLAY_TYPE "OLED"  // Type of display
#define DISPLAY_I2C_ADDRESS 0x3C  // I2C address for the display

// WiFi Configuration
#define WIFI_SSID "Your_SSID"  // Your WiFi SSID
#define WIFI_PASSWORD "Your_Password"  // Your WiFi Password
