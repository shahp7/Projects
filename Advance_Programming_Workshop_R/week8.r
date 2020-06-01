read.csv()
?read.csv()
#select file manually
stats<-read.csv(file.choose())
stats

#set Working directory and read data
getwd()

#for windows
setwd("C:\\Users\\CHUM\\Desktop\\R")

#for Mac
setwd("/Users/CHUM/Desktop/R")

getwd

rm(stats)

stats <-read.csv("DemographicData.csv")
stats

#number of rows
nrow(stats)

#number of columns
ncol(stats)

#top 6 rows
head(stats)

#bottom 6 rows
tail(stats)

#structure of the data frame
str(stats)

#Factors  =  number of possible values in that column, with numbers

summary(stats)

stats
head(stats)

#extracting birth rate for Angola, which is row number 3 and column 3
stats[3,3]
stats[3,"Birth.rate"]
stats["Angola", 3]

stats$Internet.users
#second row and internet.users column and the use of $
stats$Internet.users[2]

stats[,"Internet.users"]

#what are the other factors?
levels(stats$Income.Group)

# Basic operation with Data Frame
stats[1:10,] #subsetting
stats[3:9,]
stats[c(4,100),] # returns 4 and 100 row only

stats[1,]
is.data.frame(stats[1,])

#in data frame, when extracting a row, it stays as a DF. In Matrix, it becomes a vector
#no need for drop=f

stats[,1]
is.data.frame(stats[,1])
# its not a DF anymore
stats[,1,drop=F]
is.data.frame(stats[,1,drop=F])
# this retain the dimension, aka DF

head(stats)

# math operations
stats@Birth.rate * stats$Internet.users
stats@Birth.rate + stats$Internet.users

#add column
stats$MyCalc < stats@Birth.rate * stats$Internet.users
head(stats)

#what will happen here?
stats$xyz <-1:5
head(stats, n=20)

stats$xyz <-1:4 # would not work, why?

#remove columns
head(stats)
stats$MyCalc <-NULL
stats$xyz <-NULL

head(stats)

# Filtering data frames
head(stats)
stats$Internet.users < 2
fiter<-stats$Internet.users < 2

#filer is a T/F vector

#display only the true row
stats[filter,]

#country with Birth rate over 40 by Combining above instructions into one

stats[stats$Birth.rate > 40,]

stats[stats$Birth.rate > 40 & stats$Internet.users < 2,]
stats[stats$Income.Group == "High income",]
levels(stats$Income.Group)

#Part one the of Homework. List out the countries where the 
#Birth Rate is < 15 or Internet Users > 80 (2 points)
H<-stats[stats$Birth.rate < 15|stats$Internet.users > 80,]

#Part two Display one new data frame (first 30 rows) sorted based on the 
#Income group, and followed by descending order based on Internet User 
#columns. (3 points). (hint: You need to research this on your own, and 
#you are welcome to use any functions that you found useful)
H2<-head(stats,30)
H2[order(H2$Income.Group,- H2$Internet.users),]

#find information about Malta
stats[stats$Country.Name == "Malta",]

#week eight begins here on Visualization
#qplot is inside ggplot2 packages

install.packages("ggplot2")
library(ggplot2)

?qplot
qplot(data=stats,x=Internet.users)
qplot(data=stats,x=Income.Group, y=Birth.rate)
qplot(data=stats,x=Income.Group, y=Birth.rate,size=3)
qplot(data=stats,x=Income.Group, y=Birth.rate,size=10)
qplot(data=stats,x=Income.Group, y=Birth.rate,size=I(10))
qplot(data=stats,x=Income.Group, y=Birth.rate,size=I(3))
qplot(data=stats,x=Income.Group, y=Birth.rate,size=I(3), color=I("blue"))
qplot(data=stats,x=Income.Group, y=Birth.rate,geom="boxplot")

qplot(data=stats,x=Internet.users, y=Birth.rate)

#adding size
qplot(data=stats,x=Internet.users, y=Birth.rate, size=I(4))
qplot(data=stats,x=Internet.users, y=Birth.rate, color = I("red"),size=I(4))
qplot(data=stats,x=Internet.users, y=Birth.rate, color = Income.Group,size=I(5))

#second scatter plot using Birthrate, internet usage but by Countries region
#Download and load Country region vector from web site

mydf <- data.frame(Countries_2012_Dataset, Codes_2012_Dataset, Regions_2012_Dataset)
head(mydf)

colnames(mydf) <- c("Country", "Code", "Region")

head(mydf)

# another approach
rm(mydf)

mydf <- data.frame(Country=Countries_2012_Dataset, Code=Codes_2012_Dataset, Region=Regions_2012_Dataset)

head(mydf)

# similar to C Bind or R Bind

tail(mydf)
summary(mydf)

# now we are ready to merge them together

head(stats)
head(mydf)

?merge()

merged <- merge(stats, mydf, by.x="Country.Code", by.y="Code")
# 8 columns (Country.Code vs. Code)
head(merged)

# get rid of Country column
merged$Country<-NULL
str(merged)
tail(merged)
# now merged has the correct columns from two data frames

#Visualization by using qplot
qplot(data=merged, x=Internet.users, y=Birth.rate)
qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region)

#shapes
qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(17))

qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(15))

qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(23))

#Transparency
qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(19))

# sometime you have overlapping in the plot
#so set transparency

qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(17), alpha=I(0.1))
qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(17), alpha=I(0.6))

#adding title

qplot(data=merged, x=Internet.users, y=Birth.rate, color=Region, size=I(5), shape=I(17), alpha=I(0.1), main="Birth Rate vs. Internet Users")
































