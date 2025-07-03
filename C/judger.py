import subprocess
import os

chall = input("Challenge : ")
show = input("Show Result (y/N): ").lower() == 'y'

# Compile chall.cpp to chall.exe
compile_cmd = ["g++", f"{chall}.cpp", "-o", f"{chall}.exe"]
print(f"Compiling {chall}.cpp...")
comp = subprocess.run(compile_cmd, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)

if comp.returncode != 0:
    print("Compilation failed:")
    print(comp.stderr)
    exit(1)
else:
    print("Compilation succeeded.")

testcase_dir = f"{chall}_testcase"
executable = f"./{chall}.exe"

passed = 0
total = 10

for i in range(1, total + 1):
    input_file = os.path.join(testcase_dir, f"{i}.in")
    expected_output_file = os.path.join(testcase_dir, f"{i}.sol")
    
    with open(input_file, 'r') as infile:
        result = subprocess.run(
            executable,
            stdin=infile,
            stdout=subprocess.PIPE,
            stderr=subprocess.PIPE,
            text=True  # Ensures stdout is string
        )

    with open(expected_output_file, 'r') as expected_file:
        expected_output = expected_file.read().strip()
        actual_output = result.stdout.strip()

    if actual_output == expected_output:
        print(f"Testcase {i}: ✅ Passed")
        passed += 1
    else:
        print(f"Testcase {i}: ❌ Failed")
        if show:
            print(f"  Expected: {expected_output}")
            print(f"  Got     : {actual_output}")

print(f"\nSummary: {passed}/{total} testcases passed.")
