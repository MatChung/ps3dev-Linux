#ifndef _SYS_DIRENT_H
#define _SYS_DIRENT_H

#include <stdint.h>
#include <unistd.h>
#include <sys/types.h>

typedef struct _dirdesc {
	int32_t	dd_fd;
	int32_t	dd_loc;
	int32_t	dd_size;
	void*	dd_buf;
	size_t	dd_len;
	int32_t	dd_seek;
	int32_t	dd_rewind;
	int32_t	dd_flags;
} DIR;

#define dirfd(dp) ((dp)->dd_fd)

struct dirent {
	union {
		ino_t		d_ino;
		ino_t		d_fileno;
	};
	uint8_t		d_type;
	uint16_t	d_seekoff;
	uint16_t	d_reclen;
	uint16_t	d_namlen;
	char		d_name[MAXPATHLEN + 1];
};

// File Types
#define DT_INVALID	0xFF
#define DT_UNKNOWN	0
#define DT_FIFO		DT_INVALID
#define DT_CHR		DT_INVALID
#define DT_DIR		1
#define DT_BLK		DT_INVALID
#define DT_REG		2
#define DT_LNK		3
#define DT_SOCK		DT_INVALID
#define DT_WHT		DT_INVALID

#ifdef __cplusplus
extern "C" {
#endif

int closedir(DIR *);
DIR *opendir(const char *);
struct dirent *readdir(DIR *);
int readdir_r(DIR *, struct dirent *, struct dirent **);
void rewinddir(DIR *);
void seekdir(DIR *, long int);
long int telldir(DIR *);

#ifdef __cplusplus
}
#endif

#endif
