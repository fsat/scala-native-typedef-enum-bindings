#include <curl/curl.h>

#ifndef enumfoo_h__
#define enumfoo_h__

typedef enum {
  CACTUS = 0,
  PINE = 1
} Plant;

extern void print_plant_enum_name(Plant input);

#define M_INIT(name, number) MAGIC_##name = number

typedef enum {
  M_INIT(RABBIT, 0), // MAGIC_RABBIT = 0
  M_INIT(HAT, 100) // MAGIC_HAT = 100
} Magic;

extern void print_magic_enum_name(Magic input);

extern void print_curl_enum_name(CURLoption input);

#endif // enumfoo_h__
