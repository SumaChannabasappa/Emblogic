savedcmd_/root/CDD.2/mycdd.mod := printf '%s\n'   initDev.o cleanup.o | awk '!x[$$0]++ { print("/root/CDD.2/"$$0) }' > /root/CDD.2/mycdd.mod
