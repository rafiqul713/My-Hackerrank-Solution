#!/bin/python3

import math
import os
import random
import re
import sys

# Complete the solve function below.
def solve(s):
    splitted_string=s.split(" ")
    
    result=""
    for word in splitted_string:
       word=word+" "
       result+=word.capitalize()
       
   
    return result

if __name__ == '__main__':