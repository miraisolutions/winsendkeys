library(covr)
sink(paste0(basename(normalizePath(".")), ".Rcheck/covrlog.txt"))
codecov(quiet = FALSE, type = c("tests"), token = "${{ secrets.CODECOV_TOKEN }}")