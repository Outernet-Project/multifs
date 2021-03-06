/*
	multifs - Multi HDD [FUSE] File System
        Copyright (C) 2016 Outernet Inc <abhishek@outernet.is>

        derived from mhddfs
	Copyright (C) 2008 Dmitry E. Oboukhov <dimka@avanto.org>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.

*/
#include <stdlib.h>
#include "usage.h"

void usage(FILE * to)
{
	fprintf(to,
		"\n"
		"Multi-hdd FUSE filesystem\n"
        	" Copyright (C) 2016 Outernet Inc <abhishek@outernet.is>\n\n"
	        " derived from mhddfs\n"
		" Copyright (C) 2008, Dmitry E. Oboukhov <dimka@avanto.org>\n"
		"\n"
		"Usage:\n"
		" multifs dir1,dir2.. mountpoint [ -o OPTIONS ]\n"
		"\n"
		"OPTIONS:\n"
		"  mlimit=xxx - limit of the disk free space (if the disk\n"
		"          has the free space more than specified - it is\n"
		"          considered as the empty one).  Default is  4Gb,\n"
		"          but 1Mb at least.\n"
		"  logfile=/path/to/file  -  path to a file where the logs\n"
		"          will be stored.\n"
		"  loglevel=x - level for log-messages:\n"
		"                0 - debug\n"
		"                1 - info\n"
		"                2 - default messages\n"
		"\n"
		" see fusermount(1) for information about other options\n"
		""
	);
	if (to==stdout) exit(0);
	exit(-1);
}
