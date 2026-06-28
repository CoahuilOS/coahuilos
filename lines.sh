#!/bin/bash
echo "[*] Contando lineas por archivo... "
git ls-files | grep '\.c' | xargs wc -l
git ls-files | grep '\.ASM' | xargs wc -l
