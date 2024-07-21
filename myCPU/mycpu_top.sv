module mycpu_top(
    input  wire aclk      ,
    input  wire aresetn   ,   //low active

    output wire [3 :0] arid      ,
    output wire [31:0] araddr    ,
    output wire [7 :0] arlen     ,
    output wire [2 :0] arsize    ,
    output wire [1 :0] arburst   ,
    output wire [1 :0] arlock    ,
    output wire [3 :0] arcache   ,
    output wire [2 :0] arprot    ,
    output wire        arvalid   ,
    input wire        arready   ,

    input wire [3 :0] rid       ,
    input wire [31:0] rdata     ,
    input wire [1 :0] rresp     ,
    input wire        rlast     ,
    input wire        rvalid    ,
    output wire        rready    ,

    output wire [3 :0] awid      ,
    output wire [31:0] awaddr    ,
    output wire [7 :0] awlen     ,
    output wire [2 :0] awsize    ,
    output wire [1 :0] awburst   ,
    output wire [1 :0] awlock    ,
    output wire [3 :0] awcache   ,
    output wire [2 :0] awprot    ,
    output wire        awvalid   ,
    input wire        awready   ,

    output wire [3 :0] wid       ,
    output wire [31:0] wdata     ,
    output wire [3 :0] wstrb     ,
    output wire        wlast     ,
    output wire        wvalid    ,
    input wire        wready    ,

    input wire [3 :0] bid    ,
    input wire [1 :0] bresp  ,
    input wire        bvalid ,
    output wire        bready ,

    // trace debug interface
    output wire [31:0] debug_wb_pc,
    output wire [ 3:0] debug_wb_rf_we,
    output wire [ 4:0] debug_wb_rf_wnum,
    output wire [31:0] debug_wb_rf_wdata,

    // statistics interface
    output wire [31:0] branch_succeed_times,
    output wire [31:0] branch_total_times
);
Top core(
    .clock                  (aclk),
    .reset                  (~aresetn),

    .io_axi_ar_bits_id	        (arid   ),
    .io_axi_ar_bits_addr          (araddr),
    .io_axi_ar_bits_len           (arlen  ),
    .io_axi_ar_bits_size          (arsize ),
    .io_axi_ar_bits_burst         (arburst),
    .io_axi_ar_bits_lock          (arlock ),
    .io_axi_ar_bits_cache         (arcache),
    .io_axi_ar_bits_prot          (arprot ),
    .io_axi_ar_valid         (arvalid),
    .io_axi_ar_ready         (arready ),
    
    .io_axi_r_bits_id             (rid    ),               
    .io_axi_r_bits_data	         (rdata  ),       
    .io_axi_r_bits_resp	         (rresp  ),       
    .io_axi_r_bits_last	         (rlast  ),       
    .io_axi_r_valid         (rvalid ),   
    .io_axi_r_ready          (rready),  

    .io_axi_aw_bits_id	         (awid   ),      
    .io_axi_aw_bits_addr           (awaddr),  
    .io_axi_aw_bits_len	         (awlen  ),      
    .io_axi_aw_bits_size           (awsize ),  
    .io_axi_aw_bits_burst          (awburst),  
    .io_axi_aw_bits_lock           (awlock ),  
    .io_axi_aw_bits_cache          (awcache),  
    .io_axi_aw_bits_prot           (awprot ),  
    .io_axi_aw_valid          (awvalid),  
    .io_axi_aw_ready          (awready ),  

    .io_axi_w_bits_id              (wid   ),                          
    .io_axi_w_bits_data	         (wdata ),                                  
    .io_axi_w_bits_strb	         (wstrb ),                                  
    .io_axi_w_bits_last	         (wlast ),                                  
    .io_axi_w_valid           (wvalid),                              
    .io_axi_w_ready           (wready ),                              

    .io_axi_b_bits_id               (bid    ),                 
    .io_axi_b_bits_resp             (bresp  ),                     
    .io_axi_b_valid            (bvalid ),                     
    .io_axi_b_ready            ( bready),                     

    .io_debug_wb_pc         (debug_wb_pc),
    .io_debug_wb_rf_we     (debug_wb_rf_we),
    .io_debug_wb_rf_wnum    (debug_wb_rf_wnum),
    .io_debug_wb_rf_wdata   (debug_wb_rf_wdata),

    .io_statistic_branch_succeed_time (branch_succeed_times),
    .io_statistic_branch_total_time   (branch_total_times)
);
endmodule