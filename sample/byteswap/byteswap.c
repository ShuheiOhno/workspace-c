wap.cC
/*
 * Author: Hiroyuki Chishiro
 * License: 2-Clause BSD
 */
#include <stdio.h>
#include <stdint.h>
#include <byteswap.h>
 
int main(void)
{
  uint16_t u16;
  uint32_t u32;
  uint64_t u64;
 
  printf("Please input a 16-bit unsigned integer: 0x");
  scanf("%hx", &u16);
  printf("bswap_16(0x%hx) = 0x%hx\n", u16, bswap_16(u16));
 
  printf("Please input a 32-bit unsigned integer: 0x");
  scanf("%x", &u32);
  printf("bswap_32(0x%x) = 0x%x\n", u32, bswap_32(u32));
 
  printf("Please input a 32-bit unsigned integer: 0x");
  scanf("%lx", &u64);
  printf("bswap_64(0x%lx) = 0x%lx\n", u64, bswap_64(u64));
 
  return 0;
}