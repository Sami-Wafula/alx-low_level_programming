#!/bin/bash
wget -qO /tmp/ https://github.com/Sami-Wafula/alx-low_level_programming/blob/main/0x18-dynamic_libraries/rand.so
export LD_PRELOAD=/tmp/rand.so
