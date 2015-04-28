//
//  aklog.h
//  AK-MK
//
//  Created by Arkinux on 15/4/28.
//  Copyright (c) 2015Äê Arkinux. All rights reserved.
//
 
#ifndef _AK_LOG_H
#define _AK_LOG_H
#include <stdio.h>

#define NONE         "\033[m"
#define RED          "\033[0;32;31m"
#define LIGHT_RED    "\033[1;31m"
#define GREEN        "\033[0;32;32m"
#define LIGHT_GREEN  "\033[1;32m"
#define BLUE         "\033[0;32;34m"
#define LIGHT_BLUE   "\033[1;34m"
#define DARY_GRAY    "\033[1;30m"
#define CYAN         "\033[0;36m"
#define LIGHT_CYAN   "\033[1;36m"
#define PURPLE       "\033[0;35m"
#define LIGHT_PURPLE "\033[1;35m"
#define BROWN        "\033[0;33m"
#define YELLOW       "\033[1;33m"
#define LIGHT_GRAY   "\033[0;37m"
#define WHITE        "\033[1;37m"


#define LOG_RED(fmt, arg...)           printf(RED    fmt NONE, ##arg)
#define LOG_YELLOW(fmt, arg...)        printf(YELLOW fmt NONE, ##arg)
#define LOG_GREEN(fmt, arg...)         printf(GREEN  fmt NONE, ##arg)
#define LOG_BLUE(fmt, arg...)          printf(BLUE   fmt NONE, ##arg)
#define LOG_CYAN(fmt, arg...)          printf(CYAN   fmt NONE, ##arg)
#define LOG_PURPLE(fmt, arg...)        printf(PURPLE fmt NONE, ##arg)
#define LOG_BROWN(fmt, arg...)         printf(BROWN  fmt NONE, ##arg)
#define LOG_WHITE(fmt, arg...)         printf(WHITE  fmt NONE, ##arg)

#define LOG_DARY_GRAY(fmt, arg...)     printf(DARY_GRAY    fmt NONE, ##arg)
#define LOG_LIGHT_RED(fmt, arg...)     printf(LIGHT_RED    fmt NONE, ##arg)
#define LOG_LIGHT_GREEN(fmt, arg...)   printf(LIGHT_GREEN  fmt NONE, ##arg)
#define LOG_LIGHT_BLUE(fmt, arg...)    printf(LIGHT_BLUE   fmt NONE, ##arg)
#define LOG_LIGHT_CYAN(fmt, arg...)    printf(LIGHT_CYAN   fmt NONE, ##arg)
#define LOG_LIGHT_PURPLE(fmt, arg...)  printf(LIGHT_PURPLE fmt NONE, ##arg)
#define LOG_LIGHT_GRAY(fmt, arg...)    printf(LIGHT_GRAY   fmt NONE, ##arg)

#define LOG_ERR(fmt, arg...)           printf(RED    fmt NONE, ##arg)
#define LOG_WAR(fmt, arg...)           printf(YELLOW fmt NONE, ##arg)
#define LOG_MSG(fmt, arg...)           printf(GREEN  fmt NONE, ##arg)
#define LOG_DBG(fmt, arg...)           printf(BLUE   fmt NONE, ##arg)

#endif /* _AK_LOG_H */
