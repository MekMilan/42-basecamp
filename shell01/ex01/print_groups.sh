#!/bin/sh
groups $FT_USER | tr -s " " "," | tr -d "\n"