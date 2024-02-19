savedcmd_/root/CDD.2/mycdd.o := ld -m elf_x86_64 -z noexecstack   -r -o /root/CDD.2/mycdd.o @/root/CDD.2/mycdd.mod  ; ./tools/objtool/objtool --hacks=jump_label --hacks=noinstr --hacks=skylake --ibt --orc --retpoline --rethunk --sls --static-call --uaccess --prefix=16  --link  --module /root/CDD.2/mycdd.o

/root/CDD.2/mycdd.o: $(wildcard ./tools/objtool/objtool)
