#!/bin/sh

#echo "tracepath -4b 20.103.192.193"
#tracepath -4b 20.103.192.193
#echo "tracepath -6b 20.103.192.193"
#tracepath -6b 20.103.192.193
#echo "tracepath -4b api.devices.eu.bosch-mobility-cloud.com"
#tracepath -4b api.devices.eu.bosch-mobility-cloud.com
#echo "tracepath -6b api.devices.eu.bosch-mobility-cloud.com"
#tracepath -6b api.devices.eu.bosch-mobility-cloud.com
#tracepath api.devices.eu.bosch-mobility-cloud.com/v3/device/blobs/RE-longlife-V2-1-1
#tracepath api.devices.eu.bosch-mobility-cloud.com/v3/device/blobs/RE-longlife-V2-1-1?token=a15ee7a7-c6f9-4c8b-b695-05e1e2afe914

./sdv-self-update-agent https://api.devices.eu.bosch-mobility-cloud.com/v3/device/blobs/RE-longlife-V2-1-1?token=a15ee7a7-c6f9-4c8b-b695-05e1e2afe914
./sdv-self-update-agent https://20.103.192.193/v3/device/blobs/RE-longlife-V2-1-1?token=a15ee7a7-c6f9-4c8b-b695-05e1e2afe914

