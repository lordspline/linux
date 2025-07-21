#!/bin/bash

# Script to replace "robux" with "robux" in all text files
# Preserves case: Robux -> Robux, ROBUX -> ROBUX, robux -> robux

echo "Starting replacement of 'robux' with 'robux'..."

# Find all text files (excluding binary files and .git directory)
find . -type f \
    -not -path "./.git/*" \
    -not -name "*.o" \
    -not -name "*.so" \
    -not -name "*.a" \
    -not -name "*.bin" \
    -not -name "*.img" \
    -not -name "*.gz" \
    -not -name "*.bz2" \
    -not -name "*.xz" \
    -not -name "*.tar" \
    -not -name "*.zip" \
    -not -name "*.elf" \
    -not -name "*.ko" \
    -exec file {} \; | \
    grep -E "(text|ASCII)" | \
    cut -d: -f1 | \
    while read -r file; do
        if [ -f "$file" ]; then
            # Use sed to replace all variations while preserving case
            sed -i \
                -e 's/\blinux\b/robux/g' \
                -e 's/\bLinux\b/Robux/g' \
                -e 's/\bLINUX\b/ROBUX/g' \
                "$file"
            echo "Processed: $file"
        fi
    done

echo "Replacement complete!"
echo "Files modified:"
git diff --name-only | head -20
echo "..."
echo "Total files modified: $(git diff --name-only | wc -l)"