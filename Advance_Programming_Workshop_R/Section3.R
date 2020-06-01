
#What is a Vector
#1,2,3,4,5,6,7,8,9,10
#50, 34, 111, 7, 24, 631, 20, 4, 7, 21
#character can be vector but number can't be characters

#Let's create a vector
MyFirstVector <- c(3, 45, 56,  732) #combine
MyFirstVector
is.numeric(MyFirstVector)
is.integer(MyFirstVector)
is.double(MyFirstVector)

V2 <- c(3L, 12L, 243L, 0L)
is.numeric(V2)
#True
is.integer(V2)
#True
is.double(V2)
#false
V3 <-c("a", "823", "Hello", "7")
V3
is.numeric(V3)
#false
is.integer(V3)
#false
is.double(V3)
#fasle

seq() #seqence
rep() #replicate

#it will bring up the numbers from 1 to 15
seq(1,15)
1:15

#it will bring up the number 1  3  5  7  9 11 13 15. 
#It will bring up numbers that are divide by 2 in 1-15 
seq(1,15,2)
#it will be by 1,5,9,13. In a pattern of 4
z <- seq(1,15,4)
z

#it will repect 3 50 times
rep(3, 50)
d <- rep(3,50)
#it will repect a 5 times
rep("a", 5)

#it will do (80, 20, 80, 20) 20 times
x<-c(80,20)
y<- rep(x,10)
y

#using the []

w <- c("a", "b", "c", "d", "e")
w
#it will bring out the first letter aka a
w[1]
#it will bring out second letter aka b
w[2]
#it will bring out the third letter aka c
w[3]
#it will print all the letter but the first one. 
#b,c,d,e. There will be no a
w[-1]
v <- w[-3]
#it will be a,b,c
w[1:3]
#it will be c,d,e
w[3:5]
w[c(1,3,5)]
w[c(-2,-4)]
w[-3:-5]
w[(1:2)]

#lyg means shade metry means measure
lygometry

#vector operations. It was talking about the math again

#chapter 21 The power of vectorized operations

f <- rnorm(5)
f

#R-specific programming loop
for(i in f){
  print(i)
}
#print out the values by order
print(f[1])
print(f[2])
print(f[3])
print(f[4])
print(f[5])

#coventional programming loop
for(j in 1:5){
print(f[j])
}

#------- 2nd Part For Today

N <- 100000
a <- rnorm(N)
b <- rnorm(N)

#Vectorized approach
c <- a * b

#De-vectorized approach
d <- rep(NA,N)
for(i in 1:N){
  d[i] <- a[i] * b[i]
}

#chapter 22 Functions in R
#? in front of a function will bring up the help library
rnorm(n=5, mean=10, sd=8)

x <- c("a","b","c")

#NULL
c()
seq(from=10, to=20, along.with=x)
#5,6,5,6 10 times
rep(5:6, times=10)
#5,5,5,5,5,5,5 10 times. 6,6,6,6,6 10 times
rep(5:6, each=10)
#a,b,c,a,b,c,a,b,c,a,b.c
rep(x, times=10)

print()

is.numeric()
is.integer()
is.double()
is.character()

typeof()

sqrt()
paste()

A <- seq(from=10, to=20, along.with=x)
A
B <- sqrt(A)
B
#? will tell you the funcations in R


#lecture 3, Lecture 23 Packages in R

#packages are collections of R functions, data, and compiled
#code in a well-defined format.
#The directory where packages are stored is called the library


?qplot()
?ggplot()
?diamonds

library(ggplot2)

qplot(data=diamonds, carat, price,
      colour=clarity, facets=.~clarity)
