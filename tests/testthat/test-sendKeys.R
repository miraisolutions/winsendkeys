# suppressMessages({
#   library(assertthat)
# })

context("sendKeys")

if (FALSE) {
  # Execute the command below to run the tests
  devtools::test(pkg = ".", filter = "sendKeys", reporter = "summary")
}

test_that("sendKeys returns NULL", {
  res <- winsendkeys::sendKeys("hi")
  expect_is(res, "NULL")
})
