names=[]
scores=[]
for _ in range(int(raw_input())):
    name = raw_input()
    score = float(raw_input())
    # append all names and scores in two separate list
    names.append(name) 
    scores.append(score)
    
# create a dictionary to store as key value pair
names_scores=zip(names,scores)
names_scores=dict(names_scores)


# sort dictionary based on score value
names_scores=sorted(names_scores.items(), key=lambda name_score: name_score[1])



# get the first_lowest_score
first_lowest= min(scores)

# assume second lowest score
second_lowest=9999999
# store all second lowest scores
second_lowest_name_score_list=[]

for name,score in names_scores:
    if score!=first_lowest:
        # find the second lowest score from the score list
        second_lowest=min(second_lowest,score)

# to store all second lowest score with name        
final_list=[]   
# store all name, score pair those who get the second lowest score     
for i,j in names_scores:
    if j==second_lowest:
        final_list.append([i,j])

# sort alphabetically
final_list=sorted(final_list, key=lambda x: x[0])
for i,_ in final_list:
    print(i)
