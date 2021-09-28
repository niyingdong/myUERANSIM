#!/bin/bash

#get amf ip address
AMF_IP_ADDRESS="$(docker inspect -f '{{range .NetworkSettings.Networks}}{{.IPAddress}}{{end}}' amf)"
echo AMF IP ADDRESS IS $AMF_IP_ADDRESS

#get webui ip addess
AMF_IP_ADDRESS="$(docker inspect -f '{{range .NetworkSettings.Networks}}{{.IPAddress}}{{end}}' webui)"
echo WEBUI IP ADDRESS IS $AMF_IP_ADDRESS

#change the amf ip address
#cp ./src/UERANSIM/config/free5gc-gnb.yaml ./src/UERANSIM/config/free5gc-gnb.yaml.backup
#sed -i "s/AMF_IP_ADDRESS/$AMF_IP_ADDRESS/g" ./src/UERANSIM/config/free5gc-gnb.yaml

#docker-compose up -d

#back to original file
#mv ./src/UERANSIM/config/free5gc-gnb.yaml.backup ./src/UERANSIM/config/free5gc-gnb.yaml
