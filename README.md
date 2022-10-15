
# SPI Communication

Serial Pheripheral Interface is the Communication Protocol Between Microcontollers or Electronics Devices.
But this is type of protocols works in 10 meters Approx. It has Synchronus Output and input means that there is no delay between input and output of this protocol.the maximum SPI clock frequency is one half of the system clock, but cannot exceed 12.5 MHz

Devices communicating via SPI are in a master-slave relationship. The master is the controlling device (usually a microcontroller), while the slave (usually a sensor, display, or memory chip) takes instruction from the master. The simplest configuration of SPI is a single master, single slave system, but one master can control more than one slave (more on this below).






![Circuit Design of SPI Communication](https://drive.google.com/file/d/16yU6Hl0TB5Qi9b79b5YyGKC_BUSb0qld/view?usp=sharing)




## SPI Protocol Working

![Basic SPI](https://drive.google.com/file/d/1wq5i45U2MoEz7pgVW7xK5hnE_gONwKwV/view?usp=sharing)

#### MOSI (Master Output/Slave Input) - Line for the master to send data to the slave.

#### MISO (Master Input/Slave Output) – Line for the slave to send data to the master.

#### SCLK (Clock) – Line for the clock signal.

#### SS/CS (Slave Select/Chip Select) – Line for the master to select which slave to send data to.

### Note  - In practice, the number of slaves is limited by the load capacitance of the system, which reduces the ability of the master to accurately switch between voltage levels.

## For Further Reference Read this Article

[SPI Communication Article](https://www.circuitbasics.com/basics-of-the-spi-communication-protocol/)

[SPI Protocol Github](https://github.com/topics/spi-protocol)


