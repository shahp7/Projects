#named vector
Charlie <- 1:5
Charlie

names(Charlie) 

names(Charlie) <- c("a","b","c","d","e")

Charlie
Charlie["d"]
names(Charlie)

#clear names
names(Charlie) <- NULL
Charlie

#naming matrix dimensions 1
#temp.vec <-rep(c("a", "B", "zZ", 3))
#temp.vec <-rep(c("a", "B", "zZ", times = 3))
temp.vec <-rep(c("a", "B", "zZ", each = 3))

temp.vec

Bravo <- matrix(temp.vec,3,3)
Bravo

rownames(Bravo)
rownames(Bravo) <-c("How", "are", "you")
Bravo

colnames(Bravo) <-c("X", "Y","Z")
Bravo

Bravo["are", "Y"] <-0

rownames(Bravo)
rownames(Bravo) <-NULL
Bravo

?matplot()
FieldGoals
matplot(FieldGoals)
#need to transpose

t(FieldGoals)

FieldGoals
matplot(t(FieldGoals))

#color plotting
matplot(t(FieldGoals), type = "b", pch=15:18, col=c(1:4,6))

legend("bottomleft", insert = 0.01, legend= Players, col=c(1:4,6), pch=15:18, horiz = F)

FieldGoals
t(FieldGoals/Games)

matplot(t(FieldGoals/Games), type = "b", pch=15:18, col=c(1:4,6))

matplot(t(FieldGoals/FieldGoalAttempts), type = "b", pch=15:18, col=c(1:4,6))

legend("bottomleft", insert = 0.01, legend= Players, col=c(1:4,6), pch=15:18, horiz = F)

#subsetting

x<-c("a","b", "c","d","e")
x
x[c(1,5)]
x[1]

Games
#matrix subsetting matrix
Games[1:3,6:10]
Games[c(1,10),]
Games[,c("2008","2009")]

#matrix subsetting to vectors
#into named vector
Games[1,]
is.matrix(Games[1,])
is.vector(Games[1,])

# into vector
Games[1,5]

# to keep results as matrix
Games[1,,drop=F]
Games[1,5,drop=F]

#creation of your function
Data <- MinutesPlayed[1-10,,drop=F]
matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
legend("bottomleft", inset=0.01, legend=Players, col=c(1:4,6), pch=15:18)

myplot <- function(){
	Data <- MinutesPlayed[1,,drop=F]
	matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
	legend("bottomleft", inset=0.01, legend=Players[1], col=c(1:4,6), pch=15:18)
}

myplot()

myplot <- function(){
	Data <- MinutesPlayed[2,,drop=F]
	matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
	legend("bottomleft", inset=0.01, legend=Players[1], col=c(1:4,6), pch=15:18)
}

myplot()

myplot <- function(){
	Data <- MinutesPlayed[2,,drop=F]
	matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
	legend("bottomleft", inset=0.01, legend=Players[2:3], col=c(1:4,6), pch=15:18)
}

myplot()

# with parameters

myplot <- function(rows){
	Data <- MinutesPlayed[rows,,drop=F]
	matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
	legend("bottomleft", inset=0.01, legend=Players[rows], col=c(1:4,6), pch=15:18)
}
#rows = 1:5
myplot(1:5)
myplot(1:10)

myplot <- function(data, rows){
	Data <- data[rows,,drop=F]
	matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
	legend("topleft", inset=0.01, legend=Players[rows], col=c(1:4,6), pch=15:18)
}

myplot(Salary, 1:10)

#default value for rows as 1:10
myplot <- function(data, rows=1:10){
	Data <- data[rows,,drop=F]
	matplot(t(Data), type="b", pch=15:18, col=c(1:4,6))
	legend("topleft", inset=0.01, legend=Players[rows], col=c(1:4,6), pch=15:18)
}
myplot(Salary)
myplot(Salary, 2:5)
