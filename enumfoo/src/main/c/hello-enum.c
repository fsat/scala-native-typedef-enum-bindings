#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include "enumfoo.h"

int main() {
  print_plant_enum_name(CACTUS);
  print_magic_enum_name(MAGIC_RABBIT);
  print_curl_enum_name(CURLOPT_URL);

  return 0;
}
