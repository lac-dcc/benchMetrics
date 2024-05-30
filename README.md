# Benchmarks Metrics

This repository contains both dynamic and static data mined from the LLVM Test Suite and SPEC CPU programs. For each benchmark collection, Perf Stat counter metrics and Milepost Features were collected and categorized based on the CLANG optimization flags used to compile the benchmarks. The optimization flags used were: -O0, -O1, -O2, and -O3.

## Linux Perf
Linux Perf is a powerful suite of performance monitoring tools available on Linux systems, enabling users to collect and analyze detailed performance data. 
The tool used to extract our data is *perf stat*, which uses Performance Monitoring Units (PMUs) to record hardware events during code execution. 

## GCC Milepost 
 --

## Environment Details

### Hardware
- **CPU:**  Intel(R) Xeon(R) CPU E5-2680 v2 @ 2.80GHz
- **RAM:** 32GB
### Software
- **Operating System:** Ubuntu 20.04.6 LTS
- **Python Version:** 3.8.107
- **SPEC CPU:** 2017
- **LLVM Build:** 17.0.6
- **Clang/Clang++:** 17.0.6
- **LLVM Test-Suite Build:**: Release 17
- **Linux Perf:** 5.4.269
