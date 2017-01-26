#ifndef cell_H
#define cell_H

// Local
#include <stdint.h>

typedef enum cell_health {
    CELL_HEALTH_UNKNOWN = 0x00,
    CELL_HEALTH_GOOD = 0x01,
    CELL_HEALTH_OVERHEAT = 0x02,
    CELL_HEALTH_OVER_VOLTAGE = 0x08,
    CELL_HEALTH_UNDER_VOLTAGE = 0x10,
    CELL_HEALTH_UNSPECIFIED_FAILURE = 0x20,
	CELL_HEALTH_DEAD = 0xFF
} cell_health_t;

enum cell_balancing {
    CELL_IS_NOT_BALANCING = 0x00,
    CELL_IS_BALANCING = 0x01
};
typedef enum cell_balancing cell_balancing_t;

enum cell_delta {
    CELL_DELTA_UNKNOWN = 0x00,
    CELL_IS_INFERIOR_TO_MAX_DELTA = 0x01,
    CELL_IS_SUPERIOR_TO_MAX_DELTA = 0x02
};
typedef enum cell_delta cell_delta_t;

typedef struct {
    uint16_t cell_id;
    cell_health_t health;
    cell_balancing_t is_balancing;
    cell_delta_t delta;
    uint32_t voltage;
} cell_t;

// Init cell
void cell_init(cell_t cell[], uint8_t cells_number);

uint32_t cell_get_voltage(cell_t *cell);


#endif // cell_H
