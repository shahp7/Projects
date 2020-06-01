#Lets play Black Jack. The rule are simple if you get 21 then you win
#Step one make a random number generator from 1-10
var1 <- sample(1:10, 1)
var1

#Step two second generate for var2
var2 <- sample(1:10, 1)
var2

#Added the two generate together
var1 <- var1+var2
var1

#Make the if statements
if (var1 < 16)
{
  var2 <- sample(1:10, 1)
  var1 <- var1 + var2
  var1
  #print hold when the value is between 16 to 21
} else if (var1 >= 16 && var1 <= 21){
  print("HOLD")
  #print out bust when the value is above 21
} else {
  print("busted")
}

# Generating the random number between 1 to 10
# using function sample and storing in var1
var1 <- sample(1:10, 1)
var1
# Generating another random number between 1 and 10
var2 <- sample(1:10, 1)
var2
# Adding the first and second random numbers and storing in var1
var1 <- var1 + var2
var1
# Checking the condition
if (var1 < 16)
{
  var2 <- sample(1:10, 1)
  var1 <- var1 + var2
  var1
} else if ((var1 > 16) && (var1 < 21)){
  print('halt')
} else {
  print('busted')
}
