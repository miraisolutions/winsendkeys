#' Map from keys to codes
#'
#' @description This convenience utility can be called to view the mapping from special
#'  keys to codes accepted by the `sendKeys` library.
#'
#' @return `data.frame` map from special keys to codes understood by `SendKeys`.
#' @export
#'
#' @md
#'
#' @examples key2code()
key2code <- function() {
  data.frame(
    key = c("{", "}", "+", "@", "^", "~", "(", ")", "%",
            "\t", "\n", "\"", "\'"),
    code = c("{LEFTBRACE}", "{RIGHTBRACE}", "{PLUS}", "{AT}", "{CARET}", "{TILDE}", "{LEFTPAREN}", "{RIGHTPAREN}", "{PERCENT}",
             "{TAB}", "{ENTER}", "'", "'"),
    stringsAsFactors = FALSE
  )
}
