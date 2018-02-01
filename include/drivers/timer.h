/*
 * Copyright © 2018 Adam Otto <ottomada@gmail.com>
 * Copyright © Samuel Holland <samuel@sholland.org>
 * SPDX-License-Identifier: (BSD-3-Clause OR GPL-2.0)
 */

#ifndef DRIVERS_TIMER_H
#define DRIVERS_TIMER_H

void timer_init();
static int get_time();
void set_timeout();
#endif
