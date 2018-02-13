# suppressMessages({
#   library(assertthat)
# })

context("key2code")

if (FALSE) {
  # Execute the command below to run the tests
  devtools::test(pkg = ".", filter = "key2code", reporter = "summary")
}

test_that("key2code returns 2-column data.frame", {
  res <- key2code()
  expect_is(res, "data.frame")
  expect_length(res, 2L)
})
