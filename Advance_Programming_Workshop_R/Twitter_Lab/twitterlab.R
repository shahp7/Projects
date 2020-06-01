#install.packages("rtweet")
#install.packages("tidytext")
#install.packages("httpuv")

appname <- "Silly_token_rtweet"

key <- "SKFIAywpi5rBCvqjFDLUK1cig"

secret<- "8QMmDLLNpH8XfmMiBJqVdRsaJqHOGcoDfXFtg912oFO46EHqoy"


twitter_token <- create_token(
  app = appname,
  consumer_key = key,
  consumer_secret = secret)

home_directory <- path.expand("~/")

## combine with name for token
file_name <- file.path(home_directory, "twitter_token.rds")

## save token to home directory
saveRDS(twitter_token, file = file_name)


## assuming you followed the procodures to create "file_name"
##     from the previous code chunk, then the code below should
##     create and save your environment variable.
cat(paste0("TWITTER_PAT=", file_name),
    file = file.path(home_directory, ".Renviron"),
    append = TRUE)

post_tweet("This is from My script to say hello I'm watching you!!")

rstats_tweets <- search_tweets(q = "#rstats",
                               n = 500)
head(rstats_tweets, n = 3)
#retweets -

rstats_tweets <- search_tweets("#rstats", n = 500,
                               include_rts = FALSE)
head(rstats_tweets, n = 2)

head(rstats_tweets$screen_name)


unique(rstats_tweets$screen_name)

users <- search_users("#rstats",
                      n = 500)
head(users, n = 2)

# how many locations are represented
length(unique(users$location))
## [1] 304

users %>%
  ggplot2 :: ggplot(aes(location)) +
  geom_bar() + coord_flip() +
  labs(x = "Count",
       y = "Location",
       title = "Twitter users - unique locations ")

#next plot
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


# next grapgh w/ respect to NA
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

