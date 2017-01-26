/*
 * power.c
 *
 *  Created on: Jan 19, 2017
 *      Author: alexc
 */
#include "main.h"

#include "gpio.h"
#include "power.h"

void battery_shutdown(battery_t *b){
	if(b != NULL){
		if(b->battery_id == BATTERY_1_ID){
			HAL_GPIO_WritePin(B1_CHARGE_GPIO_Port, B1_CHARGE_Pin | B1_DISCHARGE_Pin, GPIO_PIN_RESET);
		}
		if(b->battery_id == BATTERY_2_ID){
			HAL_GPIO_WritePin(B2_CHARGE_GPIO_Port, B2_CHARGE_Pin | B2_DISCHARGE_Pin, GPIO_PIN_RESET);
		}
		b->status = BATTERY_STATUS_SHUTDOWN;
	}
}

void battery_discharge(battery_t *b){
	if(b != NULL){
		if(b->battery_id == BATTERY_1_ID){
			HAL_GPIO_WritePin(B1_CHARGE_GPIO_Port, B1_CHARGE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B1_DISCHARGE_GPIO_Port, B1_DISCHARGE_Pin, GPIO_PIN_SET);
		}
		if(b->battery_id == BATTERY_2_ID){
			HAL_GPIO_WritePin(B2_CHARGE_GPIO_Port, B2_CHARGE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_DISCHARGE_GPIO_Port, B2_DISCHARGE_Pin, GPIO_PIN_SET);
		}
		b->status = BATTERY_STATUS_DISCHARGING;
	}
}

void battery_charge(battery_t *b){
	if(b != NULL){
		if(b->battery_id == BATTERY_1_ID){
			HAL_GPIO_WritePin(B1_DISCHARGE_GPIO_Port, B1_DISCHARGE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B1_CHARGE_GPIO_Port, B1_CHARGE_Pin, GPIO_PIN_SET);
		}
		if(b->battery_id == BATTERY_2_ID){
			HAL_GPIO_WritePin(B2_DISCHARGE_GPIO_Port, B2_DISCHARGE_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(B2_CHARGE_GPIO_Port, B2_CHARGE_Pin, GPIO_PIN_SET);
		}
		b->status = BATTERY_STATUS_CHARGING;
	}
}
