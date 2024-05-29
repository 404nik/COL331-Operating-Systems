# Operating Systems: A Kernel-Oriented Perspective - Assignments

Welcome to the repository for the assignments of the course **Operating Systems: A Kernel-Oriented Perspective**. This repository contains the necessary files and instructions for completing the assignments.

## Assignments Overview

### Assignment 1: System Calls and Inter-Process Communication in xv6

#### Part 1: Installing and Testing xv6 (3 Marks)

- **Task**: Install and test xv6 version 11.
- **Instructions**:
  - xv6 is available [here](http://pdos.csail.mit.edu/6.828/2018/xv6/xv6-rev11.tar.gz).
  - Build and install instructions for xv6 can be found [here](http://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf).
  - Build instructions for Qemu are available [here](http://wiki.qemu.org/Manual).

#### Part 2: System Calls (7 Marks)

- **Tasks**:
  - Implement system call tracing.
  - Toggle the tracing mode using a system call.
  - Add a new system call `sys_add()` for adding two integers.
  - Add a system call `sys_ps()` to list all running processes.
- **Instructions**:
  - Create two new user programs: `user_toggle.c` and `print_count.c`.
  - Modify the `Makefile` to include these programs.
  - Use `make clean` and `make` to build the OS, then test using `make qemu-nox`.

#### Part 3: Inter-Process Communication (10 Marks)

- **Tasks**:
  - Implement unicast communication using `sys_send()` and `sys_recv()` system calls.
  - Implement multicast communication using the `sys_send_multi()` system call.
- **Instructions**:
  - Use interrupts for multicast communication.
  - Modify the kernel and implement necessary signal handlers.

#### Part 4: Distributed Algorithm (10 Marks)

- **Task**: Compute the sum and variance of elements in an array using parallel processes.
- **Instructions**:
  - Create processes to compute partial sums.
  - Use unicast for sum computation and multicast for variance computation.
  - Limit to 8 processes.

#### Part 5: Report (10 Marks)

- **Task**: Write a report detailing your implementation.
- **Instructions**:
  - Page limit: 10.
  - Include pseudocode, code snippets, and explanations.

### Assignment 2: Real-Time Scheduling

#### Tasks

- Implement Earliest Deadline First (EDF) and Rate Monotonic (RM) scheduling policies in xv6.
- Add system calls: `sys_sched_policy()`, `sys_exec_time()`, `sys_deadline()`, and `sys_rate()`.

#### Report (10 Marks)

- Page limit: 10.
- Document implementation methodology, code snippets, and pseudocode.

### Assignment 3: Buffer Overflow Attack and ASLR

#### Part 1: Buffer Overflow Attack

- **Task**: Write a Python script to generate an exploit code for a buffer overflow attack.
- **Instructions**:
  - Write the exploit code to execute the `foo()` function in the provided C program.

#### Part 2: Address Space Layout Randomization (ASLR)

- **Tasks**:
  - Implement ASLR in xv6.
  - Create a flag file to toggle ASLR.
  - Randomize memory allocation.
- **Report**:
  - Document the ASLR implementation, challenges, and solutions.

