#include <linux/types.h>
#include <linux/time_types.h>
struct timeval {
	__kernel_old_time_t	tv_sec;		/* seconds */
	__kernel_suseconds_t	tv_usec;	/* microseconds */
};
