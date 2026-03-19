FROM ubuntu:22.04

RUN apt update && apt install -y \
  g++ \
  make \
  && rm -rf /var/lib/apt/lists/*

WORKDIR /app

COPY main.cpp .

RUN g++ -o a.out main.cpp

CMD ["./a.out"]
