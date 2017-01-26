/**
 * Cell management system, Walking Machine, Ecole de Technologie Superieure
 * Copyright (C) 2012 Benjamin Vanheuverzwijn
 *
 * cell
 */
#include <stdint.h>

#include "FreeRTOS.h"
#include "task.h"

#include "cell.h"


void cell_init(cell_t cell[], uint8_t cells_number) {
    configASSERT(cell != NULL);

    for (uint8_t i = 0; i < cells_number; i++) {
        cell[i].health = CELL_HEALTH_UNKNOWN;
        cell[i].is_balancing = CELL_IS_NOT_BALANCING;
        cell[i].delta = CELL_DELTA_UNKNOWN;
        cell[i].voltage = 0;
        cell[i].cell_id = i + 1;
    }
}


cell_delta_t cell_get_delta(cell_t *cell) {
    configASSERT(cell != NULL);
    return cell->delta;
}

cell_health_t cell_get_health(cell_t *cell) {
    configASSERT(cell != NULL);
    return cell->health;
}

uint8_t cell_is_balancing(cell_t *cell) {
    configASSERT(cell != NULL);
    return (uint8_t) cell->is_balancing;
}

uint32_t cell_get_voltage(cell_t *cell) {
    configASSERT(cell != NULL);
    return cell->voltage;
}

/*
 * Callbacks
 */

void cell_on_status_update(cell_t *cell) {
    configASSERT(cell != NULL);
    (void) cell; // Remove a warning
}

void cell_on_health_update(cell_t *cell) {
    configASSERT(cell != NULL);
    (void) cell; // Remove a warning
}

void cell_on_power_update(cell_t *cell) {
    configASSERT(cell != NULL);
    (void) cell; // Remove a warning
}
