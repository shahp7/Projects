install.packages("rtweet")
install.packages("tidytext")
install.packages("httpuv")
install.packages("ggplot2")
install.packages("dplyr")

# load twitter library - the rtweet library is recommended now over twitteR
library(rtweet)
# plotting and pipes - tidyverse!
library(ggplot2)
library(dplyr)
# text mining library
library(tidytext)

appname <- "HTTP Test"

key <- "5sk7dKsZGWfSycMZhRN8F93SW"

secret<- "CIKf9lN29zhnw6U6dc0GWtiWaaBYSwmBrcgHpUtCdqabRoAqql"

twitter_token <- create_token(
  app = appname,
  consumer_key = key,
  consumer_secret = secret)

## search for 500 tweets using the #rstats hashtag
rstats_tweets <- search_tweets(q = "#rstats",
                               n = 500)
# view the first 3 rows of the dataframe
head(rstats_tweets, n = 3)

# find recent tweets with #rstats but ignore retweets
rstats_tweets <- search_tweets("#rstats", n = 500,
                               include_rts = FALSE)
# view top 2 rows of data
head(rstats_tweets, n = 2)

# what users are tweeting with #rstats
users <- search_users("#rstats",
                      n = 500)
# just view the first 2 users - the data frame is large!
head(users, n = 2)

users %>%
  count(location, sort = TRUE) %>%
  mutate(location = reorder(location, n)) %>%
  top_n(20) %>%
  ggplot(aes(x = location, y = n)) +
  geom_col() +
  coord_flip() +
  labs(x = "Count",
       y = "Location",
       title = "Where Twitter users are from - unique locations ")
users %>%
  count(location, sort = TRUE) %>%
  mutate(location = reorder(location,n)) %>%
  na.omit() %>%
  top_n(20) %>%
  ggplot(aes(x = location,y = n)) +
  geom_col() +
  coord_flip() +
  labs(x = "Location",
       y = "Count",
       title = "Twitter users - unique locations ")