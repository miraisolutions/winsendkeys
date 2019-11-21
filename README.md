# winsendkeys

[![AppVeyor Build Status](https://ci.appveyor.com/api/projects/status/github/miraisolutions/winsendkeys?branch=master&svg=true)](https://ci.appveyor.com/project/RolandASc/winsendkeys)
[![codecov](https://codecov.io/gh/miraisolutions/winsendkeys/branch/master/graph/badge.svg)](https://codecov.io/gh/miraisolutions/winsendkeys)

Sendkeys R package for Windows

### Installation

Use `remotes` to install directly from Github:
```r
# using package remotes:
remotes::install_github("miraisolutions/winsendkeys")
```

In case you are behind a proxy, you can configure this first:
```r
# accessing Github's API over https, while using a http-proxy:
Sys.setenv(https_proxy="http://<username>:<password>@<ip>:<port>")
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
