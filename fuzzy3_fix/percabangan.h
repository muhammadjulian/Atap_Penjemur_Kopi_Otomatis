void percabangan() {
 
  bool r1 = fuzzy->isFiredRule(1);
  bool r2 = fuzzy->isFiredRule(2);
  bool r3 = fuzzy->isFiredRule(3);
  bool r4 = fuzzy->isFiredRule(4);
  bool r5 = fuzzy->isFiredRule(5);
  bool r6 = fuzzy->isFiredRule(6);
  bool r7 = fuzzy->isFiredRule(7);
  bool r8 = fuzzy->isFiredRule(8);
  bool r9 = fuzzy->isFiredRule(9);
  bool r10 = fuzzy->isFiredRule(10);
  bool r11 = fuzzy->isFiredRule(11);
  bool r12 = fuzzy->isFiredRule(12);
  bool r13 = fuzzy->isFiredRule(13);
  bool r14 = fuzzy->isFiredRule(14);
  bool r15 = fuzzy->isFiredRule(15);
  bool r16 = fuzzy->isFiredRule(16);
  bool r17 = fuzzy->isFiredRule(17);
  bool r18 = fuzzy->isFiredRule(18);
  bool r19 = fuzzy->isFiredRule(19);
  bool r20 = fuzzy->isFiredRule(20);
  bool r21 = fuzzy->isFiredRule(21);
  bool r22 = fuzzy->isFiredRule(22);
  bool r23 = fuzzy->isFiredRule(23);
  bool r24 = fuzzy->isFiredRule(24);
  bool r25 = fuzzy->isFiredRule(25);
  bool r26 = fuzzy->isFiredRule(26);
  bool r27 = fuzzy->isFiredRule(27);

float output1 = fuzzy->defuzzify(1);
  
//percabangann fuzzy
  if (r1 == true ){
  
       Serial.println("***********Rule Fuzzy 1**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();

      if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);
       }

    
}
  else if (r2 == true ){
       Serial.println("***********Rule Fuzzy 2**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();
      
      if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
    
}
  else if (r3 == true ){
       Serial.println("***********Rule Fuzzy 3**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
    
}
  else if (r4 == true ){
       Serial.println("***********Rule Fuzzy 4**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();
       
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);
       }
    
}
  else if (r5 == true ){
       Serial.println("***********Rule Fuzzy 5**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r6 == true ){
       Serial.println("***********Rule Fuzzy 6**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r7 == true ){
       Serial.println("***********Rule Fuzzy 7**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();

       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);
       }
    
}
  else if (r8 == true ){
       Serial.println("***********Rule Fuzzy 8**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
        
}  else if (r9 == true ){
       Serial.println("***********Rule Fuzzy 9**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r10 == true ){
       Serial.println("***********Rule Fuzzy 10**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();
       
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000); 
       }   
}
  else if (r11 == true ){
       Serial.println("***********Rule Fuzzy 11**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r12 == true ){
       Serial.println("***********Rule Fuzzy 12**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r13 == true ){
       Serial.println("***********Rule Fuzzy 13**********");
       Serial.println("TUTUP CEPAT");

           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
        
        //Atap TUTUP
       Serial.println();
           
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);
       }
    
}
  else if (r14 == true ){
       Serial.println("***********Rule Fuzzy 14**********");
       Serial.println("BUKA NORMAL");
        //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
       Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
    
}
  else if (r15 == true ){
       Serial.println("***********Rule Fuzzy 15**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

             if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
  }
}
  else if (r16 == true ){
       Serial.println("***********Rule Fuzzy 16**********");
       Serial.println("TUTUP CEPAT");
        //Atap Tutup
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();
    
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);}
}
  else if (r17 == true ){
       Serial.println("***********Rule Fuzzy 17**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r18 == true ){
       Serial.println("***********Rule Fuzzy 18**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
    
}  else if (r19 == true ){
       Serial.println("***********Rule Fuzzy 19**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();
    
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);  
       }  
} 
else if (r20 == true ){
       Serial.println("***********Rule Fuzzy 20**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

      if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
      }
    
}
  else if (r21 == true ){
       Serial.println("***********Rule Fuzzy 21**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
} else if (r22 == true ){
       Serial.println("***********Rule Fuzzy 22**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();
    
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);
       }
}
else if (r23== true ){
       Serial.println("***********Rule Fuzzy 23**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();
       
       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r24 == true ){
       Serial.println("***********Rule Fuzzy 24**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();
     
      if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
      }
   
}
 else if (r25 == true ){
       Serial.println("***********Rule Fuzzy 25**********");
       Serial.println("TUTUP CEPAT");
        //Atap TUTUP 
           // ATAP ATAS BIRU OUT 3, PUTIH OUT 4
        digitalWrite(motor2pin2, HIGH);// Nutup
        digitalWrite(motor2pin1, LOW);//Nutup
        analogWrite(en2, output1);

            // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, HIGH);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        analogWrite(en1, output1);
       Serial.println();
      
       if(digitalRead(limit3)==HIGH||digitalRead(limit4)==HIGH){
       digitalWrite(motor2pin2, LOW);// Nutup
       digitalWrite(motor2pin1, LOW);//Nutup
  
              // ATAP ATAS BIRU OUT 1, PUTIH OUT 2
        digitalWrite(motor1pin2, LOW);// Nutup
        digitalWrite(motor1pin1, LOW);//Nutup
        delay(1000);  
       }
}
  else if (r26 == true ){
       Serial.println("***********Rule Fuzzy 26**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();

       if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
       }
}
  else if (r27 == true ){
       Serial.println("***********Rule Fuzzy 27**********");
       Serial.println("BUKA NORMAL");
    //Atap BUKA
        digitalWrite(motor2pin2, LOW);//Buka
        digitalWrite(motor2pin1, HIGH);//Buka
        analogWrite(en2, output1);

        digitalWrite(motor1pin2, LOW);//Buka
        digitalWrite(motor1pin1, HIGH);//Buka
        analogWrite(en1, output1);
      Serial.println();
      
      if(digitalRead(limit1)==HIGH||digitalRead(limit2)==HIGH){
       digitalWrite(motor2pin2, LOW);
       digitalWrite(motor2pin1, LOW);

        digitalWrite(motor1pin2, LOW);
        digitalWrite(motor1pin1, LOW);
        delay(1000);
}




    

}
  }
