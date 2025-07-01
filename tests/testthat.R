library(testthat)
test_check("winsendkeys", reporter = JunitReporter$new(file = "junit.xml"))