/**
 * \file kv_main.c
 * \brief
 * \version 0.1
 * \date 2022-10-29
 * \author notrynohigh (notrynohigh@outlook.com)
 *
 * Copyright (c) 2020 by notrynohigh. All Rights Reserved.
 */
#include "../port.h"
#include "b_config.h"
#include "b_os.h"

int main()
{
    port_init();
    bInit();
    while (1)
    {
        bExec();
    }
    return 0;
}