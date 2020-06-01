#?
?rnorm()
rnorm(5)
rnorm(5,10,8)
rnorm(n=5, mean=10, sd=8)
rnorm(n=5, sd=8, mean=100)

?seq()
seq(10,20,3)
seq(from=10,to=20,by=3)
seq(from=10,to=20,length.out=100)
x<-c("a", "b", "c")
seq(from=10,to=20,along.with=x)

?rep()
rep(5,10)
rep(5:6,10)
rep(5:6,times=10)
rep(5:6,each=10)
#vector mode
rep(x,times=5)

?sqrt()
A<-seq(from=10,to=20,along.with=x)
B<-sqrt(A)


install.packages("ggplot2")
?qplot()
?ggplot()
?diamonds #dataset
library(ggplot2)

qplot(data=diamonds, carat, price, colour = clarity, facets=.~clarity)


Salary
Games
MinutesPlayed
matrix()
rbind()
cbind()

?matrix
my.data <- 1:20
my.data

A <-matrix(my.data,4,5)
A[2,3]

B <-matrix(my.data,4,5,byrow=T)
B
B[2,5]

#rbind
r1 <- c("I", "am", "happy")
r2 <- c("What", "a", "day")
r3 <- c(1,2,3)

C <- rbind(r1,r2,r3)

#cbind
c1 <-1:5
c2 <- -1:-5
D <-cbind(c1,c2)
D


colnames(Games) <- Seasons
rownames(Games) <- Players

#named vector
Charlie <- 1:5
Charlie

names(Charlie) 

names(Charlie) <- c("a","b","c","d","e")

Charlie
Charlie["d"]
names(Charlie)



















