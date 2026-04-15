touch /tmp/whatever;

while true;
do
	ln -sf /tmp/whatever /home/user/level10/safe;
	ln -sf /home/user/level10/token /home/user/level10/safe;
done
