This repo was based upon the v0.1alpha distribution of DuinOS, with some small patches
to make the demo program compile and run under the Arduino 0018 environment.

Robert Sanders
robert@curioussquid.com
2010-02-01

References:

See http://github.com/rsanders/DuinOS for my Git repository.
See http://www.multiplo.org/duinos/wiki/index.php for the original DuinOS distribution.
See http://freertos.org/ for the RTOS upon which DuinOS is based.

Changes:

* Moved FreeRTOS tick handling to Timer 0
* Restored heap 2 and heap 3 options
* Re-enabled some FreeRTOS options which had been disabled
* Replaced specialized main.cpp with standard one; now must start DuinOS with
     startDuinOS(); call in sketch's setup() function.
