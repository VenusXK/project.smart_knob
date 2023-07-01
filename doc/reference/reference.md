
- [整体原理图](#整体原理图)
- [电机](#电机)
- [电子元件](#电子元件)
    - [单片机](#单片机)
    - [电机](#电机-1)
    - [传感器](#传感器)
    - [发光管](#发光管)
    - [其他](#其他)
- [电路绘制](#电路绘制)


# 整体原理图

- 硬件结构图

    <img src="./structure.gif" width=200>

- 电路图

    <img src="./full_screen.png" width=200>

# 电机

- BLDC电机

    [瑞萨电子 > 支持和设计 > arrow_right > Engineer School arrow_right > 何谓BLDC电机](https://www.renesas.cn/cn/zh/support/engineer-school/brushless-dc-motor-01-overview?__utma=65695400.793764067.1623331144.1623331591.1623331591.1&__utmb=65695400.0.10.1623331591&__utmc=65695400&__utmx=-&__utmz=65695400.1623331591.1.1.utmcsr=(direct)%7Cutmccn=(direct)%7Cutmcmd=(none)&__utmv=-&__utmk=188466671?__utma=65695400.793764067.1623331144.1623331591.1623331591.1&__utmb=65695400.0.10.1623331591&__utmc=65695400&__utmx=-&__utmz=65695400.1623331591.1.1.utmcsr=(direct)%7Cutmccn=(direct)%7Cutmcmd=(none)&__utmv=-&__utmk=188466671)


    <img src="./bldc_motor.gif" width=200>

- BLDC电机控制

     [瑞萨电子 > 支持和设计 > arrow_right > Engineer School arrow_right > BLDC电机的控制](https://www.renesas.cn/cn/zh/support/engineer-school/brushless-dc-motor-02-inverter-pmw)

    <img src="./bldc_motor_control.gif" width=300>


- BLDC电机正弦波控制

    <img src="./bldc_motor_sin.gif" width=120>


# 电子元件

### 单片机

- STC89C51RC

### 电机

- 无感电机 IM4018H

    <img src="./Motor_IM4018H_size.jpg" width=200>

- 电机驱动器 TMC6300
 
     <img src="./TMC6300.png" width=200>

### 传感器

- 霍尔传感器 MT6701

     <img src="./MT6701.png" width=200>


     <img src="./MT6701(1).png" width=200>


- 压力传感器 HX711 + 应变片BF350-3AA

     <img src="./HX711.png" width=200>

     <img src="./BF350-3AA_Strain_Gauges.png" width=200>


- 亮度传感器 VEML7700

     <img src="./VEML7700.png" width=200>


### 发光管

- SK6812SID * 8

     <img src="./SK6812SID.png" width=200>

### 其他

- USB转串口 `CH340`
- 稳压器 `AP2114HA-3.3`

# 电路绘制

