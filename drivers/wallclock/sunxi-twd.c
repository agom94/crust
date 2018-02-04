/*
 * Copyright © 2017-2018 The Crust Firmware Authors.
 * SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#include <error.h>
#include <mmio.h>
#include <drivers/clock.h>
#include <drivers/wallclock.h>

#define  OSC24M_CNT64_CTRL_REG		0x28
#define CNT64_RL_EN // needs to be left shift 1 of OSC24M_CNT64_CTRL_REG??
#define OSC24M_CNT64_LOW_REG		0x284
#define OSC24M_CNT64_HIGH__REG		0x288

static int
sunxi_wallclock_enable(struct device *dev)
{
	//enable wallclock
	//

	return SUCCESS;
}

static int
sunxi_wallclock_get_time(struct device *dev)
{
	uint64_t time;
	uint32_t high_reg;
	uint32_t low_reg
	mmio_write(dev->regs + CNT64_RL_EN, 1);
	while (1){
		if (CNT64_RL_EN == 0){// not going to work. need to read the 1 bit at that location, look into bit function
			low_reg = mmio_read32(dev->regs + OSC24M_CNT64_LOW_REG);
			high_reg =  mmio_read32(dev->regs + OSC24M_CNT64_HIGH_REG);
			time = ((uint64_t)low_reg << 32) | high_reg
			break;
		}
	}
	return time;
}

static int
sunxi_wallclock_probe(struct device *devi __unused)
{
	return SUCCESS;
}


static const struct wallclock_driver_ops sunxi_watchdog_driver_ops = {
	.gettime = sunxi_wallclock_get_time,
	.enable  = sunxi_wallclock_enable,
};

const struct driver sunxi_twd_driver = {
	.name  = "sunxi-osc24m-cnt64",
	.class = DM_CLASS_WALLCLOCK,
	.probe = sunxi_wallclock_probe,
	.ops   = &sunxi_wallclock_driver_ops,
};




