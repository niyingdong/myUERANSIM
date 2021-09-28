# free5gc_ueransim
## free5gc
### gtp5g kernel module 설치하기
```
$ git clone https://github.com/PrinzOwO/gtp5g.git
$ cd gtp5g  
$ make
$ sudo make install
```

### free5gc-compose 설치하기
```
git clone http://mod.lge.com/asl/#/admin/projects/private5g
cd private5g/youngjun.jeon/free5gc-compose
make base
docker-compose build
```

### free5gc-compose 실행하기
```
sudo ./run_docker-compose.sh
```

### free5gc subscriber 등록하기 ( webconsole 실행 )
```
$ firefox
접속주소
$ http://localhost:5000 혹은 http://[webUI IP]:5000
ID/PW : admin / free5gc
http://localhost:5000/#/subscriber
```

### reference : https://github.com/free5gc/free5gc-compose

## ueransim
### ueransim 설치하기
``` 
$ git clone http://mod.lge.com/asl/#/admin/projects/private5g
$ cd private5g/youngjun.jeon/ueransim
$ make base
$ docker-compose build
```

### ueransim 실행하기
free5gc container IP 알아내기
```
$ ./getIpAddress.sh
```
ueransim config file 수정하기
```
$ vim ./src/UERANSIM/config/free5gc-gnb.yaml
linkIp / ngapIp / gtpIp : gnb고정IP 로 변경
amfConfigs:
  - address : ./getIpAddress.sh를 이용해서 확인한 AMF IP로 변경


$ vim ./src/UERANSIM/config/free5gc-ue.yaml
gnbSearchList: gnb 고정IP로 변경
```

ueransim 실행하기
```
$ docker-compose up
```

### reference : https://github.com/aligungr/UERANSIM
