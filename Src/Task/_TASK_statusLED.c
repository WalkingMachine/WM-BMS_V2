#include "BMS_tasks.h"
#include "battery.h"
#include "mlist.h"
#include "cell.h"
#include "rtc.h"
#include "gpio.h"

#define LED_READ_OD_QUEUE_LENGTH 1

#if TRACE_DEBUG
    #define LED_STACK_SIZE (2048/4)
#else
    #define LED_STACK_SIZE (2048/4)
#endif

// Task to blink LED depending on state the state of the BMS
extern void vStatusLEDTask(void *vParameters) {

    // Initial Standby
    vTaskDelay(1000/portTICK_RATE_MS);

    while (1) {

#if SWV_DEBUG
        trace_puts("Status LED Task");
#endif


            // TODO: Different flashing modes for different states/health etc
            // Just flash anyways for now....

    }

}

void createStatusLEDTask(threadShared_t *critical) {
    xTaskCreate(vStatusLEDTask, "Blinker", configMINIMAL_STACK_SIZE,
            (void * ) critical, LED_PRIORITY, NULL);
}
