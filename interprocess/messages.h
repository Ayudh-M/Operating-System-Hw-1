/* 
 * Operating Systems  (2INCO)  Practical Assignment
 * Interprocess Communication
 *
 * STUDENT_NAME_1 (STUDENT_NR_1)
 * STUDENT_NAME_2 (STUDENT_NR_2)
 *
 * Grading:
 * Your work will be evaluated based on the following criteria:
 * - Satisfaction of all the specifications
 * - Correctness of the program
 * - Coding style
 * - Report quality
 * - Deadlock analysis
 */

#ifndef MESSAGES_H
#define MESSAGES_H

// define the data structures for your messages here.
typedef struct
{
    // the message type for the req queue message this is the queue from client to dealer
    unsigned int requestId; // Unique request identifier
    int serviceType; // Type of service requested (1 for Service1, 2 for Service2)
    char inputData[256]; // Input data 
} REQ_QUEUE_MESSAGE;

typedef struct
{
    // the message type for the S queue message this is the queue from dealer to the 2 workers depending on the service type form the first message the dealer
    // will put up the message on the appropriate queue but the message format for S1 and S2 for now should be the same (from what i understand) will chnage later if needed.
    unsigned int requestId; // Unique request identifier
    char inputData[256]; // Input data 
} S_QUEUE_MESSAGE;

typedef struct
{
    // the message type for the response queue message this is the queue from the workers to the dealer, may need to return a service type, maybe not sure yet what to do with messages after getting it done and back in the dealer 
    unsigned int requestId; // Unique request identifier
    char inputData[256]; // Input data 
} RSP_QUEUE_MESSAGE;



#endif
