/********************************************************************
* $ID: main.c               Wed 2016-09-07 11:18:13 +0800  lz       *
*                                                                   *
* Description:                                                      *
*                                                                   *
* Maintainer:  (lizhu)  <lizhu@zhytek.com>                 *
*                                                                   *
* CopyRight (c) 2016 ZHYTEK                                         *
*   All rights reserved.                                            *
*                                                                   *
* This file is free software;                                       *
*   you are free to modify and/or redistribute it                   *
*   under the terms of the GNU General Public Licence (GPL).        *
*                                                                   *
* Last modified:                                                    *
*                                                                   *
* No warranty, no liability, use this at your own risk!             *
********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/socket.h>
#include <netinet/in.h>
int main (void)
{
  char IPdotdec[20]; // 存放点分十进制IP地址
  struct in_addr s;  // IPv4地址结构体
  // 输入IP地址
  printf("Please input IP address: ");
  scanf("%s", &IPdotdec);
  // 转换
  inet_pton(AF_INET, IPdotdec, (void *)&s);
  printf("inet_pton: 0x%x\n", s.s_addr); // 注意得到的字节序
  // 反转换
  inet_ntop(AF_INET, (void *)&s, IPdotdec, 16);
  printf("inet_ntop: %s\n", IPdotdec);
}



/********************* End Of File: main.c *********************/
