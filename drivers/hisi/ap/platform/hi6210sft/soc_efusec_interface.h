

/*****************************************************************************
  1 其他头文件包含
*****************************************************************************/

#ifndef __SOC_EFUSEC_INTERFACE_H__
#define __SOC_EFUSEC_INTERFACE_H__

#ifdef __cplusplus
    #if __cplusplus
        extern "C" {
    #endif
#endif



/*****************************************************************************
  2 宏定义
*****************************************************************************/

/****************************************************************************
                     (1/1) Sysctrl
 ****************************************************************************/
/* 寄存器说明：配置寄存器，用于使能读/烧写流程，当读完成时，逻辑自动将RDn清除为0。当烧写完成时，逻辑自动将PGEn清除为0。.
   位域定义UNION结构:  SOC_EFUSEC_A_EFUSEC_CFG_UNION */
#define SOC_EFUSEC_A_EFUSEC_CFG_ADDR(base)            ((base) + (0x000))

/* 寄存器说明：状态寄存器，用于表述读/烧写状态
   位域定义UNION结构:  SOC_EFUSEC_A_EFUSEC_STATUS_UNION */
#define SOC_EFUSEC_A_EFUSEC_STATUS_ADDR(base)         ((base) + (0x004))

/* 寄存器说明：读取/烧写地址寄存器。将eufse分组，每组为32bit，对efuse进行烧写或者读取的时候，以一个group为单位
   位域定义UNION结构:  SOC_EFUSEC_A_GROUP_UNION */
#define SOC_EFUSEC_A_GROUP_ADDR(base)                 ((base) + (0x008))

/* 寄存器说明：每次的烧写值寄存器
   位域定义UNION结构:  SOC_EFUSEC_A_PG_VALUE_UNION */
#define SOC_EFUSEC_A_PG_VALUE_ADDR(base)              ((base) + (0x00C))

/* 寄存器说明：efuse内部状态跳转计数器值寄存器。同时该值乘以4作为efuse读操作期间strobe信号脉冲宽度计数值
   位域定义UNION结构:  SOC_EFUSEC_A_EFUSE_COUNT_UNION */
#define SOC_EFUSEC_A_EFUSE_COUNT_ADDR(base)           ((base) + (0x010))

/* 寄存器说明：一次烧写期间strobe信号拉高时间计数器
   位域定义UNION结构:  SOC_EFUSEC_A_PGM_COUNT_UNION */
#define SOC_EFUSEC_A_PGM_COUNT_ADDR(base)             ((base) + (0x014))

/* 寄存器说明：存放软件从efuse读取的数据寄存器
   位域定义UNION结构:  SOC_EFUSEC_A_EFUSE_DATA_UNION */
#define SOC_EFUSEC_A_EFUSE_DATA_ADDR(base)            ((base) + (0x018))

/* 寄存器说明：存放efuse上电解复位后从efuse得到的控制信息，最后一个group的部分连续bit位，详细信息见efuse排布表
   位域定义UNION结构:  SOC_EFUSEC_A_HW_CFG_UNION */
#define SOC_EFUSEC_A_HW_CFG_ADDR(base)                ((base) + (0x01C))

/* 寄存器说明：配置寄存器，用于使能读/烧写流程，当读完成时，逻辑自动将RDn清除为0。当烧写完成时，逻辑自动将PGEn清除为0。.（只CCPU不可访问）
   位域定义UNION结构:  SOC_EFUSEC_C_EFUSEC_CFG_UNION */
#define SOC_EFUSEC_C_EFUSEC_CFG_ADDR(base)            ((base) + (0x0800))

/* 寄存器说明：状态寄存器，用于表述读/烧写状态（只CCPU可访问）
   位域定义UNION结构:  SOC_EFUSEC_C_EFUSEC_STATUS_UNION */
#define SOC_EFUSEC_C_EFUSEC_STATUS_ADDR(base)         ((base) + (0x0804))

/* 寄存器说明：读取/烧写地址寄存器。将eufse分组，每组为32bit，对efuse进行烧写或者读取的时候，以一个group为单位
   位域定义UNION结构:  SOC_EFUSEC_C_GROUP_UNION */
#define SOC_EFUSEC_C_GROUP_ADDR(base)                 ((base) + (0x0808))

/* 寄存器说明：每次的烧写值寄存器
   位域定义UNION结构:  SOC_EFUSEC_C_PG_VALUE_UNION */
#define SOC_EFUSEC_C_PG_VALUE_ADDR(base)              ((base) + (0x080C))

/* 寄存器说明：efuse内部状态跳转计数器值寄存器。同时该值乘以2作为efuse读操作期间strobe信号脉冲宽度计数值
   位域定义UNION结构:  SOC_EFUSEC_C_EFUSE_COUNT_UNION */
#define SOC_EFUSEC_C_EFUSE_COUNT_ADDR(base)           ((base) + (0x0810))

/* 寄存器说明：一次烧写期间strobe信号拉高时间计数器
   位域定义UNION结构:  SOC_EFUSEC_C_PGM_COUNT_UNION */
#define SOC_EFUSEC_C_PGM_COUNT_ADDR(base)             ((base) + (0x0814))

/* 寄存器说明：存放软件从efuse读取的数据寄存器
   位域定义UNION结构:  SOC_EFUSEC_C_EFUSE_DATA_UNION */
#define SOC_EFUSEC_C_EFUSE_DATA_ADDR(base)            ((base) + (0x0818))

/* 寄存器说明：存放efuse上电解复位后从efuse得到的控制信息，最后一个group的部分连续bit位，详细信息见efuse排布表
   位域定义UNION结构:  SOC_EFUSEC_C_HW_CFG_UNION */
#define SOC_EFUSEC_C_HW_CFG_ADDR(base)                ((base) + (0x081C))





/*****************************************************************************
  3 枚举定义
*****************************************************************************/



/*****************************************************************************
  4 消息头定义
*****************************************************************************/


/*****************************************************************************
  5 消息定义
*****************************************************************************/



/*****************************************************************************
  6 STRUCT定义
*****************************************************************************/



/*****************************************************************************
  7 UNION定义
*****************************************************************************/

/****************************************************************************
                     (1/1) Sysctrl
 ****************************************************************************/
/*****************************************************************************
 结构名    : SOC_EFUSEC_A_EFUSEC_CFG_UNION
 结构说明  : A_EFUSEC_CFG 寄存器结构定义。地址偏移量:0x000，初值:0x00000000，宽度:32
 寄存器说明: 配置寄存器，用于使能读/烧写流程，当读完成时，逻辑自动将RDn清除为0。当烧写完成时，逻辑自动将PGEn清除为0。.
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgen      : 1;  /* bit[0]   : 烧写使能信号，当一次烧写完成后，逻辑将此为自动清零。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  pre_pg    : 1;  /* bit[1]   : 预烧写使能信号，使能后硬件拉低PGENB信号。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  rden      : 1;  /* bit[2]   : 读使能信号，当一次读完成后，逻辑将此为自动清零。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  reserved_0: 1;  /* bit[3]   : reserved */
        unsigned int  reserved_1: 1;  /* bit[4]   : reserved */
        unsigned int  pd_en     : 1;  /* bit[5]   : efuse power-down控制。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  mr_en     : 1;  /* bit[6]   : efuse Margin读模式控制。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  undefined : 25; /* bit[7-31]: undefined */
    } reg;
} SOC_EFUSEC_A_EFUSEC_CFG_UNION;
#endif
#define SOC_EFUSEC_A_EFUSEC_CFG_pgen_START       (0)
#define SOC_EFUSEC_A_EFUSEC_CFG_pgen_END         (0)
#define SOC_EFUSEC_A_EFUSEC_CFG_pre_pg_START     (1)
#define SOC_EFUSEC_A_EFUSEC_CFG_pre_pg_END       (1)
#define SOC_EFUSEC_A_EFUSEC_CFG_rden_START       (2)
#define SOC_EFUSEC_A_EFUSEC_CFG_rden_END         (2)
#define SOC_EFUSEC_A_EFUSEC_CFG_pd_en_START      (5)
#define SOC_EFUSEC_A_EFUSEC_CFG_pd_en_END        (5)
#define SOC_EFUSEC_A_EFUSEC_CFG_mr_en_START      (6)
#define SOC_EFUSEC_A_EFUSEC_CFG_mr_en_END        (6)
#define SOC_EFUSEC_A_EFUSEC_CFG_undefined_START  (7)
#define SOC_EFUSEC_A_EFUSEC_CFG_undefined_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_EFUSEC_STATUS_UNION
 结构说明  : A_EFUSEC_STATUS 寄存器结构定义。地址偏移量:0x004，初值:0x00000000，宽度:32
 寄存器说明: 状态寄存器，用于表述读/烧写状态
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_status     : 1;  /* bit[0]   : 烧写状态。
                                                        0：未完成
                                                        1：完成 */
        unsigned int  rd_status     : 1;  /* bit[1]   : efuse读状态
                                                        0：未完成
                                                        1：完成一次读操作 */
        unsigned int  pgenab_status : 1;  /* bit[2]   : 预烧写置位完成状态。
                                                        0：未完成
                                                        1：完成预烧写置位状态 */
        unsigned int  rd_error      : 1;  /* bit[3]   : efuse当前group地址是否是禁止的。
                                                        0：否
                                                        1：是 */
        unsigned int  pd_status     : 1;  /* bit[4]   : power-down状态。
                                                        0：正常状态
                                                        1：power-down状态 */
        unsigned int  undefined     : 27; /* bit[5-31]: undefined */
    } reg;
} SOC_EFUSEC_A_EFUSEC_STATUS_UNION;
#endif
#define SOC_EFUSEC_A_EFUSEC_STATUS_pg_status_START      (0)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pg_status_END        (0)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_status_START      (1)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_status_END        (1)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pgenab_status_START  (2)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pgenab_status_END    (2)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_error_START       (3)
#define SOC_EFUSEC_A_EFUSEC_STATUS_rd_error_END         (3)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pd_status_START      (4)
#define SOC_EFUSEC_A_EFUSEC_STATUS_pd_status_END        (4)
#define SOC_EFUSEC_A_EFUSEC_STATUS_undefined_START      (5)
#define SOC_EFUSEC_A_EFUSEC_STATUS_undefined_END        (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_GROUP_UNION
 结构说明  : A_GROUP 寄存器结构定义。地址偏移量:0x008，初值:0x00000000，宽度:32
 寄存器说明: 读取/烧写地址寄存器。将eufse分组，每组为32bit，对efuse进行烧写或者读取的时候，以一个group为单位
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_group : 6;  /* bit[0-5] : 读取/烧写地址group */
        unsigned int  undefined   : 26; /* bit[6-31]: undefined */
    } reg;
} SOC_EFUSEC_A_GROUP_UNION;
#endif
#define SOC_EFUSEC_A_GROUP_efuse_group_START  (0)
#define SOC_EFUSEC_A_GROUP_efuse_group_END    (5)
#define SOC_EFUSEC_A_GROUP_undefined_START    (6)
#define SOC_EFUSEC_A_GROUP_undefined_END      (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_PG_VALUE_UNION
 结构说明  : A_PG_VALUE 寄存器结构定义。地址偏移量:0x00C，初值:0x00000000，宽度:32
 寄存器说明: 每次的烧写值寄存器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_value : 32; /* bit[0-31]: 一组32bit的烧写信息
                                                   0：不烧写该bit；
                                                   1：烧写该bit； */
    } reg;
} SOC_EFUSEC_A_PG_VALUE_UNION;
#endif
#define SOC_EFUSEC_A_PG_VALUE_pg_value_START  (0)
#define SOC_EFUSEC_A_PG_VALUE_pg_value_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_EFUSE_COUNT_UNION
 结构说明  : A_EFUSE_COUNT 寄存器结构定义。地址偏移量:0x010，初值:0x00000000，宽度:32
 寄存器说明: efuse内部状态跳转计数器值寄存器。同时该值乘以4作为efuse读操作期间strobe信号脉冲宽度计数值
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_count : 8;  /* bit[0-7] : EFUSE内部状态跳转使用的计数值。（COUNT*Trefclk > 60ns） */
        unsigned int  undefined   : 24; /* bit[8-31]: undefined */
    } reg;
} SOC_EFUSEC_A_EFUSE_COUNT_UNION;
#endif
#define SOC_EFUSEC_A_EFUSE_COUNT_efuse_count_START  (0)
#define SOC_EFUSEC_A_EFUSE_COUNT_efuse_count_END    (7)
#define SOC_EFUSEC_A_EFUSE_COUNT_undefined_START    (8)
#define SOC_EFUSEC_A_EFUSE_COUNT_undefined_END      (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_PGM_COUNT_UNION
 结构说明  : A_PGM_COUNT 寄存器结构定义。地址偏移量:0x014，初值:0x00000000，宽度:32
 寄存器说明: 一次烧写期间strobe信号拉高时间计数器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgm_count : 16; /* bit[0-15] : 一次烧写期间strobe信号拉高时间计数器（以参考时钟为计数时钟） */
        unsigned int  undefined : 16; /* bit[16-31]: undefined */
    } reg;
} SOC_EFUSEC_A_PGM_COUNT_UNION;
#endif
#define SOC_EFUSEC_A_PGM_COUNT_pgm_count_START  (0)
#define SOC_EFUSEC_A_PGM_COUNT_pgm_count_END    (15)
#define SOC_EFUSEC_A_PGM_COUNT_undefined_START  (16)
#define SOC_EFUSEC_A_PGM_COUNT_undefined_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_EFUSE_DATA_UNION
 结构说明  : A_EFUSE_DATA 寄存器结构定义。地址偏移量:0x018，初值:0x00000000，宽度:32
 寄存器说明: 存放软件从efuse读取的数据寄存器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_data : 32; /* bit[0-31]: 存放软件从efuse读取的数据 */
    } reg;
} SOC_EFUSEC_A_EFUSE_DATA_UNION;
#endif
#define SOC_EFUSEC_A_EFUSE_DATA_efuse_data_START  (0)
#define SOC_EFUSEC_A_EFUSE_DATA_efuse_data_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_A_HW_CFG_UNION
 结构说明  : A_HW_CFG 寄存器结构定义。地址偏移量:0x01C，初值:0x00000000，宽度:32
 寄存器说明: 存放efuse上电解复位后从efuse得到的控制信息，最后一个group的部分连续bit位，详细信息见efuse排布表
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  undefined : 32; /* bit[0-31]: 存放efuse上电解复位后从efuse得到的控制信息，最后一个group的部分连续bit位，详细信息见efuse排布表 */
    } reg;
} SOC_EFUSEC_A_HW_CFG_UNION;
#endif
#define SOC_EFUSEC_A_HW_CFG_undefined_START  (0)
#define SOC_EFUSEC_A_HW_CFG_undefined_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_EFUSEC_CFG_UNION
 结构说明  : C_EFUSEC_CFG 寄存器结构定义。地址偏移量:0x0800，初值:0x0000，宽度:32
 寄存器说明: 配置寄存器，用于使能读/烧写流程，当读完成时，逻辑自动将RDn清除为0。当烧写完成时，逻辑自动将PGEn清除为0。.（只CCPU不可访问）
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgen      : 1;  /* bit[0]   : 烧写使能信号，当一次烧写完成后，逻辑将此为自动清零。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  pre_pg    : 1;  /* bit[1]   : 预烧写使能信号，使能后硬件拉低PGENB信号。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  rden      : 1;  /* bit[2]   : 读使能信号，当一次读完成后，逻辑将此为自动清零。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  reserved_0: 1;  /* bit[3]   : reserved */
        unsigned int  reserved_1: 1;  /* bit[4]   : reserved */
        unsigned int  pd_en     : 1;  /* bit[5]   : efuse power-down控制。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  mr_en     : 1;  /* bit[6]   : efuse Margin读模式控制。
                                                    0：不使能
                                                    1：使能 */
        unsigned int  undefined : 25; /* bit[7-31]: undefined */
    } reg;
} SOC_EFUSEC_C_EFUSEC_CFG_UNION;
#endif
#define SOC_EFUSEC_C_EFUSEC_CFG_pgen_START       (0)
#define SOC_EFUSEC_C_EFUSEC_CFG_pgen_END         (0)
#define SOC_EFUSEC_C_EFUSEC_CFG_pre_pg_START     (1)
#define SOC_EFUSEC_C_EFUSEC_CFG_pre_pg_END       (1)
#define SOC_EFUSEC_C_EFUSEC_CFG_rden_START       (2)
#define SOC_EFUSEC_C_EFUSEC_CFG_rden_END         (2)
#define SOC_EFUSEC_C_EFUSEC_CFG_pd_en_START      (5)
#define SOC_EFUSEC_C_EFUSEC_CFG_pd_en_END        (5)
#define SOC_EFUSEC_C_EFUSEC_CFG_mr_en_START      (6)
#define SOC_EFUSEC_C_EFUSEC_CFG_mr_en_END        (6)
#define SOC_EFUSEC_C_EFUSEC_CFG_undefined_START  (7)
#define SOC_EFUSEC_C_EFUSEC_CFG_undefined_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_EFUSEC_STATUS_UNION
 结构说明  : C_EFUSEC_STATUS 寄存器结构定义。地址偏移量:0x0804，初值:0x0000，宽度:32
 寄存器说明: 状态寄存器，用于表述读/烧写状态（只CCPU可访问）
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_status     : 1;  /* bit[0]   : 烧写状态。
                                                        0：未完成
                                                        1：完成 */
        unsigned int  rd_status     : 1;  /* bit[1]   : efuse读状态
                                                        0：未完成
                                                        1：完成一次读操作 */
        unsigned int  pgenab_status : 1;  /* bit[2]   : 预烧写置位完成状态。
                                                        0：未完成
                                                        1：完成预烧写置位状态 */
        unsigned int  rd_error      : 1;  /* bit[3]   : efuse当前group地址是否是禁止的。
                                                        0：否
                                                        1：是 */
        unsigned int  pd_status     : 1;  /* bit[4]   : power-down状态。
                                                        0：正常状态
                                                        1：power-down状态 */
        unsigned int  undefined     : 27; /* bit[5-31]: undefined */
    } reg;
} SOC_EFUSEC_C_EFUSEC_STATUS_UNION;
#endif
#define SOC_EFUSEC_C_EFUSEC_STATUS_pg_status_START      (0)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pg_status_END        (0)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_status_START      (1)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_status_END        (1)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pgenab_status_START  (2)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pgenab_status_END    (2)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_error_START       (3)
#define SOC_EFUSEC_C_EFUSEC_STATUS_rd_error_END         (3)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pd_status_START      (4)
#define SOC_EFUSEC_C_EFUSEC_STATUS_pd_status_END        (4)
#define SOC_EFUSEC_C_EFUSEC_STATUS_undefined_START      (5)
#define SOC_EFUSEC_C_EFUSEC_STATUS_undefined_END        (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_GROUP_UNION
 结构说明  : C_GROUP 寄存器结构定义。地址偏移量:0x0808，初值:0x0000，宽度:32
 寄存器说明: 读取/烧写地址寄存器。将eufse分组，每组为32bit，对efuse进行烧写或者读取的时候，以一个group为单位
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_group : 6;  /* bit[0-5] : 读取/烧写地址group */
        unsigned int  undefined   : 26; /* bit[6-31]: undefined */
    } reg;
} SOC_EFUSEC_C_GROUP_UNION;
#endif
#define SOC_EFUSEC_C_GROUP_efuse_group_START  (0)
#define SOC_EFUSEC_C_GROUP_efuse_group_END    (5)
#define SOC_EFUSEC_C_GROUP_undefined_START    (6)
#define SOC_EFUSEC_C_GROUP_undefined_END      (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_PG_VALUE_UNION
 结构说明  : C_PG_VALUE 寄存器结构定义。地址偏移量:0x080C，初值:0x0000，宽度:32
 寄存器说明: 每次的烧写值寄存器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pg_value : 32; /* bit[0-31]: 一组32bit的烧写信息
                                                   0：不烧写该bit；
                                                   1：烧写该bit； */
    } reg;
} SOC_EFUSEC_C_PG_VALUE_UNION;
#endif
#define SOC_EFUSEC_C_PG_VALUE_pg_value_START  (0)
#define SOC_EFUSEC_C_PG_VALUE_pg_value_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_EFUSE_COUNT_UNION
 结构说明  : C_EFUSE_COUNT 寄存器结构定义。地址偏移量:0x0810，初值:0x0000，宽度:32
 寄存器说明: efuse内部状态跳转计数器值寄存器。同时该值乘以2作为efuse读操作期间strobe信号脉冲宽度计数值
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_count : 8;  /* bit[0-7] : EFUSE内部状态跳转使用的计数值。（COUNT*Trefclk > 60ns） */
        unsigned int  undefined   : 24; /* bit[8-31]: undefined */
    } reg;
} SOC_EFUSEC_C_EFUSE_COUNT_UNION;
#endif
#define SOC_EFUSEC_C_EFUSE_COUNT_efuse_count_START  (0)
#define SOC_EFUSEC_C_EFUSE_COUNT_efuse_count_END    (7)
#define SOC_EFUSEC_C_EFUSE_COUNT_undefined_START    (8)
#define SOC_EFUSEC_C_EFUSE_COUNT_undefined_END      (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_PGM_COUNT_UNION
 结构说明  : C_PGM_COUNT 寄存器结构定义。地址偏移量:0x0814，初值:0x0000，宽度:32
 寄存器说明: 一次烧写期间strobe信号拉高时间计数器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  pgm_count : 16; /* bit[0-15] : 一次烧写期间strobe信号拉高时间计数器（以参考时钟为计数时钟） */
        unsigned int            : 16; /* bit[16-31]: undefined */
    } reg;
} SOC_EFUSEC_C_PGM_COUNT_UNION;
#endif
#define SOC_EFUSEC_C_PGM_COUNT_pgm_count_START  (0)
#define SOC_EFUSEC_C_PGM_COUNT_pgm_count_END    (15)
#define SOC_EFUSEC_C_PGM_COUNT__START           (16)
#define SOC_EFUSEC_C_PGM_COUNT__END             (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_EFUSE_DATA_UNION
 结构说明  : C_EFUSE_DATA 寄存器结构定义。地址偏移量:0x0818，初值:0x0000，宽度:32
 寄存器说明: 存放软件从efuse读取的数据寄存器
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  efuse_data : 32; /* bit[0-31]: 存放软件从efuse读取的数据 */
    } reg;
} SOC_EFUSEC_C_EFUSE_DATA_UNION;
#endif
#define SOC_EFUSEC_C_EFUSE_DATA_efuse_data_START  (0)
#define SOC_EFUSEC_C_EFUSE_DATA_efuse_data_END    (31)


/*****************************************************************************
 结构名    : SOC_EFUSEC_C_HW_CFG_UNION
 结构说明  : C_HW_CFG 寄存器结构定义。地址偏移量:0x081C，初值:0x0000，宽度:32
 寄存器说明: 存放efuse上电解复位后从efuse得到的控制信息，最后一个group的部分连续bit位，详细信息见efuse排布表
*****************************************************************************/
#ifndef __SOC_H_FOR_ASM__
typedef union
{
    unsigned int      value;
    struct
    {
        unsigned int  undefined : 32; /* bit[0-31]: 存放efuse上电解复位后从efuse得到的控制信息，最后一个group的部分连续bit位，详细信息见efuse排布表 */
    } reg;
} SOC_EFUSEC_C_HW_CFG_UNION;
#endif
#define SOC_EFUSEC_C_HW_CFG_undefined_START  (0)
#define SOC_EFUSEC_C_HW_CFG_undefined_END    (31)






/*****************************************************************************
  8 OTHERS定义
*****************************************************************************/



/*****************************************************************************
  9 全局变量声明
*****************************************************************************/


/*****************************************************************************
  10 函数声明
*****************************************************************************/


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif /* end of soc_efusec_interface.h */
