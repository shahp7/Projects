library(tidyverse)



crabs <- read_csv("https://raw.githubusercontent.com/sjspielman/datascience_for_biologists/master/rmd_lessons/lm_files/crabs.csv")

crabs

dplyr::glimpse(crabs)

ggplot(crabs, aes(x = carapace_length, y = body_depth)) + 
  geom_point()

#it is y over x
model_fit <- lm(body_depth ~ carapace_length, data = crabs)

summary(model_fit)


# redefining model just to orient you back
model_fit <- lm(body_depth ~ carapace_length, data = crabs)

# assumes broom library is loaded! 
# it comes installed with tidyverse, but needs to be loaded with library(broom) in the setup chunk.
# Gives coefficients in tidy form
broom::tidy(model_fit)

broom::augment(model_fit)


## plot
broom::augment(model_fit) -> augmented_fit

# plot the .resid column (yes it starts with a period), and add a line for visual guidance. 
qqnorm(augmented_fit$.resid)
qqline(augmented_fit$.resid, col = "red")  #Spielman personal preference, I like making it a color. base R uses "col"

# predictor goes on X, response goes on Y
ggplot(crabs, aes(x = carapace_length, y = body_depth)) + 
  geom_point(size = 0.5) +        ## making the points small to help see the regression line
  geom_smooth(method = "lm",     ## make a trendline using "lm"
              color = "navy",    ## make the trendline goldenrod
              size = 0.5,        ## make the line small to help see the confidence interval for TUTORIAL REASONS
              fill = "deeppink4") + ## fill for the confidence interval
  labs(x = "Carapace length (mm)", 
       y = "Body depth (mm)", 
       title = "Linear regression to predict crab body depth") + 
  annotate("text",                ## geom to annotate with is text annotation
           x = 20, y = 30,         ## coordinates of the label, decided after trying several places..
           label = "R^2 == 0.966", ## label itself, double equals is needed for use with parse=T
           parse=T,               ## makes label actually show as a formula, with squared as superscript!
           color = "firebrick", size = 5)  + ## font color and size 
  theme_bw()

