//
//  Created by james on 5/5/14.
//  Copyright (c) 2014 james. All rights reserved.
//

#include <sys/systm.h> // Gets you printf()
#include <mach/mach_types.h>

kern_return_t helowrld_kext_start(kmod_info_t * ki, void *d);
kern_return_t helowrld_kext_stop(kmod_info_t *ki, void *d);

kern_return_t helowrld_kext_start(kmod_info_t * ki, void *d)
{
    printf("helowrld\n");
    return KERN_SUCCESS;
}

kern_return_t helowrld_kext_stop(kmod_info_t *ki, void *d)
{
    printf("helowrld:stop\n");
    return KERN_SUCCESS;
}
