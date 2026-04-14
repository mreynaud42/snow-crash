
cat /etc/passwd

flag01:42hDRfypTqqnw:3001:3001::/home/flag/flag01:/bin/bash


https://www.openwall.com/john/
install John the Ripper

sudo apt update
sudo apt install john

echo "flag01:42hDRfypTqqnw" > hash.txt
john hash.txt
 -> abcdefg

