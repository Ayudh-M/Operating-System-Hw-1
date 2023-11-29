/* 
 * Operating Systems  (2INCO)  Practical Assignment
 * Interprocess Communication
 *
 * Ayudh Haldar (1694618)
 * Abbas Hussain (1654411)
 *
 * Grading: 
 * Your work will be evaluated based on the following criteria:
 * - Satisfaction of all the specifications
 * - Correctness of the program
 * - Coding style
 * - Report quality
 * - Deadlock analysis
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <errno.h>    
#include <unistd.h>    // for execlp
#include <mqueue.h>    // for mq


#include "settings.h"  
#include "messages.h"

char client2dealer_name[20] = "/client2dealer";
char dealer2worker1_name[20] = "/dealer2worker1";
char dealer2worker2_name[20] = "/dealer2worker2";
char worker2dealer_name[20] = "/worker2dealer";
char myname[20] = "Ayudh";

void initializeQueueNames() {
    pid_t pid = getpid();
    sprintf(client2dealer_name, "Req_queue_%s%d", myname, pid);
    sprintf(dealer2worker1_name, "S1_queue_%s%d", myname, pid);
    sprintf(dealer2worker2_name, "S2_queue_%s%d", myname, pid);
    sprintf(worker2dealer_name, "Rsp_queue_%s%d", myname, pid);

}


int main (int argc, char * argv[])
{
      initializeQueueNames(); 

  if (argc != 1)
  {
    fprintf (stderr, "%s: invalid arguments\n", argv[0]);
  }
  
  // TODO:
    //  * create the message queues (see message_queue_test() in
    //    interprocess_basic.c)
    //  * create the child processes (see process_test() and
    //    message_queue_test())
    //  * read requests from the Req queue and transfer them to the workers
    //    with the Sx queues
    //  * read answers from workers in the Rep queue and print them
    //  * wait until the client has been stopped (see process_test())
    //  * clean up the message queues (see message_queue_test())

    // Important notice: make sure that the names of the message queues
    // contain your goup number (to ensure uniqueness during testing)
  
  return (0);
}
