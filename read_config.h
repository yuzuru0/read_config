#ifndef __READ_CONFIG_H__
#define __READ_CONFIG_H__

#define CONF_MAX_STR 256

struct s_config_data
{
	char config_name[CONF_MAX_STR];
	char config_value[CONF_MAX_STR];
	struct s_config_data  *next;
};

typedef struct s_config_data config_data;

#endif
