library(covr)
sink("C:/projects/winsendkeys/winsendkeys.Rcheck/covrlog.txt")
print(Sys.getenv("APPVEYOR_REPO_NAME"))
codecov(path = "C:/projects/winsendkeys", quiet = FALSE)
