library(covr)
sink("C:/projects/winsendkeys/winsendkeys.Rcheck/covrlog.txt")
codecov(path = "C:/projects/winsendkeys", quiet = FALSE)
