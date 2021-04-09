#
#  Author: Rafiqul Islam
#  Count individual sad/happy faces
#  The problem is solved using regular expression


import re

'''
A regular expression (or RE) specifies a set of strings that matches it; 
the functions in this module let you check if a particular string matches a 
given regular expression.
https://docs.python.org/3/library/re.html

'''

def happy_faces(emo_string):
    '''
    valid happy faces are :) or :~)
    : means eyes
    - or ~ means nose
    ) means mouth

    ref: https://en.wikipedia.org/wiki/List_of_emoticons

    Parameters
    ----------
    emo_string: string that contains valid and/or invalid happy faces, other emotions

    Returns
    -------
    return total number of happy faces
    '''
    return len(re.findall('[:;][-~]?[)]',str(emo_string))) # match pattern
                                                           # [:;] means pattern : or ;
                                                           # ? means 0 times of 1 times this pattern is founded

def sad_faces(emo_string):
    '''
    valid sad face is :(
    : means eyes
    ( means mouth

    ref: https://en.wikipedia.org/wiki/List_of_emoticons

    Parameters
    ----------
    emo_string: string that contains valid and/or invalid sad faces, other emotions

    Returns
    -------
    return total number of sad faces
    '''

    return len(re.findall('[:;][-~]?[(]',str(emo_string)))


emo_string=":())):::(:(:):)(:(:)"
print("Total number of happy faces : ",happy_faces(emo_string))
print("Total number of sad faces   : ",sad_faces(emo_string))