#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include "enumfoo.h"

void print_plant_enum_name(Plant input) {
  if (input == CACTUS) {
    printf("enum: Plant - name: CACTUS\n");
  } else if (input == PINE) {
    printf("enum: Plant - name: PINE\n");
  }
}

void print_magic_enum_name(Magic input) {
  if (input == MAGIC_RABBIT) {
    printf("enum: Magic - name: MAGIC_RABBIT\n");
  } else if (input == MAGIC_HAT) {
    printf("enum: Magic - name: MAGIC_HAT\n");
  }
}


void print_curl_enum_name(CURLoption input) {
  if (input == CURLOPT_URL) {
    printf("enum: CURLoption - name: CURLOPT_URL\n");
  } else {
    printf("enum: CURLoption - name: todo\n");
  }

}
