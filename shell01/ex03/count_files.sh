#!/bin/bash
find . -exec printf %c {} + | wc -c
