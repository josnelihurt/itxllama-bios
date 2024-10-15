FROM --platform=i386 ubuntu:16.04
RUN apt-get update && apt install -y git build-essential m4 bison flex python texinfo gnat wget iasl
WORKDIR /workdir
ENTRYPOINT [ "/bin/bash" ]