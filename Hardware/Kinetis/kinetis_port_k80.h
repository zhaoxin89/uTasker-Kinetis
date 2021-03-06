/***********************************************************************
    Mark Butcher    Bsc (Hons) MPhil MIET

    M.J.Butcher Consulting
    Birchstrasse 20f,    CH-5406, R�tihof
    Switzerland

    www.uTasker.com    Skype: M_J_Butcher

    ---------------------------------------------------------------------
    File:      kinetis_port_k80.h
    Project:   Single Chip Embedded Internet
    ---------------------------------------------------------------------
    Copyright (C) M.J.Butcher Consulting 2004..2015
    *********************************************************************/


// Work in progress - ports A and E have been completed for K82

#if PIN_COUNT == PIN_COUNT_100_PIN                                       // 100 pin LQFP
    #define _PIN_COUNT              1
#elif PIN_COUNT == PIN_COUNT_121_PIN
    #if PACKAGE_TYPE == PACKAGE_WLCSP
        #define _PIN_COUNT          3                                    // 121 pin WLCSP
    #else
        #define _PIN_COUNT          2                                    // 121 pin XFBGA
    #endif
#elif PIN_COUNT == PIN_COUNT_144_PIN
    #define _PIN_COUNT              0                                    // 144 pin LQFP
#else
    #error "Package not clearly defined!!"
#endif

#define ALTERNATIVE_FUNCTIONS   7                                        // GPIO plus 7 possible peripheral/extra/system functions

static const char *cPinNumber[PORTS_AVAILABLE + 1][PORT_WIDTH][2] = {
    {
        //  144LQFP   100 LQFP   121XFBGA   121 WLCSP                    GPIO A
        {  "50",       "36",     "L7",       "J7",    },                 // PA0
        {  "51",       "37",     "H8",       "J6",    },                 // PA1
        {  "52",       "38",     "J7",       "K6",    },                 // PA2
        {  "53",       "39",     "H9",       "L6",    },                 // PA3
        {  "54",       "40",     "J8",       "H6",    },                 // PA4
        {  "55",       "41",     "K7",       "H5",    },                 // PA5
        {  "58",       "-",      "-",        "-",     },                 // PA6
        {  "59",       "-",      "-",        "-",     },                 // PA7
        {  "60",       "-",      "-",        "-",     },                 // PA8
        {  "61",       "-",      "-",        "-",     },                 // PA9
        {  "62",       "-",      "J9",       "L5",    },                 // PA10
        {  "63",       "-",      "H7",       "L4",    },                 // PA11
        {  "64",       "42",     "K8",       "K5",    },                 // PA12
        {  "65",       "43",     "L8",       "J5",    },                 // PA13
        {  "66",       "44",     "K9",       "L3",    },                 // PA14
        {  "67",       "P11",    "K8",       "P11",   },                 // PA15
        {  "68",       "N11",    "K12",      "N11",   },                 // PA16
        {  "69",       "T11",    "K11",      "T11",   },                 // PA17
        {  "72",       "T15",    "P14",      "T15",   },                 // PA18
        {  "73",       "T16",    "P13",      "T16",   },                 // PA19
        {  "48",       "-",      "H5",       "L7",    },                 // PA20
        {  "49",       "-",      "J5",       "K7",    },                 // PA21
        {  "-",        "-",      "-",        "-",     },                 // PA22
        {  "-",        "-",      "-",        "-",     },                 // PA23
        {  "75",       "-",      "-",        "-",     },                 // PA24
        {  "76",       "-",      "-",        "-",     },                 // PA25
        {  "77",       "-",      "-",        "-",     },                 // PA26
        {  "78",       "-",      "-",        "-",     },                 // PA27
        {  "79",       "-",      "-",        "-",     },                 // PA28
        {  "80",       "-",      "H11",      "J2",    },                 // PA29
        {  "-",        "-",      "-",        "-",     },                 // PA30
        {  "-",        "-",      "-",        "-",     },                 // PA31
    },
    {
        //  144LQFP   100 LQFP   121XFBGA   121 WLCSP                    GPIO B
        {  "M14",      "M12",    "N6",       "T7",    },                 // PB0
        {  "L14",      "M11",    "P7",       "N8",    },                 // PB1
        {  "K13",      "P15",    "N7",       "T8",    },                 // PB2
        {  "J12",      "M14",    "M7",       "P8",    },                 // PB3
        {  "K14",      "N15",    "L7",       "R8",    },                 // PB4
        {  "J11",      "M15",    "P8",       "T12",   },                 // PB5
        {  "J13",      "L14",    "M10",      "R12",   },                 // PB6
        {  "J14",      "L15",    "L10",      "P12",   },                 // PB7
        {  "H14",      "K14",    "P11",      "N12",   },                 // PB8
        {  "H13",      "K15",    "N11",      "T13",   },                 // PB9
        {  "H12",      "J13",    "N12",      "P13",   },                 // PB10
        {  "H11",      "J14",    "N13",      "R13",   },                 // PB11
        {  "-",        "-",      "K6",       "M10",   },                 // PB12
        {  "-",        "-",      "K7",       "N10",   },                 // PB13
        {  "-",        "-",      "J6",       "R11",   },                 // PB14
        {  "-",        "-",      "K8",       "P11",   },                 // PB15
        {  "G12",      "J15",    "K12",      "N11",   },                 // PB16
        {  "G11",      "H13",    "K11",      "T11",   },                 // PB17
        {  "F14",      "H14",    "P14",      "T15",   },                 // PB18
        {  "F12",      "H15",    "P13",      "T16",   },                 // PB19
        {  "E14",      "G13",    "-",        "-",     },                 // PB20
        {  "F11",      "G14",    "-",        "-",     },                 // PB21
        {  "D14",      "G15",    "-",        "-",     },                 // PB22
        {  "E12",      "H16",    "-",        "-",     },                 // PB23
        {  "-",        "-",      "M12",      "N13",   },                 // PB24
        {  "-",        "-",      "M11",      "R14",   },                 // PB25
        {  "-",        "-",      "L12",      "M13",   },                 // PB26
        {  "-",        "-",      "L11",      "R15",   },                 // PB27
        {  "-",        "-",      "M13",      "P14",   },                 // PB28
        {  "-",        "-",      "L13",      "N14",   },                 // PB29
        {  "-",        "-",      "-",        "-",     },                 // PB30
        {  "-",        "-",      "-",        "-",     },                 // PB31
    },
    {
        //  144LQFP   100 LQFP   121XFBGA   121 WLCSP                    GPIO C
        {  "C14",      "G16",    "N6",       "T7",    },                 // PC0
        {  "C13",      "F13",    "P7",       "N8",    },                 // PC1
        {  "B14",      "F14",    "N7",       "T8",    },                 // PC2
        {  "C12",      "E13",    "M7",       "P8",    },                 // PC3
        {  "C11",      "E14",    "L7",       "R8",    },                 // PC4
        {  "B13",      "E15",    "P8",       "T12",   },                 // PC5
        {  "B12",      "F12",    "M10",      "R12",   },                 // PC6
        {  "A13",      "G12",    "L10",      "P12",   },                 // PC7
        {  "C10",      "H12",    "P11",      "N12",   },                 // PC8
        {  "B11",      "F11",    "N11",      "T13",   },                 // PC9
        {  "A12",      "G11",    "N12",      "P13",   },                 // PC10
        {  "B10",      "H11",    "N13",      "R13",   },                 // PC11
        {  "A11",      "J12",    "K6",       "M10",   },                 // PC12
        {  "A10",      "K13",    "K7",       "N10",   },                 // PC13
        {  "B9",       "J11",    "J6",       "R11",   },                 // PC14
        {  "C9",       "F10",    "K8",       "P11",   },                 // PC15
        {  "A9",       "F9",     "K12",      "N11",   },                 // PC16
        {  "B8",       "E9",     "K11",      "T11",   },                 // PC17
        {  "A8",       "M9",     "P14",      "T15",   },                 // PC18
        {  "A7",       "M8",     "P13",      "T16",   },                 // PC19
        {  "-",        "-",      "-",        "-",     },                 // PC20
        {  "-",        "-",      "-",        "-",     },                 // PC21
        {  "-",        "-",      "-",        "-",     },                 // PC22
        {  "-",        "-",      "-",        "-",     },                 // PC23
        {  "-",        "-",      "M12",      "N13",   },                 // PC24
        {  "-",        "-",      "M11",      "R14",   },                 // PC25
        {  "-",        "-",      "L12",      "M13",   },                 // PC26
        {  "-",        "-",      "L11",      "R15",   },                 // PC27
        {  "-",        "-",      "M13",      "P14",   },                 // PC28
        {  "-",        "-",      "L13",      "N14",   },                 // PC29
        {  "-",        "-",      "-",        "-",     },                 // PC30
        {  "-",        "-",      "-",        "-",     },                 // PC31
    },
    {
        //  144LQFP   100 LQFP   121XFBGA   121 WLCSP                    GPIO D
        {  "B7",       "L8",     "N6",       "T7",    },                 // PD0
        {  "A6",       "F8",     "P7",       "N8",    },                 // PD1
        {  "B6",       "K6",     "N7",       "T8",    },                 // PD2
        {  "A5",       "J6",     "M7",       "P8",    },                 // PD3
        {  "B5",       "K5",     "L7",       "R8",    },                 // PD4
        {  "C6",       "J5",     "P8",       "T12",   },                 // PD5
        {  "A4",       "K4",     "M10",      "R12",   },                 // PD6
        {  "B4",       "E7",     "L10",      "P12",   },                 // PD7
        {  "C5",       "J4",     "P11",      "N12",   },                 // PD8
        {  "A3",       "F7",     "N11",      "T13",   },                 // PD9
        {  "A2",       "E6",     "N12",      "P13",   },                 // PD10
        {  "B3",       "G5",     "N13",      "R13",   },                 // PD11
        {  "C4",       "F5",     "K6",       "M10",   },                 // PD12
        {  "B2",       "F4",     "K7",       "N10",   },                 // PD13
        {  "B1",       "E5",     "J6",       "R11",   },                 // PD14
        {  "C3",       "E4",     "K8",       "P11",   },                 // PD15
        {  "-",        "-",      "K12",      "N11",   },                 // PD16
        {  "-",        "-",      "K11",      "T11",   },                 // PD17
        {  "-",        "-",      "P14",      "T15",   },                 // PD18
        {  "-",        "-",      "P13",      "T16",   },                 // PD19
        {  "-",        "-",      "-",        "-",     },                 // PD20
        {  "-",        "-",      "-",        "-",     },                 // PD21
        {  "-",        "-",      "-",        "-",     },                 // PD22
        {  "-",        "-",      "-",        "-",     },                 // PD23
        {  "-",        "-",      "M12",      "N13",   },                 // PD24
        {  "-",        "-",      "M11",      "R14",   },                 // PD25
        {  "-",        "-",      "L12",      "M13",   },                 // PD26
        {  "-",        "-",      "L11",      "R15",   },                 // PD27
        {  "-",        "-",      "M13",      "P14",   },                 // PD28
        {  "-",        "-",      "L13",      "N14",   },                 // PD29
        {  "-",        "-",      "-",        "-",     },                 // PD30
        {  "-",        "-",      "-",        "-",     },                 // PD31
    },
    {
        //  144LQFP   100 LQFP   121XFBGA   121 WLCSP                    GPIO E
        {  "1",        "1",      "B1",       "C10",   },                 // PE0
        {  "2",        "2",      "C2",       "D9",    },                 // PE1
        {  "3",        "3",      "C1",       "D10",   },                 // PE2
        {  "4",        "4",      "D2",       "B11",   },                 // PE3
        {  "7",        "7",      "D1",       "C11",   },                 // PE4
        {  "8",        "8",      "E2",       "E8",    },                 // PE5
        {  "9",        "9",      "E1",       "E9",    },                 // PE6
        {  "10",       "10",     "F3",       "E10",   },                 // PE7
        {  "11",       "11",     "F2",       "D11",   },                 // PE8
        {  "12",       "12",     "F1",       "E11",   },                 // PE9
        {  "13",       "13",     "G2",       "F8",    },                 // PE10
        {  "14",       "14",     "G1",       "F9",    },                 // PE11
        {  "15",       "-",      "-",        "-",     },                 // PE12
        {  "16",       "-",      "-",        "-",     },                 // PE13
        {  "-",        "-",      "J6",       "R11",   },                 // PE14
        {  "-",        "-",      "K8",       "P11",   },                 // PE15
        {  "19",       "-",      "-",        "-",     },                 // PE16
        {  "20",       "-",      "-",        "-",     },                 // PE17
        {  "21",       "-",      "-",        "-",     },                 // PE18
        {  "22",       "-",      "-",        "-",     },                 // PE19
        {  "-",        "-",      "-",        "-",     },                 // PE20
        {  "-",        "-",      "-",        "-",     },                 // PE21
        {  "-",        "-",      "-",        "-",     },                 // PE22
        {  "-",        "-",      "-",        "-",     },                 // PE23
        {  "-",        "-",      "-",        "-",     },                 // PE24
        {  "-",        "-",      "-",        "-",     },                 // PE25
        {  "-",        "-",      "-",        "-",     },                 // PE26
        {  "-",        "-",      "-",        "-",     },                 // PE27
        {  "-",        "-",      "-",        "-",     },                 // PE28
        {  "-",        "-",      "-",        "-",     },                 // PE29
        {  "-",        "-",      "-",        "-",     },                 // PE30
        {  "-",        "-",      "-",        "-",     },                 // PE31
    },
    { 
        //  144LQFP   100 LQFP   121XFBGA   121 WLCSP                    dedicated ADC pins
        {  "29",      "-",       "K2",      "J10", },                    // ADC0_DP0
        {  "30",      "-",       "K1",      "K10", },                    // ADC0_DM0
        {  "31",      "-",       "J3",      "K11", },                    // ADC0_DP3
        {  "32",      "-",       "K3",      "K11", },                    // ADC0_DM3
        {  "34",      "23",      "G5",      "H9",  },                    // VREFH
        {  "35",      "24",      "G6",      "J9",  },                    // VREFL
        {  "37",      "26",      "L2",      "-",   },                    // ADC0_DP1
        {  "38",      "27",      "L1",      "-",   },                    // ADC0_DM1
        {  "39",      "28",      "L3",      "L11", },                    // VREF_OUT/CMP1_IN5/CMP0_IN5/ADC0_SE22
        {  "40",      "29",      "K4",      "L10", },                    // DAC0_OUT/CMP1_IN3/ADC0_SE23
        {  "42",      "30",      "K5",      "H7",  },                    // RTC_WAKEUP_B
        {  "43",      "31",      "L4",      "L9",  },                    // XTAL32
        {  "44",      "32",      "L5",      "L8",  },                    // EXTAL32
        {  "45",      "33",      "K6",      "K8",  },                    // VBAT
        {  "74",      "52",      "J11",     "J1",  },                    // RESET_b
        {  "-",       "-",       "-",       "G8",  },                    // ADC0_SE16
        {  "6",       "6",       "E5",      "F7",  },                    // VDDIO_E
        {  "17",      "15",      "-",       "F10", },                    // VDDIO_E
        {  "-",       "-",       "-",       "-",   },                    //
        {  "-",       "-",       "-",       "-",   },                    //
        {  "-",       "-",       "-",       "-",   },                    //

    }
};

static int ADC_DEDICATED_CHANNEL[PORT_WIDTH] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, ADC_DM1_SINGLE, 0, 0};
static int ADC_DEDICATED_MODULE[PORT_WIDTH] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0};
static int ADC_MUX_CHANNEL[PORTS_AVAILABLE][PORT_WIDTH] = {0};


static const char *cPer[PORTS_AVAILABLE][PORT_WIDTH][8] = {
    {
        // ALT 0           ALT 1    ALT2         ALT 3         ALT 4          ALT 5        ALT 6       ALT 7
        {  "TSI0_CH1",     "PTA0",  "LPUART0_CTS_b","FTM0_CH5","-",           "FXIO0_D10", "EMVSIM0_CLK", "JTAG_TCLK/SWD_CLK"}, // PORT A
        {  "TSI0_CH2",     "PTA1",  "LPUART0_RX","FTM0_CH6",   "I2C3_SDA",    "FXIO0_D11", "EMVSIM0_IO",  "JTAG_TDI"       },
        {  "TSI0_CH3",     "PTA2",  "LPUART0_TX","FTM0_CH7",   "I2C3_SCL",    "FXIO0_D12", "EMVSIM0_PD",  "JTAG_TDI/TRACE_SWO"},
        {  "TSI0_CH4",     "PTA3",  "LPUART0_RTS_b","FTM0_CH0","-",           "FXIO0_D13", "EMVSIM0_RST", "JTAG_TMS/SWD_DIO"},
        {  "TSI0_CH5",     "PTA4/LLWU_P3", "-",  "FTM0_CH1",   "-",           "FXIO0_D14", "EMVSIM0_VCCEN","NMI_b"         },
        {  "-",            "PTA5",  "USB0_CLKIN","FTM0_CH2",   "-",           "FXIO0_D15", "I2S0_TX_BCLK","JTAG_TRST"      },
        {  "-",            "PTA6",  "I2C2_SCL",  "FTM0_CH3",   "EVMSIM1CLK",  "CLKOUT",    "-",        "TRACE_CLKOUT"      },
        {  "ADC0_SE10",    "PTA7",  "I2C2_SDA",  "FTM0_CH4",   "EVMSIM1_IO",  "-",         "-",        "TRACE_D3"          },
        {  "ADC0_SE11",    "PTA8",  "-",         "FTM1_CH0",   "EMVSIM1_PD",  "-",         "FTM1_QD_PHA/TPM1_CH0","TRACE_D2"},
        {  "-",            "PTA9",  "-",         "FTM1_CH1",   "EMVSIM1_RST", "-",         "FTM1_QD_PHB/TPM1_CH1","TRACE_D1"},
        {  "-",            "PTA10/LLWU_P22","I2C2_SDA","FTM2_CH0","EMVSIM1_VCCEN","FXIO0_D16","FTM2_QD_PHA/TPM2_CH0","TRACE_D0"},
        {  "-",            "PTA11/LLWU_P23","I2C2_SCL","FTM2_CH1","-",       "FXIO0_D17",  "FTM2_QD_PHB/TPM2_CH1","-"      },
        {  "-",            "PTA12", "-",         "FTM1_CH0",   "TRACE_CLKOUT","FXIO0_D18", "I2S0_TXD", "FTM1_QD_PHA/TPM1_CH0" },
        {  "-",            "PTA13/LLWU_P4", "-", "FTM1_CH1",   "TRACE_D3",    "FXIO0_D19", "I2S0_TX_FS","FTM1_QD_PHB/TPM1_CH1"},
        {  "-",            "PTA14", "SPI0_PCS0", "LPUART0_TX", "TRACE_D2",    "FXIO0_D20", "I2S0_RX_BCLK","I2S0_TXD1"      },
        {  "-",            "PTA15", "SPI0_SCK",  "LPUART0_RX", "TRACE_D1",    "FXIO0_D21", "I2S0_RXD0","-"                 },
        {  "-",            "PTA16", "SPI0_SOUT", "LPUART0_CTS_b","TRACE_D0",  "FXIO0_D22", "I2S0_RX_FS","I2S0_RXD1"        },
        {  "-",            "PTA17", "SPI0_SIN",  "LPUART0_RTS_b","MII_TXD1",  "FXIO0_D23", "I2S0_MCLK","-"                 },
        {  "EXTAL0",       "PTA18", "-",         "FTM0_FLT2",  "FTM_CLKIN0",  "-",         "-",        "TPM_CLKIN0"        },
        {  "XTAL0",        "PTA19", "-",         "FTM1_FLT0",  "FTM_CLKIN1",  "-",         "LPTMR0_ALT1","TPM_CLKIN1"      },
        {  "-",            "PTA20", "I2C0_SCL",  "LPUART4_TX", "FTM_CLKIN1",  "FXIO0_D8",  "EWM_OUT_b","TPM_CLKIN1"        },
        {  "-",            "PTA21/LLWU_P21","I2C0_SDA","LPUART4_RX","-",      "FXIO0_D9",  "EWM_IN",   "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "PTA24", "EMVSIM0_CLK","-",         "-",           "-",         "FB_A29",   "-"                 },
        {  "-",            "PTA25", "EMVSIM0_IO","-",          "-",           "-",         "FB_A28",   "-"                 },
        {  "-",            "PTA26", "EMVSIM0_PD","-",          "-",           "-",         "FB_A27",   "-"                 },                
        {  "-",            "PTA27", "EMVSIM0_RST","-",         "-",           "-",         "FB_A26",   "-"                 },
        {  "-",            "PTA28", "EMVSIM0_VCCEN","-",       "-",           "-",         "FB_A25",   "-"                 },
        {  "-",            "PTA29", "-",         "-",          "-",           "-",         "FB_A24",   "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 }
    },
    {
        // ALT 0           ALT 1    ALT2         ALT 3         ALT 4          ALT 5        ALT 6       ALT 7
        {  "ADC0_SE8/TSI0_CH0","PTB0","I2C0_SCL","FTM1_CH0",   "MII_MDIO",    "-",         "FTM1_QD_PHA", "-"              }, // PORT B
        {  "ADC0_SE9/TSI0_CH6","PTB1","I2C0_SDA","FTM1_CH1",   "MII_MCD",     "-",         "FTM1_QD_PHB", "-"              },
        {  "ADC0_SE12/TSI0_CH7","PTB2","I2C0_SCL","UART0_RTS_b","ENET_1588_TMR0","-",      "FTM0_FLT3","-"                 },
        {  "ADC0_SE13/TSI0_CH8","PTB3","I2C0_SDA","UART0_CTS_b/UART0_COL_b","ENET_1588_TMR1","-","FTM0_FLT0","-"           },
        {  "ADC1_SE10",    "PTB4",  "GLCD_CONTRAST","-",       "ENET_1588_TMR2","-",       "FTM1_FLT0","-"                 },
        {  "ADC1_SE11",    "PTB5",  "-",         "-",          "ENET_1588_TMR3","-",       "FTM2_FLT0","-"                 },
        {  "ADC1_SE12",    "PTB6",  "-",         "-",          "-",           "FB_AD23",   "-",        "-"                 },
        {  "ADC1_SE13",    "PTB7",  "-",         "-",          "-",           "FB_AD22",   "-",        "-"                 },
        {  "-",            "PTB8",  "-",         "UART3_RTS_b","-",           "FB_AD21",   "-",        "-"                 },
        {  "-",            "PTB9",  "SPI1_PCS1", "UART3_CTS_b","-",           "FB_AD20",   "-",        "-"                 },
        {  "ADC1_SE14",    "PTB10", "SPI1_PCS0", "UART3_RX",   "I2S1_TX_BCLK","FB_AD19",   "FTM0_FLT1","-"                 },
        {  "ADC1_SE15",    "PTB11", "SPI1_SCK",  "UART3_TX",   "I2S1_TX_FS",  "FB_AD18",   "FTM0_FLT2","-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "TSI0_CH9",     "PTB16", "SPI1_SOUT", "UART0_RX",   "I2S1_TXD0",    "FB_AD17",   "EWM_IN",   "-"                },
        {  "TSI0_CH10",    "PTB17", "SPI1_SIN",  "UART0_TX",   "I2S1_TXD1",    "FB_AD16",   "EWM_OUT_b","-"                },
        {  "TSI0_CH11",    "PTB18", "CAN0_TX",   "FTM2_CH0",   "I2S0_TX_BCLK", "FB_AD15",   "FTM2_QD_PHA","-"              },
        {  "TSI0_CH12",    "PTB19", "CAN0_RX",   "FTM2_CH1",   "I2S0_TX_FS",   "FB_OE_b",   "FTM2_QD_PHB","-"              },
        {  "ADC2_SE4a",    "PTB20", "SPI2_PCS0", "-",          "-",            "FB_AD31/NFC_DATA15","CMP0_OUT","-"         },
        {  "ADC2_SE5a",    "PTB21", "SPI2_SCK",  "-",          "-",            "FB_AD30/NFC_DATA14","CMP1_OUT","-"         },
        {  "-",            "PTB22", "SPI2_SOUT", "-",          "-",            "FB_AD29/NFC_DATA13","CMP2_OUT","-"         },
        {  "-",            "PTB23", "SPI2_SIN",  "SPI0_PCS5",  "-",            "FB_AD28/NFC_DATA12","CMP3_OUT","-"         },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 }
    },
    {
        // ALT 0           ALT 1    ALT2         ALT 3         ALT 4          ALT 5        ALT 6       ALT 7
        {  "ADC0_SE14/TSI0_CH13","PTC0","SPI0_PCS4","PDB0_EXTRG","-",         "FB_AD14/NFC_DATA11","I2S0_TXD1","-"         }, // PORT C
        {  "ADC0_SE15/TSI0_CH14","PTC1","SPI0_PCS3","UART1_RTS_b","FTM0_CH0", "FB_AD13/NFC_DATA10","I2S0_TXD0","-"         },
        {  "ADC0_SE4b/CMP1_IN0/TSI0_CH15","PTC2","SPI0_PCS2","UART1_CTS_b","FTM0_CH1","FB_AD12/NFC_DATA9","I2S0_TX_FS","-" },
        {  "CMP1_IN1",     "PTC3",  "SPI0_PCS1", "UART1_RX",   "FTM0_CH2",    "-",         "I2S0_TX_BCLK","-"              },
        {  "-",            "PTC4",  "SPI0_PCS0", "UART1_TX",   "FTM0_CH3",    "FB_AD11/NFC_DATA8","CMP1_OUT", "I2S1_TX_BCLK" },
        {  "-",            "PTC5",  "SPI0_SCK",  "LPTMR0_ALT2","I2S0_RXD0",   "FB_AD10/NFC_DATA7","CMP0_OUT", "I2S1_TX_FS" },
        {  "CMP0_IN0",     "PTC6",  "SPI0_SOUT", "PDB0_EXTRG", "I2S0_RX_BCLK","FB_AD9/NFC_DATA6","I2S0_MCLK", "-"          },
        {  "CMP0_IN1",     "PTC7",  "SPI0_SIN",  "USB_SOF_OUT","I2S0_RX_FS",  "FB_AD8/NFC_DATA5","-",  "-"                 },
        {  "ADC1_SE4b/CMP0_IN2","PTC8","-",      "FTM3_CH4",   "I2S0_MCLK",   "FB_AD7/NFC_DATA4","-",  "-"                 },
        {  "ADC1_SE5b/CMP0_IN3","PTC9","-",      "FTM3_CH5",   "I2S0_RX_BCLK","FB_AD6/NFC_DATA3","FTM2_FLT0","-"           },
        {  "ADC1_SE6b",    "PTC10", "I2C1_SCL",  "FTM3_CH6",   "I2S0_RX_FS",  "FB_AD5/NFC_DATA2","I2S1_MCLK","-"           },
        {  "ADC1_SE7b",    "PTC11", "I2C1_SDA",  "FTM3_CH7",   "I2S0_RXD1",   "FB_RW_b/NFC_WE","-",     "-"                },
        {  "-",            "PTC12", "-",         "UART4_RTS_b","-",           "FB_AD27",   "FTM3_FLT0", "-"                },
        {  "-",            "PTC13", "-",         "UART4_CTS_b","-",           "FB_AD26",   "-",        "-"                 },
        {  "-",            "PTC14", "-",         "UART4_RX",   "-",           "FB_AD25",   "-",        "-"                 },
        {  "-",            "PTC15", "-",         "UART4_TX",   "-",           "FB_AD24",   "-",        "-"                 },
        {  "-",            "PTC16", "CAN1_RX",   "UART3_RX",   "ENET_1588_TMR0","FB_CS5_b/FB_TSIZ1/FB_BE23_16_BLS15_8_b","NFC_RB","-"},
        {  "-",            "PTC17", "CAN1_TX",   "UART3_TX",   "ENET_1588_TMR1","FB_CS4_b/FB_TSIZ0/FB_BE31_24_BLS7_0_b","NFC_CE0_b","-"},
        {  "-",            "PTC18", "-",         "UART3_RTS_b","ENET_1588_TMR2","FB_TBST_b/FB_CS2_b/FB_BE15_8_BLS23_16_b","NFC_CE1_b","-"},
        {  "-",            "PTC19", "-",         "UART3_CTS_b","ENET_1588_TMR3","FB_CS3_b/FB_BE7_0_BLS31_24_b","FB_TA_b","-"     },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 }
    },
    {
        // ALT 0           ALT 1    ALT2         ALT 3         ALT 4          ALT 5        ALT 6       ALT 7
        {  "-",            "PTD0",  "SPI0_PCS0", "UART2_RTS_b","FTM3_CH0",    "FB_ALE/FB_CS1_b/FB_TS_b","I2S1_RXD1","-"    }, // PORT D
        {  "ADC0_SE5b",    "PTD1",  "SPI0_SCK",  "UART2_CTS_b","FTM3_CH1",    "FB_CS0_b",  "I2S1_RXD0","-"                 },
        {  "-",            "PTD2",  "SPI0_SOUT", "UART2_RX",   "FTM3_CH2",    "FB_AD4",    "I2S1_RX_FS","-"                },
        {  "-",            "PTD3",  "SPI0_SIN",  "UART2_TX",   "FTM3_CH3",    "FB_AD3",    "I2S1_RX_BCLK","-"              },
        {  "-",            "PTD4",  "SPI0_PCS1", "UART0_RTS_b","FTM0_CH4",    "FB_AD2/NFC_DATA1","EWM_IN","-"              },
        {  "ADC0_SE6b",    "PTD5",  "SPI0_PCS2", "UART0_CTS_b/UART0_COL_b","FTM0_CH5","FB_AD1/NFC_DATA0","EWM_OUT_b","-"   },
        {  "ADC0_SE7b",    "PTD6",  "SPI0_PCS3", "UART0_RX",   "FTM0_CH6",    "FB_AD0",    "FTM0_FLT0","-"                 },
        {  "-",            "PTD7",  "CMT_IRO",   "UART0_TX",   "FTM0_CH7",    "-",         "FTM0_FLT1","-"                 },
        {  "-",            "PTD8",  "I2C0_SCL",  "UART5_RX",   "-",           "-",         "FB_A16/NFC_CLE","-"            },
        {  "-",            "PTD9",  "I2C0_SDA",  "UART5_TX",   "-",           "-",         "FB_A17/NFC_ALE","-"            },
        {  "-",            "PTD10", "-",         "UART5_RTS_b","-",           "-",         "FB_A18/NFC_RE","-"             },
        {  "-",            "PTD11", "SPI2_PCS0", "UART5_CTS_b","SDHC0_CLKIN", "-",         "FB_A19",   "GLCD_CONTRAST"     },
        {  "-",            "PTD12", "SPI2_SCK",  "FTM3_FLT0",  "SDHC0_D4",    "-",         "FB_A20",   "GLCD_PCLK"         },
        {  "-",            "PTD13", "SPI2_SOUT", "-",          "SDHC0_D5",    "-",         "FB_A21",   "GLCD_DE"           },
        {  "-",            "PTD14", "SPI2_SIN",  "-",          "SDHC0_D6",    "-",         "FB_A22",   "GLCD_HFS"          },
        {  "-",            "PTD15", "SPI2_PCS1", "-",          "SDHC0_D7",    "-",         "FB_A23",   "GLCD_VFS"          },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 }
    },
    {
        // ALT 0           ALT 1    ALT2         ALT 3         ALT 4          ALT 5        ALT 6       ALT 7
        {  "-",            "PTE0",  "SPI1_PCS1", "LPUART1_TX", "SDHC0_D1",    "QSPI0A_DATA3","I2C1_SDA","RTC_CLOKUT"       }, // PORT E
        {  "-",            "PTE1/LLWU_P0","SPI1_SCK","LPUART1_RX","SDHC0_D0", "QSPI0A_SCLK","I2C1_SCL","SPI1_SIN"          },
        {  "-",            "PTE2/LLWU_P1","SPI1_SOUT","LPUART1_CTS_b","SDHC0_DCLK","QSPI0A_DATA0","-", "SPI1_SCK"          },
        {  "-",            "PTE3",  "SPI1_PCS0", "LPUART1_RTS_b","SDHC0_CMD", "QSPI0A_DATA2","-",      "SPI1_SOUT"         },
        {  "-",            "PTE4/LLWU_P2","SPI1_SIN","LPUART3_TX","SDHC0_D3", "QSPI0A_DATA1","-",      "-"                 },
        {  "-",            "PTE5",  "SPI1_PCS0", "LPUART3_RX", "SDHC0_D2",    "QSPI0A_SS0_B","FTM3_CH0","USB_SOF_OUT"      },
        {  "-",            "PTE6/LLWU_P16","SPI1_PCS3","LPUART3_CTS_b","I2S0_MCLK","QSPI0B_DATA3","FTM3_CH1","SDHC0_D4"    },
        {  "-",            "PTE7",  "SPI2_SCK",  "LPUART3_RTS_b","I2S0_RXD0", "QSPI0B_SCLK","FTM3_CH2", "QSPI0A_SS1_B"     },
        {  "-",            "PTE8",  "I2S0_RXD1", "SPI2_SOUT",  "I2S0_RX_FS",  "QSPI0B_DATA0","FTM3_CH3", "SDHC0_D5"        },
        {  "-",            "PTE9/LLWU_P17","I2S0_TXD1","SPI2_PCS1","I2S0_RX_BCLK","QSPI0B_DATA2","FTM3_CH4", "SDHC0_D6"    },
        {  "-",            "PTE10/LLWU_P18","I2C3_SDA","SPI2_SIN","I2S0_TXD0","QSPI0B_DATA1","FTM3_CH5", "SDHC0_D7"        },
        {  "-",            "PTE11", "I2C3_SCL",  "SPI2_PCS0",  "I2S0_TX_FS",  "QSPI0B_SS0_B","FTM3_CH6", "QSPI0A_DQS"      },
        {  "-",            "PTE12", "-",         "LPUART2_TX", "I2S0_TX_BCLK","QSPI0B_DQS","FTM3_CH7", "FXIO0_D2"          },
        {  "-",            "PTE13", "-",         "LPUART2_RX", "-",           "QSPI0B_SS1_B", "SDHC0_CLKIN", "FXIO0_D3"    },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "ADC0_SE4a",    "PTE16", "SPI0_PCS0", "LPUART2_TX", "FTM_CLKIN0",  "-",         "FTM0_FLT3","FXIO0_D4"          },
        {  "ADC0_SE5a",    "PTE17/LLWU_P19", "SPI0_SCK", "LPUART2_RX", "FTM_CLKIN1", "-",  "LPTMR0_ALT3","FXIO0_D5"        },
        {  "ADC0_SE6a",    "PTE18/LLWU_P20", "SPI0_SOUT","LPUART2_CTS_b","I2C0_SDA", "-",  "-",        "FXIO0_D6"          },
        {  "ADC0_SE7a",    "PTE19", "SPI0_SIN",  "LPUART2_RTS_b","I2C0_SCL",    "-",         "CMP3_OUT", "FXIO0_D7"        },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 },
        {  "-",            "-",     "-",         "-",          "-",           "-",         "-",        "-"                 }
    },
};

