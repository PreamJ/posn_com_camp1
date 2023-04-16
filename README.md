# posn_com_camp1 
## สอวน.คอมพิวเตอร์ ค่าย 1 ศูนย์โรงเรียนสามเสนวิทยาลัย
This is the C code I have written during my academic year 2022 while taking the POSN computer class (camp1).

### เริ่มต้นเขียนภาษา C
#### โครงสร้างโปรแกรม

โครงสร้างของโปรแกรมจะประกอบไปด้วย 2 ส่วน ได้แก่
1. Head -> global definitions
2. Body -> local definitions, statement

##### Head
- คำสั่ง #include ใช้เพื่อนำ (ใครที่คุ้นเคยกับ python จะคล้ายๆกับคำสั่ง import) library ต่างๆที่จะใช้เข้ามา
- โดยทั่วไปจะสั่ง 
- #include <stdio.h> เพื่อให้สามารถเรียกใช้งานฟังก์ชั่นพื้นฐานต่างๆ
- นอกจากนี้ ยังมี library ต่างๆให้นำมาใช้ เช่น math.h, string.h เป็นต้น
- โดยไฟล์ที่เรียกใช้ต้องอยู่ใน "" หรือ <>
- นอกจากนี้ในส่วนของ head ยังสามารถประกาศ global variable หรือทำอย่างอื่นได้อีกด้วย

#### Body
body เป็นส่วนของโปรแกรมที่ทำงานตามคำสั่งที่เราใส่เข้าไป 
main ของ body จะถูกประกาศด้วย
'''c
int main(){
  // เมื่อประกาศฟังก์ชั่น int จะ return ค่าเป็นคัวเลข
  return 0;
}
'''
ในภาษา C แต่ละคำสั่งจะจบด้วย ; 
