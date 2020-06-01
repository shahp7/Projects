#loading in the ggplot2 and readx1
library("ggplot2")
library("readxl")

# loading in the dataset on the computer
mydata <- read.csv("Mispriced-Diamonds.csv")

# setting up the graph
ggplot(data=mydata[mydata$carat<2.5,], 
       aes(x=carat, y=price, colour=clarity)) +
  #point graph
  geom_point(alpha=0.1) + geom_smooth()
