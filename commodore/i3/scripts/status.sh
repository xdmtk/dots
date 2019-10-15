#!/bin/bash
i3status -c /home/xdmtk/.config/i3/status | while :
do
    read line
    weather=$(python3 /home/xdmtk/.config/i3/scripts/weather.py)
    echo "WEATHER: $weather | $line" || exit 1
done
