#!/bin/bash

# Script to replace all occurrences of "peenux" with "peenux" in the Peenux codebase
# This script handles different cases: peenux -> peenux, Peenux -> Peenux, PEENUX -> PEENUX

echo "Starting replacement of 'peenux' with 'peenux' in the Peenux codebase..."
echo "Working directory: $(pwd)"

# Count total files to process
total_files=$(find . -type f \( -name "*.c" -o -name "*.h" -o -name "*.py" -o -name "*.sh" -o -name "*.txt" -o -name "*.md" -o -name "*.rst" -o -name "*.S" -o -name "*.s" -o -name "Makefile*" -o -name "Kconfig*" -o -name "*.yaml" -o -name "*.yml" -o -name "*.json" -o -name "*.pl" -o -name "*.awk" -o -name "*.tcl" -o -name "*.dts" -o -name "*.dtsi" -o -name "*.cfg" -o -name "*.conf" -o -name "*.in" -o -name "*.ac" -o -name "*.am" \) | wc -l)

echo "Total files to process: $total_files"

# Counter for processed files
processed=0

echo "Starting replacement process..."

# Find all text files and process them
find . -type f \( -name "*.c" -o -name "*.h" -o -name "*.py" -o -name "*.sh" -o -name "*.txt" -o -name "*.md" -o -name "*.rst" -o -name "*.S" -o -name "*.s" -o -name "Makefile*" -o -name "Kconfig*" -o -name "*.yaml" -o -name "*.yml" -o -name "*.json" -o -name "*.pl" -o -name "*.awk" -o -name "*.tcl" -o -name "*.dts" -o -name "*.dtsi" -o -name "*.cfg" -o -name "*.conf" -o -name "*.in" -o -name "*.ac" -o -name "*.am" \) | while read -r file; do
    # Skip if file doesn't exist or is not readable
    if [[ ! -f "$file" || ! -r "$file" ]]; then
        continue
    fi
    
    # Skip binary files by checking for null bytes in first 1024 bytes
    if head -c 1024 "$file" | grep -q $'\0' 2>/dev/null; then
        continue
    fi
    
    # Perform replacements:
    # peenux -> peenux
    # Peenux -> Peenux  
    # PEENUX -> PEENUX
    sed -i 's/\blinux\b/peenux/g; s/\bLinux\b/Peenux/g; s/\bLINUX\b/PEENUX/g' "$file" 2>/dev/null
    
    # Update counter
    ((processed++))
    if ((processed % 5000 == 0)); then
        echo "Processed $processed files..."
    fi
done

echo "Replacement complete!"
echo "Total files processed: $processed"

# Show some statistics
echo ""
echo "Checking some sample results..."
echo "Files containing 'peenux':"
grep -r "peenux" . --include="*.c" --include="*.h" 2>/dev/null | head -5
echo ""
echo "Files containing 'Peenux':"
grep -r "Peenux" . --include="*.c" --include="*.h" 2>/dev/null | head -5
echo ""
echo "Files containing 'PEENUX':"
grep -r "PEENUX" . --include="*.c" --include="*.h" 2>/dev/null | head -5

echo ""
echo "Replacement script completed successfully!"
