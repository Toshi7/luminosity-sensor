# luminosity-sensor

## purpose 
create platformio environment and use luminosity sensor using it.

## Installing
```
sudo pip install -U platformio
platformio --version
pio lib search SparkFunTSL2561
platformio run -e esp32dev
pio lib search SparkFunTSL2561
pio lib install 603
platformio run -e esp32dev
```

- checking board definition
```
$ platformio boards
$ platformio boards esp32
$ mkdir test-pfi
$ cd test-pfi
$ platformio init --board esp32doit-devkit-v1
```

build
```
platformio run
```

upload
```
platformit run -t upload
```

serial monitor
```
platformio serialports monitor -b 115200
```

Installing library
```
[env:esp32doit-devkit-v1]
platform = espressif32
board = esp32doit-devkit-v1
framework = arduino
lib_deps =
  Wire
  Adafruit Unified Sensor@>=1.0.2
  Adafruit AM2320 sensor library@>=1.1.1
monitor_speed = 115200
```

Running
```
./run_esp32.sh
```

- [Reference](https://qiita.com/zakkied/items/cbbccdc1be4e4da9f7f9)
