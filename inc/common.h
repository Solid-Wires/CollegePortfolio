#ifndef SW_COOPPROCESSES_COMMON
#define SW_COOPPROCESSES_COMMON

// Definitions shard between the client and server.
#define SERVER_QUEUE_NAME   "/sw-coop-processes-server"
#define QUEUE_PERMISSIONS 0660  // like chmod values, user and owner can read and write to queue
#define MAX_MESSAGES 10
#define MAX_MSG_SIZE 256
#define MSG_BUFFER_SIZE MAX_MSG_SIZE + 10   // leave some extra space after message

#endif