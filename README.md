# posn_com_camp1 
## สอวน.คอมพิวเตอร์ ค่าย 1 ศูนย์โรงเรียนสามเสนวิทยาลัย
This is the C code I have written during my academic year 2022 while taking the POSN computer class (camp1).

### เริ่มต้นเขียนภาษา C
### โครงสร้างโปรแกรม

โครงสร้างของโปรแกรมจะประกอบไปด้วย 2 ส่วน ได้แก่
1. Head -> global definitions
2. Body -> local definitions, statement
---
#### Head
- คำสั่ง #include ใช้เพื่อนำ (ใครที่คุ้นเคยกับ python จะคล้ายๆกับคำสั่ง import) library ต่างๆที่จะใช้เข้ามา
- โดยทั่วไปจะสั่ง 
- #include <stdio.h> เพื่อให้สามารถเรียกใช้งานฟังก์ชั่นพื้นฐานต่างๆ
- นอกจากนี้ ยังมี library ต่างๆให้นำมาใช้ เช่น math.h, string.h เป็นต้น
- สามารถศึกษา library อื่นๆเพิ่มเติมได้จาก [library](https://cplusplus.com/)
- โดยไฟล์ที่เรียกใช้ต้องอยู่ใน "" หรือ <>
- นอกจากนี้ในส่วนของ head ยังสามารถประกาศ global variable หรือทำอย่างอื่นได้อีกด้วย
---
### Body
body เป็นส่วนของโปรแกรมที่ทำงานตามคำสั่งที่เราใส่เข้าไป 
main ของ body จะถูกประกาศด้วย
```c
int main(){

  return 0;
}
```
ในภาษา C แต่ละคำสั่งจะจบด้วย ; 

### คำสั่งพื้นฐาน จาก stdio.h
#### คำสั่งแสดงผล
```c
printf("control string", variable,...);
```
control string ประกอบด้วย 
1. ข้อความอธิบาย ex. "this is c program"
2. %format ex. %d (integer), %c (character), %f (float)
3. escape sequence ex. \n (new line), \t (tab)
comment ในภาษา C จะมี 2 ประเภท คือ
   single line comment ใช้เครื่องหมาย //
   multiple line comment ใช้เครื่องหมาย /* */
---
#### data type and variable
- ตัวแปร เป็นชื่อของหน่วยความจำที่ตำแหน่งต่างๆ สามารถกำหนดได้โดยผู้เขียนตัวแปร สามารถใช้ในการเก็บข้อมูลต่างๆได้
- หลักการคือ เราต้องประกาศชนิดของตัวแปรก่อนเรียกใช้
- แต่ในภาษา C จำเป็นต้องระบุประเภทของข้อมูลที่ต้องการเก็บ เนื่องจากข้อมูลแต่ละประเภทนั้นมีขนาดไม่เท่ากัน เช่น
    - ข้อมูลประเภท จำนวนเต็ม ประกาศตัวแปร int  ขนาด 4 byte 
    - ข้อมูลประเภท ตัวอักขระ  ประกาศตัวแปร char ขนาด 1 byte
    - นอกจากนี้ยังมีตัวแปรประเภทอื่นอีกมากมาย เช่น unsigned int, long int, 
    - ตัวแปรสามารถกำหนดค่าได้โดยใช้เครื่องหมาย = (= ในนี้จะมีหน้าที่เป็น assignment operator)
    - มีรูปแบบคือ variable = ค่าที่ต้องการตั้ง
    - ตัวอย่าง
```c
int a, b=2;
char s;
a = 1;
s = 'c'
b = a // b=1, a=1
```
- ข้อความชนิด string คือ ตัวแปรชนิดอักขระ (char) หลายๆตัวมาต่อกัน มีรูปแบบคำสั่ง
```c
char name[n] = "str"
// name คือ ชื่อตัวแปร
// n    คือ ขนาดของข้อความ
// str  คือ ข้อความที่กำหนดค่าให้กับตัวแปร
```
---
#### นิพจน์และตัวดำเนินการ
 เราเชื่อว่าทุกคนคงจะเคยรู้กันมาบ้าง เรื่องตัวดำเนินการทางคณิตศาสตร์ ดังนั้นเราจะขอข้ามส่วนนั้นไป  แต่อยากจะขอเตือนทุกคนไว้ว่า ถ้าตัวแปรที่นำมาดำเนินการกันไม่ใช่ตัวแปรชนิดเดียวกัน ภาษานี้จะเปลี่ยนให้เป็นประเภทเดียวกันก่อนคำนวน เช่น 7/2 จะได้ค่าเป็น 3 ถ้าอยากได้ 3.5 ต้องใช้ตัวแปร float น้าาา
 
