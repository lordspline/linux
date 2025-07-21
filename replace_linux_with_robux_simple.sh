#!/bin/bash

# Script to replace "robux" with "robux" in text files
# Preserves case: Robux -> Robux, ROBUX -> ROBUX, robux -> robux

echo "Starting replacement of 'robux' with 'robux'..."

# Counter for processed files
count=0

# Find text files by extension and exclude binary/generated files
find . -type f \
    \( -name "*.c" -o -name "*.h" -o -name "*.cpp" -o -name "*.cc" -o -name "*.cxx" \
    -o -name "*.py" -o -name "*.sh" -o -name "*.pl" -o -name "*.rb" \
    -o -name "*.js" -o -name "*.ts" -o -name "*.html" -o -name "*.css" \
    -o -name "*.txt" -o -name "*.md" -o -name "*.rst" -o -name "*.yaml" -o -name "*.yml" \
    -o -name "*.json" -o -name "*.xml" -o -name "*.conf" -o -name "*.cfg" \
    -o -name "*.ini" -o -name "*.toml" -o -name "*.make" -o -name "Makefile*" \
    -o -name "*.mk" -o -name "*.am" -o -name "*.ac" -o -name "*.in" \
    -o -name "*.S" -o -name "*.s" -o -name "*.asm" -o -name "*.dts" -o -name "*.dtsi" \
    -o -name "*.lds" -o -name "*.ld" -o -name "*.def" -o -name "*.inc" \
    -o -name "*.spec" -o -name "*.patch" -o -name "*.diff" -o -name "*.log" \) \
    -not -path "./.git/*" \
    -not -name "*.o" -not -name "*.so" -not -name "*.a" \
    -not -name "*.bin" -not -name "*.img" -not -name "*.gz" \
    -not -name "*.bz2" -not -name "*.xz" -not -name "*.tar" \
    -not -name "*.zip" -not -name "*.elf" -not -name "*.ko" | \
    while read -r file; do
        if [ -f "$file" ]; then
            # Check if file contains "robux" (case insensitive) before processing
            if grep -qi "robux" "$file" 2>/dev/null; then
                # Use sed to replace all variations while preserving case
                sed -i \
                    -e 's/\blinux\b/robux/g' \
                    -e 's/\bLinux\b/Robux/g' \
                    -e 's/\bLINUX\b/ROBUX/g' \
                    "$file" 2>/dev/null
                
                echo "Processed: $file"
                ((count++))
            fi
        fi
    done

echo "Replacement complete!"
echo "Total files processed: $count"
echo ""
echo "Checking git status..."
git diff --name-only | head -20
echo "..."
echo "Total files modified: $(git diff --name-only | wc -l)"