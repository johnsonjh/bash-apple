# bash-apple

## Overview

### What?

* A portable version of Apple's **GNU Bash 3.2.57**, as shipped with Apple macOS.

### Why?

* Verify compatibility of bash-specific shell scripts with Apple's version of bash.

## Support

* Currently tested only on **GNU/Linux** systems with `libbsd` and `libmd`.

## Notes

### Building on Linux

1. Install `libbsd`, `libmd`, `readline`, and `ncurses` development packages.

2. Configure and build:

   ```bash
   env CFLAGS="-Os -fno-strict-aliasing" ./configure                   \
        --enable-alias --enable-arith-for-command --enable-multibyte   \
        --enable-array-variables --enable-bang-history --enable-select \
        --enable-brace-expansion --enable-command-timing --with-curses \
        --enable-cond-command --with-installed-readline                \
        --enable-debugger --enable-directory-stack --enable-select     \
        --enable-disabled-builtins --enable-dparen-arithmetic          \
        --enable-extended-glob --enable-help-builtin --enable-history  \
        --enable-job-control --enable-cond-regexp --enable-progcomp    \
        --enable-net-redirections --enable-process-substitution        \
        --enable-prompt-string-decoding --enable-readline  &&          \
   gmake -j $(getconf _NPROCESSORS_ONLN)
   ```
