counter <- 1
while (counter<5) {
  #print the value of the counter out
  print (counter)
  counter <- counter + 1
}

for(i in 1:5) {
  print ("Hello")
}

for(i in 5:10) {
  print ("Hello")
}
#it cleans to object on the objects in the values. 
rm(answer)
#removes objects by the first one
rm(i)


#generate a random number around 0 according to normal distribution


#generate one number only

rm(answer)
#randomm number generater
x<-rnorm(1)
if(x>1) {
  answer <- "Greater than 1"
}else {
  
  #nested if
  if (x >= -1) {
    answer <- "between -1 and 1"
  }  else{
    answer <- "less than -1"
    
  }
}


if(x>1) {
  answer <- "Greater than 1"
}else if (x >= -1) {
  answer <- "between -1 and 1"
  #is the deflaut 
}  else{
  answer <- "less than -1"
  
}
