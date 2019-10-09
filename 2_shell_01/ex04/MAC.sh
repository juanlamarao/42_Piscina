#!/bin/sh
ifconfig | grep -o -E '([[:alnum:]]{2}:){5}([[:alnum:]]{2})'
