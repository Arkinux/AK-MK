//
//  hello.c
//  AK-MK
//
//  Created by Arkinux on 15/4/28.
//  Copyright (c) 2015Äê Arkinux. All rights reserved.
//

#include "aklog.h"

int main(int argc, char **argv)
{
    char *p_str = "Hello World!";

    LOG_RED("%s Red\n", p_str);
    LOG_GREEN("%s Green\n", p_str);
    LOG_BLUE("%s Blue\n", p_str);
    LOG_YELLOW("%s Yellow\n", p_str);
    LOG_CYAN("%s Cyan\n", p_str);
    LOG_PURPLE("%s Purple\n", p_str);
    LOG_BROWN("%s Brown\n", p_str);
    LOG_WHITE("%s White\n", p_str);
    LOG_DARY_GRAY("%s Dary Gray\n", p_str);
    LOG_LIGHT_RED("%s Light Red\n", p_str);
    LOG_LIGHT_GREEN("%s Light Green\n", p_str);
    LOG_LIGHT_BLUE("%s Light Blue\n", p_str);
    LOG_LIGHT_CYAN("%s Light Cyan\n", p_str);
    LOG_LIGHT_PURPLE("%s Light Purple\n", p_str);
    LOG_LIGHT_GRAY("%s Light Gray\n", p_str);       

    return 0;
}
