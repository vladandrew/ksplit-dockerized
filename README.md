# Quality of life improvements for the KSplit Artifact


## Building the artifact
```
make build
```

```
make run
```

Inside the container run `./build.sh` to build all

## Generate vmlinux.bc
```
export LLVM_COMPILER=clang
cd llvmlinux-4.x/
make -j10
``

To extract the bc file
```
extract-bc ./vmlinux
```

for modules
```
llvm-link -o module.bc file1.bc file2.bc
```

## Using the artifact

To use the artifact you'll need a machine running linux-vdl. The container is used just for building.

## Extending IDLC

