#!/bin/bash
cat /etc/passwd | sed -n 'n;p' | awk  -va="$FT_LINE1" -vb="$FT_LINE2"  