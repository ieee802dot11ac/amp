# Amplitude (2003) Decompilation

Currently uses NTSC-U/C retail, as symbolized debugs are not currently available    

### Requirements setup
1. Obtain `mipsel-elf-ld` from your distro's package manager. (ubuntu: `binutils-mips-linux-gnu`, arch: `aur/mipsel-elf-binutils`)
3. `python3 -m pip install -U -r requirements.txt` (invoking is not intelligent! use `--break-system-packages` if on arch)

*Note: For compiling, you need to add the `i386` architecture. For instructions on that please check out [this guide](https://askubuntu.com/questions/454253/how-to-run-32-bit-app-in-ubuntu-64-bit) if you're on Ubuntu.*

### Setup

1. Create a folder named `orig` in the root of the repo.
2. Extract `SCUS_972.58` from an ISO of the retail release and place it in said `orig` folder.
3. `./configure.py` (use `-c` to do a clean split. necessary for symbol_addrs.txt flag updates)
4.   `ninja`

### objdiff setup
1. After a successful build, create a folder named `expected`
2. Copy the `build` folder inside the `expected` folder.
3. Run objdiff, pointing it at `amp`.

*Note: Every time you add a new symbol, you must do the objdiff setup again.*
