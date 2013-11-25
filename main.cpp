#include "md5.h"

int main(int argc, char * argv[])
{
 if(argc !=  2)
 {
  printf("Some errors. Write -help\n");
  return 0;
 }
 else if(strcmp(argv[1],"-help") == 0)
 {
  printf("Write checksum of MD5 (128-bit).\nUse: md5 [FILE]\n");
  return 0;
 }
 else
 {
  MD5 md5;
  printf("%s\n", md5.digestFile(argv[1]));
 }
 return 0;
}
