/*
 * _TASK_monitoring.c
 *
 *  Created on: Feb 4, 2017
 *      Author: alexc
 */


#include "BMS_tasks.h"
#include "battery.h"

/* This task monitor the state of the two battery and update the register */
extern void vMonitorTask(void *vParameters) {
	battery_t b1, b2;
	battery_init(&b1, BATTERY_1_ID);
	battery_init(&b2, BATTERY_2_ID);

	while(1){

	}
}

void createMonitorTask(threadShared_t *critical)
{
    xTaskCreate(vMonitorTask, "Monitor", configMINIMAL_STACK_SIZE,
            (void * ) critical, MONITOR_PRIORITY, NULL);
}
