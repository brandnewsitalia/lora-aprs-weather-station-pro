# LoRa Manager Header File 

#ifndef LORA_MANAGER_H
#define LORA_MANAGER_H

#include <SPI.h>
#include <LoRa.h>

// LoRa Initialization
void loraInit() {
    // Initialize LoRa
    LoRa.begin(915E6); // Set frequency to 915 MHz (adjust as necessary)
}

// Function to send a packet
void loraSendPacket(String packet) {
    LoRa.beginPacket();
    LoRa.print(packet);
    LoRa.endPacket();
}

// Function to listen for ACK with timeout management
bool loraListenForACK(unsigned long timeout) {
    unsigned long startTime = millis();
    while (millis() - startTime < timeout) {
        int packetSize = LoRa.parsePacket();
        if (packetSize) {
            String ack = LoRa.readString();
            // Process the ack if needed
            return true; // ACK received
        }
    }
    return false; // Timeout
}

#endif // LORA_MANAGER_H