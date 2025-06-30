library(covr)
sink(paste0("check/", basename(normalizePath(".")), ".Rcheck/covrlog.txt"))
codecov(quiet = FALSE, type = c("tests"), token = "${{ secrets.CODECOV_TOKEN }}")