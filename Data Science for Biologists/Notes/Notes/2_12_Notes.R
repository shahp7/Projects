library(tidyverse)
#You have to first install.packages for nycflights13
library(nycflights13)
library(tidylog) #load after the tidyverse first

#this data is a tibble but it is not in a row???
filter(flights, month==6.549)

#nothing is = to the month
filter(flights, month == mean(month))

#normal gggplot is adding the whole number of the months.
ggplot(flights, aes(x=factor(month))) + geom_bar()

#using a pipe
flights %>% filter(month==6)

flights %>% 
  fliter(month > 8)

select(flights, carrier, month)
