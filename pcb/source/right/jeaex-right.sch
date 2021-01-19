EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Switch:SW_SPST SW4
U 1 1 5FA316DD
P 4300 6200
F 0 "SW4" H 4300 6300 50  0000 C CNN
F 1 "Fn" H 4300 6150 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.75u_Plate" H 4300 6200 50  0001 C CNN
F 3 "~" H 4300 6200 50  0001 C CNN
	1    4300 6200
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D4
U 1 1 5FA316D7
P 4650 6200
F 0 "D4" H 4700 6100 50  0000 C CNN
F 1 "1N4148W" H 4650 6074 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 4650 6025 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 4650 6200 50  0001 C CNN
	1    4650 6200
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW3
U 1 1 5FA31085
P 4300 5750
F 0 "SW3" H 4300 5893 50  0000 C CNN
F 1 "FR3" H 4300 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.50u_Plate" H 4300 5750 50  0001 C CNN
F 3 "~" H 4300 5750 50  0001 C CNN
	1    4300 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D3
U 1 1 5FA3107F
P 4650 5750
F 0 "D3" H 4650 5600 50  0000 C CNN
F 1 "1N4148W" H 4650 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 4650 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 4650 5750 50  0001 C CNN
	1    4650 5750
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW2
U 1 1 5FA30D03
P 4300 4850
F 0 "SW2" H 4300 4993 50  0000 C CNN
F 1 "FR2" H 4300 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.50u_Plate" H 4300 4850 50  0001 C CNN
F 3 "~" H 4300 4850 50  0001 C CNN
	1    4300 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D2
U 1 1 5FA30CFD
P 4650 4850
F 0 "D2" H 4700 4700 50  0000 C CNN
F 1 "1N4148W" H 4650 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 4650 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 4650 4850 50  0001 C CNN
	1    4650 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW1
U 1 1 5FA2E2BC
P 4300 4350
F 0 "SW1" H 4250 4500 50  0000 C CNN
F 1 "FR1" H 4300 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 4300 4350 50  0001 C CNN
F 3 "~" H 4300 4350 50  0001 C CNN
	1    4300 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D1
U 1 1 5F932C45
P 4650 4350
F 0 "D1" H 4700 4250 50  0000 C CNN
F 1 "1N4148W" H 4650 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 4650 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 4650 4350 50  0001 C CNN
	1    4650 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	4000 4050 4100 4050
Wire Wire Line
	4100 4350 4100 4050
Wire Wire Line
	4800 4350 4800 4850
Connection ~ 4800 4850
Wire Wire Line
	4800 6400 4800 6200
Connection ~ 4800 6200
Text Label 4000 4050 2    50   ~ 0
KEYS_ROW1
Text Label 4000 4550 2    50   ~ 0
KEYS_ROW2
Text Label 4000 5050 2    50   ~ 0
KEYS_ROW3
Text Label 4000 5550 2    50   ~ 0
KEYS_ROW4
Text Label 4000 6000 2    50   ~ 0
KEYS_ROW5
Text Label 4800 6400 2    50   ~ 0
KEYS_COL1
$Comp
L jeaex-right-rescue:Teensy++2.0_(C)-teensy U1
U 1 1 5FBBA9B0
P 2850 2250
F 0 "U1" H 2850 3993 60  0000 C CNN
F 1 "Teensy++2.0_(C)" H 2850 3887 60  0000 C CNN
F 2 "Teensy:Teensy2.0++" H 2850 3781 60  0000 C CNN
F 3 "" H 2950 1400 60  0000 C CNN
	1    2850 2250
	1    0    0    -1  
$EndComp
Text Notes 7650 1350 2    50   ~ 0
4P4C jack\nI2C connection to right half
Text Notes 5950 1550 2    50   ~ 0
OLED Display Connector
$Comp
L Connector:4P4C J1
U 1 1 5FBE189C
P 7250 1600
F 0 "J1" H 6920 1604 50  0000 R CNN
F 1 "4P4C" H 6920 1695 50  0000 R CNN
F 2 "UGL:4P4C_Jack_0955012441" V 7250 1650 50  0001 C CNN
F 3 "~" V 7250 1650 50  0001 C CNN
	1    7250 1600
	-1   0    0    1   
$EndComp
Text Label 1450 2900 2    50   ~ 0
VCC
Wire Wire Line
	1450 3000 1800 3000
Text Label 1800 1100 2    50   ~ 0
SCL
Text Label 1800 1200 2    50   ~ 0
SDA
Text Label 6850 1800 2    50   ~ 0
VCC
Text Label 6850 1700 2    50   ~ 0
GND
Text Label 6850 1600 2    50   ~ 0
SDA
Text Label 6850 1500 2    50   ~ 0
SCL
Text Label 1800 900  2    50   ~ 0
GND
Text Label 3900 3200 0    50   ~ 0
GND
Text Label 3900 2200 0    50   ~ 0
VCC
$Comp
L Switch:SW_SPST SW9
U 1 1 5F946988
P 5150 6200
F 0 "SW9" H 5150 6300 50  0000 C CNN
F 1 "Mod" H 5150 6150 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.75u_Plate" H 5150 6200 50  0001 C CNN
F 3 "~" H 5150 6200 50  0001 C CNN
	1    5150 6200
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D9
U 1 1 5F94698E
P 5500 6200
F 0 "D9" H 5550 6100 50  0000 C CNN
F 1 "1N4148W" H 5500 6074 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 5500 6025 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 5500 6200 50  0001 C CNN
	1    5500 6200
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW7
U 1 1 5F946994
P 5150 5300
F 0 "SW7" H 5150 5443 50  0000 C CNN
F 1 "H" H 5150 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 5150 5300 50  0001 C CNN
F 3 "~" H 5150 5300 50  0001 C CNN
	1    5150 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D7
U 1 1 5F94699A
P 5500 5300
F 0 "D7" H 5500 5150 50  0000 C CNN
F 1 "1N4148W" H 5500 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 5500 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 5500 5300 50  0001 C CNN
	1    5500 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW6
U 1 1 5F9469A0
P 5150 4850
F 0 "SW6" H 5150 4993 50  0000 C CNN
F 1 "Y" H 5150 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 5150 4850 50  0001 C CNN
F 3 "~" H 5150 4850 50  0001 C CNN
	1    5150 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D6
U 1 1 5F9469A6
P 5500 4850
F 0 "D6" H 5550 4700 50  0000 C CNN
F 1 "1N4148W" H 5500 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 5500 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 5500 4850 50  0001 C CNN
	1    5500 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW5
U 1 1 5F9469AC
P 5150 4350
F 0 "SW5" H 5100 4500 50  0000 C CNN
F 1 "6" H 5150 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 5150 4350 50  0001 C CNN
F 3 "~" H 5150 4350 50  0001 C CNN
	1    5150 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D5
U 1 1 5F9469B2
P 5500 4350
F 0 "D5" H 5550 4250 50  0000 C CNN
F 1 "1N4148W" H 5500 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 5500 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 5500 4350 50  0001 C CNN
	1    5500 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	4950 4350 4950 4050
Wire Wire Line
	5650 4350 5650 4850
Wire Wire Line
	5650 5300 5650 4850
Connection ~ 5650 4850
Connection ~ 5650 5300
Wire Wire Line
	5650 6400 5650 6200
Connection ~ 5650 6200
Text Label 5650 6400 2    50   ~ 0
KEYS_COL2
Wire Wire Line
	5650 5300 5650 5750
$Comp
L Switch:SW_SPST SW8
U 1 1 5F947BF9
P 5150 5750
F 0 "SW8" H 5150 5893 50  0000 C CNN
F 1 "N" H 5150 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 5150 5750 50  0001 C CNN
F 3 "~" H 5150 5750 50  0001 C CNN
	1    5150 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D8
U 1 1 5F948131
P 5500 5750
F 0 "D8" H 5500 5600 50  0000 C CNN
F 1 "1N4148W" H 5500 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 5500 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 5500 5750 50  0001 C CNN
	1    5500 5750
	-1   0    0    1   
$EndComp
Connection ~ 5650 5750
Wire Wire Line
	5650 5750 5650 6200
$Comp
L Switch:SW_SPST SW14
U 1 1 5F953037
P 6050 6200
F 0 "SW14" H 6050 6300 50  0000 C CNN
F 1 "SPC" H 6050 6150 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.75u_Plate" H 6050 6200 50  0001 C CNN
F 3 "~" H 6050 6200 50  0001 C CNN
	1    6050 6200
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D14
U 1 1 5F95303D
P 6400 6200
F 0 "D14" H 6450 6100 50  0000 C CNN
F 1 "1N4148W" H 6400 6074 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 6400 6025 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 6400 6200 50  0001 C CNN
	1    6400 6200
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW12
U 1 1 5F953043
P 6050 5300
F 0 "SW12" H 6050 5443 50  0000 C CNN
F 1 "J" H 6050 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6050 5300 50  0001 C CNN
F 3 "~" H 6050 5300 50  0001 C CNN
	1    6050 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D12
U 1 1 5F953049
P 6400 5300
F 0 "D12" H 6400 5150 50  0000 C CNN
F 1 "1N4148W" H 6400 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 6400 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 6400 5300 50  0001 C CNN
	1    6400 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW11
U 1 1 5F95304F
P 6050 4850
F 0 "SW11" H 6050 4993 50  0000 C CNN
F 1 "U" H 6050 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6050 4850 50  0001 C CNN
F 3 "~" H 6050 4850 50  0001 C CNN
	1    6050 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D11
U 1 1 5F953055
P 6400 4850
F 0 "D11" H 6450 4700 50  0000 C CNN
F 1 "1N4148W" H 6400 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 6400 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 6400 4850 50  0001 C CNN
	1    6400 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW10
U 1 1 5F95305B
P 6050 4350
F 0 "SW10" H 6000 4500 50  0000 C CNN
F 1 "7" H 6050 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6050 4350 50  0001 C CNN
F 3 "~" H 6050 4350 50  0001 C CNN
	1    6050 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D10
U 1 1 5F953061
P 6400 4350
F 0 "D10" H 6450 4250 50  0000 C CNN
F 1 "1N4148W" H 6400 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 6400 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 6400 4350 50  0001 C CNN
	1    6400 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	5850 4350 5850 4050
Wire Wire Line
	6550 4350 6550 4850
Wire Wire Line
	6550 5300 6550 4850
Connection ~ 6550 4850
Connection ~ 6550 5300
Wire Wire Line
	6550 6400 6550 6200
Connection ~ 6550 6200
Text Label 6550 6400 2    50   ~ 0
KEYS_COL3
Wire Wire Line
	6550 5300 6550 5750
$Comp
L Switch:SW_SPST SW13
U 1 1 5F953070
P 6050 5750
F 0 "SW13" H 6050 5893 50  0000 C CNN
F 1 "M" H 6050 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6050 5750 50  0001 C CNN
F 3 "~" H 6050 5750 50  0001 C CNN
	1    6050 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D13
U 1 1 5F953076
P 6400 5750
F 0 "D13" H 6400 5600 50  0000 C CNN
F 1 "1N4148W" H 6400 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 6400 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 6400 5750 50  0001 C CNN
	1    6400 5750
	-1   0    0    1   
$EndComp
Connection ~ 6550 5750
Wire Wire Line
	6550 5750 6550 6200
$Comp
L Switch:SW_SPST SW19
U 1 1 5F95490E
P 6950 6200
F 0 "SW19" H 6950 6300 50  0000 C CNN
F 1 "Cmd" H 6950 6150 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.25u_Plate" H 6950 6200 50  0001 C CNN
F 3 "~" H 6950 6200 50  0001 C CNN
	1    6950 6200
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D19
U 1 1 5F954914
P 7300 6200
F 0 "D19" H 7350 6100 50  0000 C CNN
F 1 "1N4148W" H 7300 6074 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 7300 6025 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 7300 6200 50  0001 C CNN
	1    7300 6200
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW17
U 1 1 5F95491A
P 6950 5300
F 0 "SW17" H 6950 5443 50  0000 C CNN
F 1 "K" H 6950 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6950 5300 50  0001 C CNN
F 3 "~" H 6950 5300 50  0001 C CNN
	1    6950 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D17
U 1 1 5F954920
P 7300 5300
F 0 "D17" H 7300 5150 50  0000 C CNN
F 1 "1N4148W" H 7300 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 7300 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 7300 5300 50  0001 C CNN
	1    7300 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW16
U 1 1 5F954926
P 6950 4850
F 0 "SW16" H 6950 4993 50  0000 C CNN
F 1 "I" H 6950 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6950 4850 50  0001 C CNN
F 3 "~" H 6950 4850 50  0001 C CNN
	1    6950 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D16
U 1 1 5F95492C
P 7300 4850
F 0 "D16" H 7350 4700 50  0000 C CNN
F 1 "1N4148W" H 7300 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 7300 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 7300 4850 50  0001 C CNN
	1    7300 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW15
U 1 1 5F954932
P 6950 4350
F 0 "SW15" H 6900 4500 50  0000 C CNN
F 1 "8" H 6950 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6950 4350 50  0001 C CNN
F 3 "~" H 6950 4350 50  0001 C CNN
	1    6950 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D15
U 1 1 5F954938
P 7300 4350
F 0 "D15" H 7350 4250 50  0000 C CNN
F 1 "1N4148W" H 7300 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 7300 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 7300 4350 50  0001 C CNN
	1    7300 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	6750 4350 6750 4050
Wire Wire Line
	7450 4350 7450 4850
Wire Wire Line
	7450 5300 7450 4850
Connection ~ 7450 4850
Connection ~ 7450 5300
Wire Wire Line
	7450 6400 7450 6200
Connection ~ 7450 6200
Text Label 7450 6400 2    50   ~ 0
KEYS_COL4
Wire Wire Line
	7450 5300 7450 5750
$Comp
L Switch:SW_SPST SW18
U 1 1 5F954947
P 6950 5750
F 0 "SW18" H 6950 5893 50  0000 C CNN
F 1 "<" H 6950 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 6950 5750 50  0001 C CNN
F 3 "~" H 6950 5750 50  0001 C CNN
	1    6950 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D18
U 1 1 5F95494D
P 7300 5750
F 0 "D18" H 7300 5600 50  0000 C CNN
F 1 "1N4148W" H 7300 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 7300 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 7300 5750 50  0001 C CNN
	1    7300 5750
	-1   0    0    1   
$EndComp
Connection ~ 7450 5750
Wire Wire Line
	7450 5750 7450 6200
$Comp
L Switch:SW_SPST SW24
U 1 1 5F956554
P 7850 6200
F 0 "SW24" H 7850 6300 50  0000 C CNN
F 1 "Alt" H 7850 6150 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.25u_Plate" H 7850 6200 50  0001 C CNN
F 3 "~" H 7850 6200 50  0001 C CNN
	1    7850 6200
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D24
U 1 1 5F95655A
P 8200 6200
F 0 "D24" H 8250 6100 50  0000 C CNN
F 1 "1N4148W" H 8200 6074 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 8200 6025 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 8200 6200 50  0001 C CNN
	1    8200 6200
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW22
U 1 1 5F956560
P 7850 5300
F 0 "SW22" H 7850 5443 50  0000 C CNN
F 1 "L" H 7850 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 7850 5300 50  0001 C CNN
F 3 "~" H 7850 5300 50  0001 C CNN
	1    7850 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D22
U 1 1 5F956566
P 8200 5300
F 0 "D22" H 8200 5150 50  0000 C CNN
F 1 "1N4148W" H 8200 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 8200 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 8200 5300 50  0001 C CNN
	1    8200 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW21
U 1 1 5F95656C
P 7850 4850
F 0 "SW21" H 7850 4993 50  0000 C CNN
F 1 "O" H 7850 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 7850 4850 50  0001 C CNN
F 3 "~" H 7850 4850 50  0001 C CNN
	1    7850 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D21
U 1 1 5F956572
P 8200 4850
F 0 "D21" H 8250 4700 50  0000 C CNN
F 1 "1N4148W" H 8200 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 8200 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 8200 4850 50  0001 C CNN
	1    8200 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW20
U 1 1 5F956578
P 7850 4350
F 0 "SW20" H 7800 4500 50  0000 C CNN
F 1 "9" H 7850 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 7850 4350 50  0001 C CNN
F 3 "~" H 7850 4350 50  0001 C CNN
	1    7850 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D20
U 1 1 5F95657E
P 8200 4350
F 0 "D20" H 8250 4250 50  0000 C CNN
F 1 "1N4148W" H 8200 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 8200 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 8200 4350 50  0001 C CNN
	1    8200 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	7650 4350 7650 4050
Wire Wire Line
	8350 4350 8350 4850
Wire Wire Line
	8350 5300 8350 4850
Connection ~ 8350 4850
Connection ~ 8350 5300
Wire Wire Line
	8350 6400 8350 6200
Connection ~ 8350 6200
Text Label 8350 6400 2    50   ~ 0
KEYS_COL5
Wire Wire Line
	8350 5300 8350 5750
$Comp
L Switch:SW_SPST SW23
U 1 1 5F95658D
P 7850 5750
F 0 "SW23" H 7850 5893 50  0000 C CNN
F 1 ">" H 7850 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 7850 5750 50  0001 C CNN
F 3 "~" H 7850 5750 50  0001 C CNN
	1    7850 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D23
U 1 1 5F956593
P 8200 5750
F 0 "D23" H 8200 5600 50  0000 C CNN
F 1 "1N4148W" H 8200 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 8200 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 8200 5750 50  0001 C CNN
	1    8200 5750
	-1   0    0    1   
$EndComp
Connection ~ 8350 5750
Wire Wire Line
	8350 5750 8350 6200
$Comp
L Switch:SW_SPST SW29
U 1 1 5F95A7D1
P 8800 6200
F 0 "SW29" H 8800 6300 50  0000 C CNN
F 1 "Ctrl" H 8800 6150 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_2.25u_Plate" H 8800 6200 50  0001 C CNN
F 3 "~" H 8800 6200 50  0001 C CNN
	1    8800 6200
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D29
U 1 1 5F95A7D7
P 9150 6200
F 0 "D29" H 9200 6100 50  0000 C CNN
F 1 "1N4148W" H 9150 6074 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 9150 6025 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 9150 6200 50  0001 C CNN
	1    9150 6200
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW27
U 1 1 5F95A7DD
P 8800 5300
F 0 "SW27" H 8800 5443 50  0000 C CNN
F 1 "Ж" H 8800 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 8800 5300 50  0001 C CNN
F 3 "~" H 8800 5300 50  0001 C CNN
	1    8800 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D27
U 1 1 5F95A7E3
P 9150 5300
F 0 "D27" H 9150 5150 50  0000 C CNN
F 1 "1N4148W" H 9150 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 9150 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 9150 5300 50  0001 C CNN
	1    9150 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW26
U 1 1 5F95A7E9
P 8800 4850
F 0 "SW26" H 8800 4993 50  0000 C CNN
F 1 "P" H 8800 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 8800 4850 50  0001 C CNN
F 3 "~" H 8800 4850 50  0001 C CNN
	1    8800 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D26
U 1 1 5F95A7EF
P 9150 4850
F 0 "D26" H 9200 4700 50  0000 C CNN
F 1 "1N4148W" H 9150 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 9150 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 9150 4850 50  0001 C CNN
	1    9150 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW25
U 1 1 5F95A7F5
P 8800 4350
F 0 "SW25" H 8750 4500 50  0000 C CNN
F 1 "0" H 8800 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 8800 4350 50  0001 C CNN
F 3 "~" H 8800 4350 50  0001 C CNN
	1    8800 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D25
U 1 1 5F95A7FB
P 9150 4350
F 0 "D25" H 9200 4250 50  0000 C CNN
F 1 "1N4148W" H 9150 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 9150 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 9150 4350 50  0001 C CNN
	1    9150 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	8600 4350 8600 4050
Wire Wire Line
	9300 4350 9300 4850
Wire Wire Line
	9300 5300 9300 4850
Connection ~ 9300 4850
Connection ~ 9300 5300
Wire Wire Line
	9300 6400 9300 6200
Connection ~ 9300 6200
Text Label 9300 6400 2    50   ~ 0
KEYS_COL6
Wire Wire Line
	9300 5300 9300 5750
$Comp
L Switch:SW_SPST SW28
U 1 1 5F95A80A
P 8800 5750
F 0 "SW28" H 8800 5893 50  0000 C CNN
F 1 "Ю" H 8800 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 8800 5750 50  0001 C CNN
F 3 "~" H 8800 5750 50  0001 C CNN
	1    8800 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D28
U 1 1 5F95A810
P 9150 5750
F 0 "D28" H 9150 5600 50  0000 C CNN
F 1 "1N4148W" H 9150 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 9150 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 9150 5750 50  0001 C CNN
	1    9150 5750
	-1   0    0    1   
$EndComp
Connection ~ 9300 5750
Wire Wire Line
	9300 5750 9300 6200
$Comp
L Switch:SW_SPST SW32
U 1 1 5F95DA14
P 9650 5300
F 0 "SW32" H 9650 5443 50  0000 C CNN
F 1 "Э" H 9650 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 9650 5300 50  0001 C CNN
F 3 "~" H 9650 5300 50  0001 C CNN
	1    9650 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D32
U 1 1 5F95DA1A
P 10000 5300
F 0 "D32" H 10000 5150 50  0000 C CNN
F 1 "1N4148W" H 10000 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10000 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 10000 5300 50  0001 C CNN
	1    10000 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW31
U 1 1 5F95DA20
P 9650 4850
F 0 "SW31" H 9650 4993 50  0000 C CNN
F 1 "Б" H 9650 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 9650 4850 50  0001 C CNN
F 3 "~" H 9650 4850 50  0001 C CNN
	1    9650 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D31
U 1 1 5F95DA26
P 10000 4850
F 0 "D31" H 10050 4700 50  0000 C CNN
F 1 "1N4148W" H 10000 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10000 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 10000 4850 50  0001 C CNN
	1    10000 4850
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW30
U 1 1 5F95DA2C
P 9650 4350
F 0 "SW30" H 9600 4500 50  0000 C CNN
F 1 "FR4" H 9650 4300 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_2.00u_Plate" H 9650 4350 50  0001 C CNN
F 3 "~" H 9650 4350 50  0001 C CNN
	1    9650 4350
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D30
U 1 1 5F95DA32
P 10000 4350
F 0 "D30" H 10050 4250 50  0000 C CNN
F 1 "1N4148W" H 10000 4224 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10000 4175 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 10000 4350 50  0001 C CNN
	1    10000 4350
	-1   0    0    1   
$EndComp
Wire Wire Line
	9450 4350 9450 4050
Wire Wire Line
	10150 4350 10150 4850
Wire Wire Line
	10150 5300 10150 4850
Connection ~ 10150 4850
Connection ~ 10150 5300
Text Label 10150 6400 2    50   ~ 0
KEYS_COL7
Wire Wire Line
	10150 5300 10150 5750
$Comp
L Switch:SW_SPST SW33
U 1 1 5F95DA41
P 9650 5750
F 0 "SW33" H 9650 5893 50  0000 C CNN
F 1 "Shift" H 9650 5700 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_2.75u_Plate" H 9650 5750 50  0001 C CNN
F 3 "~" H 9650 5750 50  0001 C CNN
	1    9650 5750
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D33
U 1 1 5F95DA47
P 10000 5750
F 0 "D33" H 10000 5600 50  0000 C CNN
F 1 "1N4148W" H 10000 5624 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10000 5575 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 10000 5750 50  0001 C CNN
	1    10000 5750
	-1   0    0    1   
$EndComp
Connection ~ 10150 5750
$Comp
L Switch:SW_SPST SW35
U 1 1 5F9622F9
P 10550 5300
F 0 "SW35" H 10550 5443 50  0000 C CNN
F 1 "RTN" H 10550 5250 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_2.25u_Plate" H 10550 5300 50  0001 C CNN
F 3 "~" H 10550 5300 50  0001 C CNN
	1    10550 5300
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D35
U 1 1 5F9622FF
P 10900 5300
F 0 "D35" H 10900 5150 50  0000 C CNN
F 1 "1N4148W" H 10900 5174 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10900 5125 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 10900 5300 50  0001 C CNN
	1    10900 5300
	-1   0    0    1   
$EndComp
$Comp
L Switch:SW_SPST SW34
U 1 1 5F962305
P 10550 4850
F 0 "SW34" H 10550 4993 50  0000 C CNN
F 1 "Х" H 10550 4800 50  0000 C CNN
F 2 "CherryMX:SW_Cherry_MX_1.00u_Plate" H 10550 4850 50  0001 C CNN
F 3 "~" H 10550 4850 50  0001 C CNN
	1    10550 4850
	1    0    0    -1  
$EndComp
$Comp
L Diode:1N4148W D34
U 1 1 5F96230B
P 10900 4850
F 0 "D34" H 10950 4700 50  0000 C CNN
F 1 "1N4148W" H 10900 4724 50  0001 C CNN
F 2 "Diode_SMD:D_SOD-123" H 10900 4675 50  0001 C CNN
F 3 "https://www.vishay.com/docs/85748/1n4148w.pdf" H 10900 4850 50  0001 C CNN
	1    10900 4850
	-1   0    0    1   
$EndComp
Wire Wire Line
	11050 5300 11050 4850
Connection ~ 11050 5300
Text Label 11050 6400 2    50   ~ 0
KEYS_COL8
Wire Wire Line
	4100 4050 4950 4050
Connection ~ 4100 4050
Wire Wire Line
	5850 4050 4950 4050
Connection ~ 4950 4050
Wire Wire Line
	5850 4050 6750 4050
Connection ~ 5850 4050
Wire Wire Line
	6750 4050 7650 4050
Connection ~ 6750 4050
Wire Wire Line
	7650 4050 8600 4050
Connection ~ 7650 4050
Wire Wire Line
	8600 4050 9450 4050
Connection ~ 8600 4050
Wire Wire Line
	4000 4550 4100 4550
Wire Wire Line
	4100 4550 4100 4850
Wire Wire Line
	4100 4550 4950 4550
Wire Wire Line
	4950 4550 4950 4850
Connection ~ 4100 4550
Wire Wire Line
	4950 4550 5850 4550
Wire Wire Line
	5850 4550 5850 4850
Connection ~ 4950 4550
Wire Wire Line
	5850 4550 6750 4550
Wire Wire Line
	6750 4550 6750 4850
Connection ~ 5850 4550
Wire Wire Line
	6750 4550 7650 4550
Wire Wire Line
	7650 4550 7650 4850
Connection ~ 6750 4550
Wire Wire Line
	7650 4550 8600 4550
Wire Wire Line
	8600 4550 8600 4850
Connection ~ 7650 4550
Wire Wire Line
	8600 4550 9450 4550
Wire Wire Line
	9450 4550 9450 4850
Connection ~ 8600 4550
Wire Wire Line
	9450 4550 10350 4550
Wire Wire Line
	10350 4550 10350 4850
Connection ~ 9450 4550
Wire Wire Line
	4950 5050 4950 5300
Wire Wire Line
	4950 5050 5850 5050
Wire Wire Line
	5850 5050 5850 5300
Connection ~ 4950 5050
Wire Wire Line
	5850 5050 6750 5050
Wire Wire Line
	6750 5050 6750 5300
Connection ~ 5850 5050
Wire Wire Line
	6750 5050 7650 5050
Wire Wire Line
	7650 5050 7650 5300
Connection ~ 6750 5050
Wire Wire Line
	7650 5050 8600 5050
Wire Wire Line
	8600 5050 8600 5300
Connection ~ 7650 5050
Wire Wire Line
	8600 5050 9450 5050
Wire Wire Line
	9450 5050 9450 5300
Connection ~ 8600 5050
Wire Wire Line
	9450 5050 10350 5050
Wire Wire Line
	10350 5050 10350 5300
Connection ~ 9450 5050
Wire Wire Line
	4000 5550 4100 5550
Wire Wire Line
	4950 5550 4950 5750
Wire Wire Line
	4950 5550 5850 5550
Wire Wire Line
	5850 5550 5850 5750
Connection ~ 4950 5550
Wire Wire Line
	5850 5550 6750 5550
Wire Wire Line
	6750 5550 6750 5750
Connection ~ 5850 5550
Wire Wire Line
	6750 5550 7650 5550
Wire Wire Line
	7650 5550 7650 5750
Connection ~ 6750 5550
Wire Wire Line
	7650 5550 8600 5550
Wire Wire Line
	8600 5550 8600 5750
Connection ~ 7650 5550
Wire Wire Line
	8600 5550 9450 5550
Wire Wire Line
	9450 5550 9450 5750
Connection ~ 8600 5550
Wire Wire Line
	4000 6000 4100 6000
Wire Wire Line
	4100 6000 4100 6200
Wire Wire Line
	4100 6000 4950 6000
Wire Wire Line
	4950 6000 4950 6200
Connection ~ 4100 6000
Wire Wire Line
	4950 6000 5850 6000
Wire Wire Line
	5850 6000 5850 6200
Connection ~ 4950 6000
Wire Wire Line
	5850 6000 6750 6000
Wire Wire Line
	6750 6000 6750 6200
Connection ~ 5850 6000
Wire Wire Line
	6750 6000 7650 6000
Wire Wire Line
	7650 6000 7650 6200
Connection ~ 6750 6000
Wire Wire Line
	7650 6000 8600 6000
Wire Wire Line
	8600 6000 8600 6200
Connection ~ 7650 6000
Text Label 1450 3000 2    50   ~ 0
GND
Wire Wire Line
	10150 5750 10150 6400
Wire Wire Line
	11050 5300 11050 6400
Text Label 3900 3600 0    50   ~ 0
KEYS_ROW1
Text Label 3900 3400 0    50   ~ 0
KEYS_ROW2
Text Label 1800 3500 2    50   ~ 0
KEYS_ROW5
Text Label 3900 3500 0    50   ~ 0
KEYS_ROW4
Text Label 3900 1700 0    50   ~ 0
KEYS_ROW3
Text Label 3900 2100 0    50   ~ 0
KEYS_COL8
Text Label 1800 2800 2    50   ~ 0
KEYS_COL1
Text Label 1800 2500 2    50   ~ 0
KEYS_COL2
Text Label 3900 1800 0    50   ~ 0
KEYS_COL3
Text Label 1800 3200 2    50   ~ 0
KEYS_COL4
Text Label 1800 3300 2    50   ~ 0
KEYS_COL5
Text Label 1800 3400 2    50   ~ 0
KEYS_COL6
Text Label 1800 3600 2    50   ~ 0
KEYS_COL7
Connection ~ 4800 5750
Wire Wire Line
	4800 5750 4800 6200
Wire Wire Line
	4000 5050 4950 5050
Wire Wire Line
	4100 5750 4100 5550
Wire Wire Line
	4800 4850 4800 5750
Connection ~ 4100 5550
Wire Wire Line
	4100 5550 4950 5550
$Comp
L Device:R_Small R1
U 1 1 5FBE3711
P 800 3050
F 0 "R1" H 859 3096 50  0000 L CNN
F 1 "30K" H 859 3005 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.30x1.75mm_HandSolder" H 800 3050 50  0001 C CNN
F 3 "~" H 800 3050 50  0001 C CNN
	1    800  3050
	1    0    0    -1  
$EndComp
Wire Wire Line
	1800 3100 1050 3100
Wire Wire Line
	1050 3100 1050 3150
Wire Wire Line
	1050 3150 800  3150
Wire Wire Line
	800  2950 800  2900
Wire Wire Line
	800  2900 1800 2900
$Comp
L Connector:Conn_01x04_Male J2
U 1 1 5FD010C2
P 5200 1250
F 0 "J2" H 5308 1531 50  0000 C CNN
F 1 "Conn_01x04_Male" H 5308 1440 50  0000 C CNN
F 2 "Connector_PinHeader_2.54mm:PinHeader_1x04_P2.54mm_Vertical" H 5200 1250 50  0001 C CNN
F 3 "~" H 5200 1250 50  0001 C CNN
	1    5200 1250
	1    0    0    -1  
$EndComp
Text Label 5400 1150 0    50   ~ 0
VCC
Text Label 5400 1350 0    50   ~ 0
SCL
Text Label 5400 1450 0    50   ~ 0
SDA
Text Label 5400 1250 0    50   ~ 0
GND
Text Label 3900 2800 0    50   ~ 0
GND
$Comp
L Device:R R2
U 1 1 5FFA3F3E
P 800 1150
F 0 "R2" H 870 1196 50  0000 L CNN
F 1 "3K" H 870 1105 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.30x1.75mm_HandSolder" V 730 1150 50  0001 C CNN
F 3 "~" H 800 1150 50  0001 C CNN
	1    800  1150
	1    0    0    -1  
$EndComp
$Comp
L Device:R R3
U 1 1 5FFA5BF7
P 1050 1150
F 0 "R3" H 1120 1196 50  0000 L CNN
F 1 "3K" H 1120 1105 50  0000 L CNN
F 2 "Resistor_SMD:R_1206_3216Metric_Pad1.30x1.75mm_HandSolder" V 980 1150 50  0001 C CNN
F 3 "~" H 1050 1150 50  0001 C CNN
	1    1050 1150
	1    0    0    -1  
$EndComp
Wire Wire Line
	800  1000 1050 1000
Text Label 950  1000 1    50   ~ 0
VCC
Text Label 800  1300 3    50   ~ 0
SDA
Text Label 1050 1300 3    50   ~ 0
SCL
$EndSCHEMATC
