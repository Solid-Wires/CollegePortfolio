#ifndef SW_COOPPROCESSES_CLIENT
#define SW_COOPPROCESSES_CLIENT
#include "common.h"

// Client constants
#define CLIENT_QUEUE_NAME   "/sw-coop-processes-client-%d"

// Client fields
extern mqd_t qd_client;
extern char client_queue_name[MAX_CLIENT_NAME_SIZE];
extern int clientExtTemp;

// Client functions, defined by ClientProcedures.cpp
int ExternalTempCalculation(float centralTemp);
void GreetAndAwaitInitiationResponseFromServer(void);
void ListenForCentralTempAndUpdateExternalTemp(void);

#endif