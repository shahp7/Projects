#Part 1: (5 points) Follow and complete the steps outline in video lecture 53. 
#Please make sure to submit your two screenshots (Plot for 1960 and 2013), 
#together with your R code. No grade will be awarded without the screenshots.

getwd()
setwd("/cloud/project")

getwd()
data <- read.csv("Section5-Homework-Data.csv")
data

head(data)
tail(data)
str(data)
summary(data)

#insight into the section
data$Year
temp <- factor(data$Year)
temp
levels(temp)

#filter the data frame
data1960 <- data[data$Year==1960,]
data2013 <- data[data$Year==2013,]
str(data1960)
str(data2013)

install.packages("ggplot2")
library(ggplot2)
#Graph part

qplot(data=data1960, x=Country.Code, y=Fertility.Rate, color=Region,
      main="Data 1960 Country vs Fertility Rate")
qplot(data=data2013, x=Country.Code, y=Fertility.Rate, color=Region,
      main="Data 2013 Country vs Fertility Rate")

#Part 2: (5 points) Compare the dataframe generated from Part 1 for 2013 only 
#("merged2013", of about 187 rows) to the dataframe used as part of our lecture 
#(name of the dataframe is call "merged", of about 195 rows), the number of 
#countries in both data do not match up. In fact, there is a difference of about 
#8 countries. Use R to create a dataframe where you are listing out which 8 
#countries are missing from the "merged" dataframe as compare with "merged2013". 

#check row counts
nrow(data1960)#187 rows
nrow(data2013) #187 rows.

merged2013<-data.frame(Country=Countries_2012_Dataset, Code=Codes_2012_Dataset,
                  Region=Regions_2012_Dataset)

merged <- merge(data2013, merged2013, by.x="Country.Code", by.y="Code")
setdiff(merged$Country.Code,merged2013$Code)
missing_data <-anti_join(merged2013, merged, by="Country")
