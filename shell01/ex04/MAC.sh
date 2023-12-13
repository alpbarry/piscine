#!/bin/bash
ifconfig  -a |grep -o -E '([0-9a-fA-F]{2}:){5}[0-94-fA-F]{2}'
