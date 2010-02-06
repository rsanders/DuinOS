
#include <WProgram.h>
#include "DuinOS.h"
#include "duinos_main.h"

unsigned portBASE_TYPE mainLoopPriority = LOW_PRIORITY;

void duinos_main_Task(void *pvParameters)
{
	for(;;)
		loop();
}


void startDuinOS(void) 
{
	xTaskCreate(duinos_main_Task, (signed portCHAR *) "main", 
	            configMINIMAL_STACK_SIZE, NULL, mainLoopPriority, NULL);
	vTaskStartScheduler();

	//Will not get here unless a task calls vTaskEndScheduler():
	for (;;);
}
