# ITX-Llama BIOS

This repo contains the tools necessary to build the [ITX-Llama](https://github.com/eivindbohler/itxllama) BIOS (Coreboot/SeaBIOS).  
Based on the 86Duino project from https://github.com/roboard/build-coreboot  

For help or feedback, try the [ITX-Llama thread on Vogons](https://www.vogons.org/viewtopic.php?t=93480)!

Tested on:
* Ubuntu 16.04 i386

Other operating systems and architectures are likely simple to get working as well, but your mileage may vary.  
The easiest option is probably to spin up a virtual machine of some kind, and install Ubuntu 16.04 i386 on that.

### Prerequisites
#### Ubuntu
Install tools:
```
$ sudo apt install git build-essential m4 bison flex python texinfo gnat
```
### Build the cross compiler
```
$ ./build-xgcc.sh
```

### Build the ROM file
```
$ make
```

If building is successful, the 2 MB output ROM file will be in the `out/` directory.
Another file is also made - `out/xxx-padded.rom` - padded with `0xFF` to fit 8 MB, for flashing directly to the SPI ROM using a hardware programmer. The Coreboot/SeaBIOS ROM will be located at the end of this 8 MB file.

#### Build with docker
If you want to build itxllama-bios with docker, you need to install docker in your system and enable mutilarch in the case your host is different from i386

```
docker run --rm --privileged multiarch/qemu-user-static --reset -p yes.
```

##### Build container 
This uses the image josnelihurt/itxllama-bios-builder or you can build your own image using
```
make build-docker
```
After this you can use the container generated with the tag itxllama-bios to execute the compilation.

##### Build the cross compiler
```
make build-xgcc-docker
```
##### Build the ROM file
```
make

```