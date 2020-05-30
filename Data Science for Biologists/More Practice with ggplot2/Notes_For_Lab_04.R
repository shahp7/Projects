# this is the new lab that will be due 2/13. 

library(tidyverse)

# It will be the refresher on fll and color

#1. give ggplot geom a color or fill 

ggplot(iris, aes(x=Petal.Length)) + 
  geom_histogram(color="purple", fill="gold")

#2. making each speices have a different color
ggplot(iris, aes(x=Species, y=Petal.Length, fill=Species)) + 
  geom_boxplot()

#3. How to be creatize to n the colors
ggplot(iris, aes(x=Species, y=Petal.Length, fill=Species)) + 
  geom_boxplot() + 
  scale_fill_manual(values = c("purple", "red", "pink3"))

# how to clear up the lenands aka the key on the graph
ggplot(iris, aes(x=Species, y=Petal.Length, fill=Species)) + 
  geom_boxplot() + 
  scale_fill_manual(values = c("purple", "red", "pink3"))+
  labs(fill="KEY CODE")
#OOOORRRR
ggplot(iris, aes(x=Species, y=Petal.Length, fill=Species)) + 
  geom_boxplot() + 
  scale_fill_manual(name= "NAMMME", values = c("purple", "red", "pink3"))

#. This is the Brewer function. It will show up a palette of colors. 
ggplot(iris, aes(x=Species, y=Petal.Length, fill=Species)) + 
  geom_boxplot() + 
  scale_fill_brewer(palette = "Dark2")
