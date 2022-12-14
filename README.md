
# SPI Communication

Serial Pheripheral Interface is the Communication Protocol Between Microcontollers or Electronics Devices.
But this is type of protocols works in 10 meters Approx. It has Synchronus Output and input means that there is no delay between input and output of this protocol.the maximum SPI clock frequency is one half of the system clock, but cannot exceed 12.5 MHz

Devices communicating via SPI are in a master-slave relationship. The master is the controlling device (usually a microcontroller), while the slave (usually a sensor, display, or memory chip) takes instruction from the master. The simplest configuration of SPI is a single master, single slave system, but one master can control more than one slave (more on this below).






![Circuit Design of SPI Communication](https://user-images.githubusercontent.com/88238469/195983039-52acc049-0919-4ae2-8331-b77973530d80.PNG)




## SPI Protocol Working


![Basic SPI](https://user-images.githubusercontent.com/88238469/195983101-016dcea4-923e-4dff-8fec-177cc040e8e2.PNG)


#### MOSI (Master Output/Slave Input) - Line for the master to send data to the slave.

#### MISO (Master Input/Slave Output) – Line for the slave to send data to the master.

#### SCLK (Clock) – Line for the clock signal.

#### SS/CS (Slave Select/Chip Select) – Line for the master to select which slave to send data to.

![Table Contents](https://user-images.githubusercontent.com/88238469/195983108-44cd2cf6-361e-4daf-90ca-3090377160ea.PNG)

### Note  - In practice, the number of slaves is limited by the load capacitance of the system, which reduces the ability of the master to accurately switch between voltage levels.

## For Further Reference Read this Article

[SPI Communication Article](https://www.circuitbasics.com/basics-of-the-spi-communication-protocol/)

[SPI Protocol Github](https://github.com/topics/spi-protocol)

[Tinkercad Simulation By Me](https://www.tinkercad.com/embed/65kXH2V4Sst)
