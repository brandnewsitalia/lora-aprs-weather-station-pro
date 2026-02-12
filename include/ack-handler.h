# Ack Handler

#ifndef ACK_HANDLER_H
#define ACK_HANDLER_H

#include <Arduino.h>
#include <LoRa.h>

class AckHandler {
public:
    // Initialize the handler
    void begin() {
        LoRa.begin(LoRa.frequency);
    }

    // Listen for incoming packets
    void listen() {
        int packetSize = LoRa.parsePacket();
        if (packetSize) {
            // Extract packet data
            String incoming = LoRa.readString();
            logPacket(incoming);
            
            if (isAck(incoming)) {
                // Log ACK response
                Serial.println("ACK received");
            } else {
                Serial.println("Data packet received");
            }
        }
    }

private:
    // Function to check if the packet is an ACK
    bool isAck(String packet) {
        return packet.startsWith("ACK");
    }

    // Log the packet data
    void logPacket(String packet) {
        Serial.print("Packet received: ");
        Serial.println(packet);
    }
};

#endif // ACK_HANDLER_H
