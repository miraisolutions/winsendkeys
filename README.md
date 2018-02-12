# winsendkeys

[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/miraisolutions/winsendkeys?branch=master&svg=true)](https://ci.appveyor.com/project/RolandASc/winsendkeys)

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

### Usage

The package exports two main functions, `activateWindow` and `sendKeys`.

In addition, `key2code` returns a simple mapping data.frame for convenience:
```r
key2code()
```

|key |code         |
|:---|:------------|
|{   |{LEFTBRACE}  |
|}   |{RIGHTBRACE} |
|+   |{PLUS}       |
|@   |{AT}         |
|^   |{CARET}      |
|~   |{TILDE}      |
|(   |{LEFTPAREN}  |
|)   |{RIGHTPAREN} |
|%   |{PERCENT}    |
|\\t |{TAB}        |
|\\n |{ENTER}      |
|"   |'            |
|'   |'            |
