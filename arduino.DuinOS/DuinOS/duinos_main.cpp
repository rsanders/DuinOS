
#include <WProgram.h>
#include "DuinOS.h"
#include "duinos_main.h"

unsigned portBASE_TYPE mainLoopPriority;

void duinos_main_Task(void *pvParameters)
{
	for(;;)
		loop();
}


void startDuinOS(void)
{
	//This is made prior to setup(), so this priority could be changed in setup():
	mainLoopPriority = LOW_PRIORITY;

	xTaskCreate(duinos_main_Task, (signed portCHAR *) "main", 
	            configMINIMAL_STACK_SIZE, NULL, mainLoopPriority, NULL);
	vTaskStartScheduler();

	//Will not get here unless a task calls vTaskEndScheduler():
	for (;;);

}
