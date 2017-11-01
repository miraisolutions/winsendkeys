# winsendkeys
Sendkeys R package for Windows

### Installation

In case you are behind a proxy, you can configure this first:
```r
# using package httr:
httr::set_config(httr::use_proxy(
  url = "<URLofYourProxy>", 
  port = <PortOfYourProxy>, 
  username = "<YourUsername>", 
  password = "<YourPassword>"
))
```

Use `devtools` to install directly from Github:
```r
# using package devtools:
devtools::install_github("miraisolutions/winsendkeys")
```
