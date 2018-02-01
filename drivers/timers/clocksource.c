/* Copyright © 2018 Adam Otto <ottomada@gmail.com>
 * Copyright © 2017 Samuel Holland <samuel@sholland.org>
 * SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#include <drivers/timer.h>

//call in main to start timer on boot
void timer_init()
{

}


static int get_time()
{
	uint64_t time;


	//use CNT64 from A20 manual. 

	return time;
}

void set_timeout(){
// will be moved to a seperate driver
}
