#!/bin/bash
wget -P tmp https://raw.githubusercontent.com/EmadAnwer/alx-low_level_programming/master/0x18-dynamic_libraries/librand_override.so
export LD_PRELOAD=tmp/librand_override.so
