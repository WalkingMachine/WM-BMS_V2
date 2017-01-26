/*
 * power.h
 *
 *  Created on: Jan 19, 2017
 *      Author: alexc
 */

#ifndef POWER_H_
#define POWER_H_

#include "battery.h"

void battery_shutdown(battery_t *b);
void battery_discharge(battery_t *b);
void battery_charge(battery_t *b);

#endif /* POWER_H_ */
