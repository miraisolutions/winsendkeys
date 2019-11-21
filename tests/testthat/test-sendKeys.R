
context("sendKeys")

# Execute the command below to run the tests
# devtools::test(pkg = ".", filter = "sendKeys", reporter = "summary")

test_that("sendKeys returns NULL", {
  # note that below command will have real side-effect, so e.g. this will happen
  # twice when running devtools::check() on the package
  res <- winsendkeys::sendKeys("hi")
  expect_is(res, "NULL")
})
