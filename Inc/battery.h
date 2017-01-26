#ifndef BATTERY_H
#define BATTERY_H

#include "cell.h"

#define CELL_NUMBER 0x06
#define BATTERY_1_ID 0x01
#define BATTERY_2_ID 0x02

enum battery_status {
    BATTERY_STATUS_UNKNOWN = 0x00,
    BATTERY_STATUS_CHARGING = 0x01,
    BATTERY_STATUS_DISCHARGING =0x02,
	BATTERY_STATUS_SHUTDOWN =0x03,
    BATTERY_STATUS_FULL = 0x04
};
typedef enum battery_status battery_status_t;

enum battery_health {
    BATTERY_HEALTH_UNKNOWN = 0x00,
    BATTERY_HEALTH_GOOD = 0x01,
    BATTERY_HEALTH_OVERHEAT = 0x02,
    BATTERY_HEALTH_OVER_VOLTAGE = 0x03,
	BATTERY_HEALTH_UNDER_VOLTAGE = 0x04,
    BATTERY_HEALTH_OVER_CURRENT = 0x05,
	BATTERY_HEALTH_DEAD = 0xFF
};
typedef enum battery_health battery_health_t;

enum battery_balancing {
	BATTERY_IS_NOT_BALANCING = 0x00,
    BATTERY_IS_BALANCING = 0x01
};
typedef enum battery_balancing battery_balancing_t;

struct battery {
	uint8_t battery_id;
    battery_status_t status;
    battery_health_t health;
    battery_balancing_t is_balancing;
    uint32_t temperature;
    uint32_t voltage;
    uint32_t current;
    cell_t cells[CELL_NUMBER];
    uint8_t cells_number;
};
typedef struct battery battery_t;

// Init Battery
void battery_init(battery_t *bat, uint8_t id);


#endif // BATTERY_H
