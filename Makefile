.PHONY: all clean

all:
	docker run -it --rm -v $(PWD):/workdir -u $(shell id -u):$(shell id -g) josnelihurt/itxllama-bios-builder ./build-target.sh

build-docker:
	docker build -t itxllama-bios-builder .

build-xgcc-docker:
	docker run -it --rm -v $(PWD):/workdir -u $(shell id -u):$(shell id -g) josnelihurt/itxllama-bios-builder ./build-xgcc.sh 

push-docker: build-docker
	docker tag itxllama-bios-builder josnelihurt/itxllama-bios-builder
	docker push josnelihurt/itxllama-bios-builder:latest

clean:
	rm -rf out
	cd seabios && ../xgcc-seabios-make.sh distclean
	cd coreboot && make distclean
