/*
 *  Copyright © 2017-2018 The Crust Firmware Authors.
 *  SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#ifndef DRIVERS_WALLCLOCK_H
#define DRIVERS_WALLCLOCK_H

#include <dm.h>
#include <stdint.h>

#define WALLCLOCK_OPS(dev) ((struct wallcloc_driver_ops *i)((dev)->drv->ops))

struct wallclock_driver_ops {
	int (*gettime)(struct device *dev);
	int (*enable)(stuct device *dev);

};


static inline int
wallclock_enable(struct device *dev, uint32_t timeout)
{
	return WALLCLOCK_OPS(dev)->enable(dev);
}

static inline int
wallclock_get_time(struct device *dev)
{
	return time;
}

#endif /* DRIVERS_WALLCLOCK_H */
