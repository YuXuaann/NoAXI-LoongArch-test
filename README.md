# NoAXI-LoongArch-test
CPU simulator based on [soc-simulator-axi](https://github.com/cyyself/soc-simulator/tree/nscscc_axi)


## How to use
1. Put your rtl codes to `myCPU`  
2. Put your test codes to `test-set/test_bin`   
3. Run `make func` to run differ test  
4. Run `make func_cemu` to generate golden_trace
5. Run `make trace` to run trace test
6. Run `make wave` to debug