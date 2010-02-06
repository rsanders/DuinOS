#ifndef DUINOS_MAIN_H
#define DUINOS_MAIN_H

#ifdef __cplusplus
extern "C"{
#endif

void startDuinOS(void) __attribute__ ((naked));

extern unsigned portBASE_TYPE mainLoopPriority;

#ifdef __cplusplus
} // extern "C"
#endif


#endif
