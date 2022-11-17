# AsciiConverter

## Environments :
Home brew:
```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install HEAD/install.sh)"
```
### Opencv :
```
$ brew install opencv
```
### Cmake :
```
$ brew install cmake
```

### Cmake setup:
Go to the file CMakeLists.txt at line 12 Change 
```
set(OpenCV_DIR /opt/homebrew/Cellar/opencv/4.6.0_1/include/opencv4)
```
to 
```
set(OpenCV_DIR <your install location>)
```

### After that Run :
```
$ cmake .
$ make
```



