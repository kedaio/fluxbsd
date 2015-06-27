/* -*- mode: c; c-basic-offset: 4; tab-width: 4; indent-tabs-mode: t -*- */

#ifndef OPENBSD_H_
#define OPENBSD_H_

#ifndef MAXSENSORDEVICES
#define MAXSENSORDEVICES 1024
#endif

#include "common.h"
#include "temphelper.h"
#include <sys/param.h>
#include <sys/sysctl.h>
#include <sys/sensors.h>
#include <machine/apmvar.h>

void parse_obsd_sensor(struct text_object *, const char *);
void print_obsd_sensors_temp(struct text_object *, char *, int);
void print_obsd_sensors_fan(struct text_object *, char *, int);
void print_obsd_sensors_volt(struct text_object *, char *, int);
void get_obsd_vendor(char *buf, size_t client_buffer_size);
void get_obsd_product(char *buf, size_t client_buffer_size);

typedef struct apm_power_info *apm_info_t;

int get_entropy_avail(unsigned int *);
int get_entropy_poolsize(unsigned int *);

static int sensor_device;
#endif /*OPENBSD_H_*/
