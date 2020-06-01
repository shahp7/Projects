#The assignment is just print out your name and then print it in reverse

#Saving my name as a valuable
Fullname<- c("Poonam Shah")

#determines the type 
typeof(Fullname)

# setting up the name to be printed in reverse
message<-paste(rev(strsplit(Fullname, " ")
[[1]]), collapse= " ")

print(message)
