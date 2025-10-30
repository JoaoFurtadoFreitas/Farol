cmake_minimum_required(VERSION 3.13)
project(LedBlink LANGUAGES CXX)

# Diretórios de include
include_directories(include)

# Configuração da placa e porta
set(ARDUINO_PORT "/dev/ttyUSB0")          # Ajuste conforme seu sistema
set(ARDUINO_FQBN "esp32:esp32:esp32")  # Placa padrão do ESP32

# Target de upload usando Arduino CLI
add_custom_target(upload
    COMMAND arduino-cli compile -b ${ARDUINO_FQBN} ${PROJECT_SOURCE_DIR}
    COMMAND arduino-cli upload -p ${ARDUINO_PORT} -b ${ARDUINO_FQBN} ${PROJECT_SOURCE_DIR}
)
