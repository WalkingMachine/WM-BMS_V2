/*
 * _TASK_finiteStateMachine.c
 *
 *  Created on: Feb 4, 2017
 *      Author: alexc
 */

#include "BMS_tasks.h"

/* This task run the finite state machine that control the BMS.
 * It must check the battery state and control the FET according
 * to the current state */
extern void vMachineTask(void *vParameters) {

	while(1){

	}
}


void createMachineTask(threadShared_t *critical)
{
    xTaskCreate(vMachineTask, "Machine", configMINIMAL_STACK_SIZE,
            (void * ) critical, MACHINE_PRIORITY, NULL);
}
