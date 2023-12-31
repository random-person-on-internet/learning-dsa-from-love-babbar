we need to minimize the search area for our binary search algo
(assume array(no of pages) is = {10,20,30,40}, number of students = 2)
think it like this, max number of pages possible = sum of all elements
(here it's 100)

minimum possible = 0, max possible = 100
mid = 50
first student   = 10 - possible
                = 10+20 - possible
                but 10+20+30>50 - so not possible

now lets try allocating rest of the books to second student
second student  = 30 - possible
                = 30+40 >50 - so its not possible

hence... we need third student if we want to keep maximum alloted pages at 50, BUT number of students = 2
so max pages possible > 50 for sure

NOW search area = 51-100
do it again with loops, make sure to try writing code yourself before checking mine, goodluck!



===========================================================


in case you need further help with logic:
search area = 51-100
mid (maximum number of pages we try this time)= 75

first student   = 10 - possible
                = 10+20 - possible
                = 10+20+30 - possible
                = 10+20+30+40>75 - not possible

second student = 40 - possible
hence, this is a POSSIBILE SOLUTION but there might always be a better one so now decrese the search area to 51-75

search area = 51-74
mid = 62
first student   = 10 - possible
                ....
                = 10+20+30+40>62 - not possible

second student = 40 - possible

NOW, SEARCH AREA DECRESES AGAIN