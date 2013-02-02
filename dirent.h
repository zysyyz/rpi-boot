#ifndef DIRENT_H
#define DIRENT_H

#include "fs.h"
#include <stdint.h>

struct dirent {
	struct dirent *next;
	char *name;
	uint32_t byte_size;
	uint8_t is_dir;
	void *opaque;
	struct fs *fs;
};

struct dir_info { 
	char *d_name;
	void *opaque;
};

typedef struct dir_info DIR;

#endif

