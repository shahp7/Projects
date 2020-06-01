
MyFirstVector <- c(3,10,23,22)
MyFirstVector

is.numeric(MyFirstVector)
#TRUE
is.integer(MyFirstVector)
#FALSE
is.double(MyFirstVector)
#TRUE

V2 <- c(3L, 12L, 243L, 0L)
is.numeric(V2)
is.integer(V2)
is.double(V2)

V3 <- c("A", "B2", "Hello")
V3
is.character(V3)
is.numeric(V3)

V4 <- c("A", "B2", "Hello", 7)
V4
is.character(V4)
is.numeric(V4)

seq() #sequence- like ':'

seq(1,15)
1:15

seq(1,15,2)

Z<- seq(1,15,4)

rep(3,50)
D <- rep(3,50)

X<-c(80,20)
Y <-rep(x,10)
Y

w<-c ("a", "b", "c", "d", "e")
w

w[1]
w[2]
w[3]
w[4]

w[-1]
v<- w[-3]
w[1:3]
w[3:5]
w[c(1,3,5)]
w[c(-2, -4)]
-3:-5
w[-3:-5]
w[1:2]
w{7]
w[-7]


x <- rnorm(5)
x

for(i in x){
print(i)
}

print(x[1])
print(x[2])
print(x[3])
print(x[4])
print(x[5])

for(j in 1:5){
	print(x[j]
}

#vectorize vs. devectorized
N <- 100
a <- rnorm(N)
b <- rnorm(N)

#vectorized operation - faster (eg. 10 Millions for N)
 c <- a * b

#de-vectorized operation
d <- rep(NA,N)
for (i in 1:N) {
 d[i]<- a[i] * b[i]
}

