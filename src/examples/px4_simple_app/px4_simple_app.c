#include <time.h>
#include <px4_log.h>

__EXPORT int px4_simple_app_main(int argc, char *argv[]);

int px4_simple_app_main(int argc, char *argv[])
{
    while(1) {
        PX4_INFO("Hello Sky!");
        usleep(1000000); /* Delay 1s */
    }
    return OK;
}
