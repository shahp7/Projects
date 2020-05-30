#Today is Justin bithday which may is 2-19-2020
library(tidyverse)

#Part 1
#We made a new data about cookies and loading it in
girl <- read_csv("girl_scouts1.csv")

#making a new column wiht mutate
girl %>%
  mutate(yumminess= if_else(deliciousness <5, "not yummy", "yummy"))
# the answer to the chart below 
# A tibble: 4 x 3
#name       deliciousness yumminess
#<chr>              <dbl> <chr>    
#  1 thinMints              6 yummy    
#2 Tagalong              10 yummy    
#3 Lemonade               8 yummy    
#4 Shortbread             2 not yummy


girl %>%
  mutate(yumminess= if_else(deliciousness >=5, "yes", "no"))
#the same as above

#Using the case_when 
girl %>%
  mutate(new_scale= case_when(deliciousness <=3 ~"gross", 
                              deliciousness > 3 & deliciousness < 7 ~ "fine", 
                              deliciousness >= 7 ~ "great"
                              ))
                              ## < deliciiousness < 7 NO this is how we write it in the real world
######################################################################################

#Part 2

#It will deleted the missing the data column
girl %>%
  drop_na()

# it will replace the list with the NA to a whatever number you
girl %>%
  replace_na(list(deliciousness = -7))

#########################################################################

#part 3

girl1 <- read_csv("girl_scouts1.csv")
girl2 <- read_csv("girl_scouts2.csv")


bind_cols(girl1, girl2)


girl1 %>%
  select(-name) %>%
  bind_cols(girl2) %>%
  select(name, everything())


left_join(girl1, girl2)

right_join(girl1, girl2)

inner_join(girl1, girl2) 

anti_join(girl1, girl2)
