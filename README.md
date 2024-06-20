# Benchmarks Metrics

This repository contains both dynamic and static data mined from the LLVM Test Suite and SPEC CPU programs. For each benchmark collection, Perf Stat counter metrics and Milepost Features were collected and categorized based on the CLANG optimization flags used to compile the benchmarks. The optimization flags used were: -O0, -O1, -O2, and -O3.

## Linux Perf
[Linux Perf](https://en.wikipedia.org/wiki/Perf_(Linux)) is a suite of performance monitoring tools available on Linux systems, enabling users to collect and analyze detailed performance data. 
The tool used to extract our data is [perf stat](https://perf.wiki.kernel.org/index.php/Tutorial#Counting_with_perf_stat), which uses Performance Monitoring Units (PMUs) to record hardware events during code execution.

**Hardware**: Data was recorded on an Intel(R) Xeon(R) CPU E5-2680 v2 @ 2.80GHz, running Ubuntu 20.04.6.

## GCC Milepost Features

Milepost is a set of 56 program features, introduced by [Fursin et al](Milepost GCC: Machine Learning Enabled Self-tuning Compiler](https://ebonilla.github.io/papers/fursin-et-al-ijpp-2011.pdf).
These features include number of basic blocks, number of edges in the control flow graph, number of function calls, etc (see Table 2 in the original paper).
To collect the features, we have used the MilePost implementation available in the [YaCoS](https://homepages.dcc.ufmg.br/~fernando/publications/papers/ZanellaSBLP20.pdf) compiler.
The data that we report in this repository is the same data that we have used in two other papers to explore the space of compiler optimizations in clang, by [Faustino et al](https://homepages.dcc.ufmg.br/~fernando/publications/papers/FaustinoJCL22.pdf) and by [Damasio et al.](https://homepages.dcc.ufmg.br/~fernando/publications/papers/CGO23_ThaisDamasio.pdf)

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


## External Links

- [LLVM Test Suite Guide](https://www.llvm.org/docs/TestSuiteGuide.html)
- [Linux Perf Wiki](https://perf.wiki.kernel.org/index.php/Main_Page)
- [SPEC CPU 2017](https://www.spec.org/cpu2017/)
- [Milepost](https://en.wikipedia.org/wiki/MILEPOST_GCC)
- [Milespost Paper](https://ebonilla.github.io/papers/fursin-et-al-ijpp-2011.pdf) The Milepost Features are described in the Table 2 of the paper.
- [YaCoS](https://github.com/ComputerSystemsLaboratory/YaCoS/).

## References

1. Thaís Damásio, Michael Canesche, Vinícius Pacheco, Marcus Botacin, Anderson Faustino da Silva, Fernando Magno Quintão Pereira: [A Game-Based Framework to Compare Program Classifiers and Evaders](https://homepages.dcc.ufmg.br/~fernando/publications/papers/CGO23_ThaisDamasio.pdf). CGO 2023: 108-121 -- This paper uses MilePost features to find out if two programs solve the same task.

2. Anderson Faustino da Silva, Edson Borin, Fernando Magno Quintão Pereira, Nilton Luiz Queiroz Junior, Otávio Oliveira Napoli: [Program representations for predictive compilation: State of affairs in the early 20's](https://homepages.dcc.ufmg.br/~fernando/publications/papers/FaustinoJCL22.pdf). J. Comput. Lang. 73: 101171 (2022) -- This paper compares the precision of the MilePost features against other program embeddings in various different tasks.

3. Grigori Fursin, Yuriy Kashnikov, Abdul Wahid Memon, Zbigniew Chamski, Olivier Temam, Mircea Namolaru, Elad Yom-Tov, Bilha Mendelson, Ayal Zaks, Eric Courtois, François Bodin, Phil Barnard, Elton Ashton, Edwin V. Bonilla, John Thomson, Christopher K. I. Williams, Michael F. P. O'Boyle: [Milepost GCC: Machine Learning Enabled Self-tuning Compiler](https://ebonilla.github.io/papers/fursin-et-al-ijpp-2011.pdf). Int. J. Parallel Program. 39(3): 296-327 (2011) -- The original description of the MilePost features.

4. André Felipe Zanella, Anderson Faustino da Silva, Fernando Magno Quintão Pereira: [YACOS: a Complete Infrastructure to the Design and Exploration of Code Optimization Sequences](https://homepages.dcc.ufmg.br/~fernando/publications/papers/ZanellaSBLP20.pdf). SBLP 2020: 56-63 -- This paper describes the implementation of the LLVM pass that we have used to collect the MilePost features.