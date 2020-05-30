#Today is the first day of lab. 
x <- 1:5
y<-mean(x)
print(y)

z<-1:10
z

head(iris)
View(iris)
View(diamonds)

#The first step to making a ggplot for iris
ggplot(iris)

#aes is a function is the setting for aesthetics
ggplot(iris, aes(x=Sepal.Length))

#geom_histogram is the funcation to make the data into a histogram
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram()

#The geom_histogram has color in it to turn the outline of the bar
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram(color="blue")

# adding the bins line to chnage the width of the graph
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram(color="blue", bins=100)

# added the color and fill lines
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram(color="blue", fill= 'steelblue1')

# labs added the labs line adds the titles of the axis
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram(color="blue", fill= 'steelblue1') + labs(x="Sepal whatever", y="count")

#added a title
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram(color="blue", fill= 'steelblue1') + labs(x="Sepal whatever", y="count", title="histogram")

# added the classic theme
ggplot(iris, aes(x=Sepal.Length)) + geom_histogram(color="blue", fill= 'steelblue1') + labs(x="Sepal whatever", y="count", title="histogram") +theme_classic()
