library(covr)
sink("C:/projects/winsendkeys/mylogs/covrlog.txt")
codecov(path = "C:/projects/winsendkeys", quiet = FALSE)
