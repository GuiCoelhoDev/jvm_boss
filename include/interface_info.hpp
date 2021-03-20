#ifndef __INTERFACE_INFO_H__
#define __INTERFACE_INFO_H__

#include "file_reader.hpp"

struct Class_File_Format;

typedef struct Interface_Info{
	u2 interface_table;
} Interface_Info;

/* INTERFACE_INFO */
void read_interface_info(FILE *file, Class_File_Format *class_file);
Interface_Info get_interface_info(FILE *file, Class_File_Format *class_file, Interface_Info interface_info);

#endif