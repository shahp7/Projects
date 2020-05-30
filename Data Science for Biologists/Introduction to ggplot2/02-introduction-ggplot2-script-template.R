##########################################################################################
########################## INTRODUCTION TO ggplot2 #######################################
##########################################################################################

### Your name: Poonam Shah


# Load ggplot2 library
library(ggplot2)
# If you will be loading other optional libraries, do so on the next line(s). No other libraries are required for this lab/assignment.


############################################
############## Exercise Set 1 ##############
############################################


################
# Question 1.1 #
################

#things to do is color, fill, and bins/binwidth, clean labels, theme that is not the normal (use ggplot theme for more fun), then save as a png


ggplot(iris, aes(x=Petal.Length)) + 
geom_histogram(color="gray0", 
               fill="steelblue", 
               bins=20) + 
  theme_bw() + # it added the black and white graph
  labs(x="Petal Length") -> plot1 # make the plot into a value
print(plot1)
ggsave("My_first_histogram.png", plot1, height = 4, width = 6) # it will make the graph the into a png. This is how we will send the labs


############################################
############## Exercise Set 2 ##############
############################################


################
# Question 2.1 #
################

# the error in the code is they forgot to put "" around Species. The correct code is

#ggplot(iris, aes(x = Sepal.Length)) + 
  #geom_density(fill = "Species", alpha = 0.6) 


################
# Question 2.2 #
################

# The alpha is in the aes that is the error, is to add a ) after Species and deleted the extra ) at the end. 

#ggplot(iris, aes(x = Sepal.Length)) + geom_density(aes(fill = Species), alpha = 0.6)

################
# Question 2.3 #
################

ggplot(iris, aes(x = Petal.Length)) + 
  geom_density(aes(fill = Species), alpha = 0.6)+ labs(x="Petal Length", y="count") + 
  scale_fill_manual(values = c("steelblue", "darkslategray1", "cornsilk"))-> plot2
print(plot2)



################
# Question 2.4 #
################

# This is the first plot dealing with the theme legend positions on the bottom

ggplot(iris, aes(x = Petal.Length)) + 
  geom_density(aes(fill = Species), alpha = 0.6)+ labs(x="Petal Length", y="count") + theme(legend.position = "bottom") +
  scale_fill_manual(values = c("steelblue", "darkslategray1", "cornsilk"))-> plot3
print(plot3)



# This is the second plot dealing with theme legend positions on the top
ggplot(iris, aes(x = Petal.Length)) + 
  geom_density(aes(fill = Species), alpha = 0.6)+ labs(x="Petal Length", y="count") + theme(legend.position = "top") +
  scale_fill_manual(values = c("steelblue", "darkslategray1", "cornsilk"))-> plot4
print(plot4)



################
# Question 2.5 #
################

# It is adding the Legend title Iris Species
ggplot(iris, aes(x = Petal.Length)) + 
  geom_density(aes(fill = Species), alpha = 0.6)+ labs(x="Petal Length", y="count") + theme(legend.position = "top") +
  scale_fill_manual(name="Iris Species", values = c("steelblue", "darkslategray1", "cornsilk")) -> plot5

print(plot5)



################
# Question 2.6 #
################

# In the aes functions the say color. This means it is only going to show the outline of the graph. There is no direction to tell the graph to use blue, pink, and yellw. It is going to use the default. The way to fix the code is change color to fill.

ggplot(iris, aes(x = Sepal.Length)) + 
  geom_density(aes(fill = Species), alpha = 0.6) +
  scale_fill_manual(values = c("blue", "pink", "yellow")) -> plot6
print(plot6)



############################################
############## Exercise Set 3 ##############
############################################



################
# Question 3.1 #
################


ggplot(iris, aes(x=Species, y=Petal.Length)) +
  geom_boxplot(aes(fill=Species), #boxplot
               outlier.color ="lightblue", 
               #adds a lightblue color the outlier
               color="lightblue") + 
  labs(y=" Iris Petal Length (cm)",
       x="Iris Species", 
       title = "Boxplot of iris species petal lengths" ) + theme_classic() + #it will make the background white
  scale_fill_manual(values = c("red", "pink", "orange"))->plot7
print(plot7)



################
# Question 3.2 #
################

ggplot(iris, aes(x=Species, y=Petal.Length)) +
  geom_violin(aes(fill=Species)) + #violin plot
  labs(y=" Iris Petal Length (cm)",
       x="Iris Species") + theme_classic() +
  scale_fill_manual(values = c("orange", "pink","red" ))->plot8
print(plot8)



############################################
############## Exercise Set 4 ##############
############################################


################
# Question 4.1 #
################

#Color all points a single color that is not black
ggplot(iris, aes(x = Species, y = Sepal.Length)) + 
  geom_jitter(color="firebrick2") -> plot15

print(plot15)



################
# Question 4.2 #
################

# The btter size of the points wouls be the 2. The 0.1 size points is too small for the viewer. 

################
# Question 4.3 #
################

#Showing the default colors
ggplot(iris, aes(x = Species, y = Sepal.Length)) + 
  geom_jitter(aes(color=Species), size=2) -> plot10
print(plot10)



################
# Question 4.4 #
################

ggplot(iris, aes(x = Species, y = Sepal.Length)) +
  geom_jitter(aes(color=Species), size=2) + scale_color_manual(values = c("blueviolet", "darkolivegreen1","goldenrod2" )) -> plot11
print(plot11)



############################################
############## Exercise Set 5 ##############
############################################


################
# Question 5.1 #
################

#added color
ggplot(iris, aes(x = Sepal.Width, 
                 y = Sepal.Length, 
                 color=Species)) + 
  geom_point() + labs(x="Sepal Width", y= "Speal Length") +
  theme_classic() -> plot12
print(plot12)



################
# Question 5.2 #
################

#changed the shape, you don't need two aes
ggplot(iris, aes(x = Sepal.Width, 
                 y = Sepal.Length, 
                 color=Species, 
                 shape=Species)) + 
  geom_point() + labs(x="Sepal Width", y= "Speal Length") +
  theme_classic() -> plot13
print(plot13)



################
# Question 5.3 #
################

#Changed the size of the points
ggplot(iris, aes(x = Sepal.Width, 
                 y = Sepal.Length, 
                 color=Species, 
                 shape=Species)) + 
  geom_point(aes(size=Species)) + labs(x="Sepal Width", y= "Speal Length") +
  theme_classic()+ 
  #This is a manual to change the size of the points
  scale_size_manual(values = c(2,3,6)) -> plot14
print(plot14)




## As a COMMENT below, answer: 
#Which of the three scatterplots did you find most informative for viewing differences among species?
# The second scatterplots is easoer to read. The informative is clear. The changing of the points make it easier. 












