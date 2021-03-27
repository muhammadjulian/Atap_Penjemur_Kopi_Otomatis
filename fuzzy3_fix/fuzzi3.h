void fuzzi3 () {

   //FUZZY RULE1

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxRK1 = new FuzzyRuleAntecedent();
  DxRK1->joinWithAND(D, RK);

  FuzzyRuleAntecedent *DxRKxRT1 = new FuzzyRuleAntecedent();
  DxRKxRT1->joinWithAND(DxRK1, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat1 = new FuzzyRuleConsequent();
  thenAtapTutupCepat1->addOutput(Cepat);

  FuzzyRule *fuzzyRule1 = new FuzzyRule(1, DxRKxRT1, thenAtapTutupCepat1);
  fuzzy->addFuzzyRule(fuzzyRule1);

   //FUZZY RULE2

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxRK2 = new FuzzyRuleAntecedent();
  DxRK2->joinWithAND(D, RK);

  FuzzyRuleAntecedent *DxRKxS2 = new FuzzyRuleAntecedent();
  DxRKxS2->joinWithAND(DxRK2, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal2 = new FuzzyRuleConsequent();
  thenAtapBukaNormal2->addOutput(Normal);

  FuzzyRule *fuzzyRule2 = new FuzzyRule(2, DxRKxS2, thenAtapBukaNormal2);
  fuzzy->addFuzzyRule(fuzzyRule2);


   //FUZZY RULE3

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxRK3 = new FuzzyRuleAntecedent();
  DxRK3->joinWithAND(D, RK);

  FuzzyRuleAntecedent *DxRKxTi3 = new FuzzyRuleAntecedent();
  DxRKxTi3->joinWithAND(DxRK3, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal3 = new FuzzyRuleConsequent();
  thenAtapBukaNormal3->addOutput(Normal);

  FuzzyRule *fuzzyRule3 = new FuzzyRule(3, DxRKxTi3, thenAtapBukaNormal3);
  fuzzy->addFuzzyRule(fuzzyRule3);

   //FUZZY RULE4
  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxSe4 = new FuzzyRuleAntecedent();
  DxSe4->joinWithAND(D, Se);

  FuzzyRuleAntecedent *DxSexRT4 = new FuzzyRuleAntecedent();
  DxSexRT4->joinWithAND(DxSe4, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat4 = new FuzzyRuleConsequent();
  thenAtapTutupCepat4->addOutput(Cepat);

  FuzzyRule *fuzzyRule4 = new FuzzyRule(4, DxSexRT4, thenAtapTutupCepat4);
  fuzzy->addFuzzyRule(fuzzyRule4);

   //FUZZY RULE5

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxSe5 = new FuzzyRuleAntecedent();
  DxSe5->joinWithAND(D, Se);

  FuzzyRuleAntecedent *DxSexS5 = new FuzzyRuleAntecedent();
  DxSexS5->joinWithAND(DxSe5, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal5 = new FuzzyRuleConsequent();
  thenAtapBukaNormal5->addOutput(Normal);

  FuzzyRule *fuzzyRule5 = new FuzzyRule(5, DxSexS5, thenAtapBukaNormal5);
  fuzzy->addFuzzyRule(fuzzyRule5);


   //FUZZY RULE6

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxSe6 = new FuzzyRuleAntecedent();
  DxSe6->joinWithAND(D, Se);

  FuzzyRuleAntecedent *DxSexTi6 = new FuzzyRuleAntecedent();
  DxSexTi6->joinWithAND(DxSe6, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal6 = new FuzzyRuleConsequent();
  thenAtapBukaNormal6->addOutput(Normal);

  FuzzyRule *fuzzyRule6 = new FuzzyRule(6, DxSexTi6, thenAtapBukaNormal6);
  fuzzy->addFuzzyRule(fuzzyRule6);

//FUZZY RULE7

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxT7 = new FuzzyRuleAntecedent();
  DxT7->joinWithAND(D, T);

  FuzzyRuleAntecedent *DxTxRT7 = new FuzzyRuleAntecedent();
  DxTxRT7->joinWithAND(DxT7, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat7 = new FuzzyRuleConsequent();
  thenAtapTutupCepat7->addOutput(Cepat);

  FuzzyRule *fuzzyRule7 = new FuzzyRule(7, DxTxRT7, thenAtapTutupCepat7);
  fuzzy->addFuzzyRule(fuzzyRule7);

   //FUZZY RULE8

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxT8 = new FuzzyRuleAntecedent();
  DxT8->joinWithAND(D, T);

  FuzzyRuleAntecedent *DxTxS8 = new FuzzyRuleAntecedent();
  DxTxS8->joinWithAND(DxT8, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal8 = new FuzzyRuleConsequent();
  thenAtapBukaNormal8->addOutput(Normal);

  FuzzyRule *fuzzyRule8 = new FuzzyRule(8, DxTxS8, thenAtapBukaNormal8);
  fuzzy->addFuzzyRule(fuzzyRule8);


   //FUZZY RULE9

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *DxT9 = new FuzzyRuleAntecedent();
  DxT9->joinWithAND(D, T);

  FuzzyRuleAntecedent *DxTxTi9 = new FuzzyRuleAntecedent();
  DxTxTi9->joinWithAND(DxT9, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal9 = new FuzzyRuleConsequent();
  thenAtapBukaNormal9->addOutput(Normal);

  FuzzyRule *fuzzyRule9 = new FuzzyRule(9, DxTxTi9, thenAtapBukaNormal9);
  fuzzy->addFuzzyRule(fuzzyRule9);

 //FUZZY RULE10

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxRK10 = new FuzzyRuleAntecedent();
  NxRK10->joinWithAND(N, RK);

  FuzzyRuleAntecedent *NxRKxRT10 = new FuzzyRuleAntecedent();
  NxRKxRT10->joinWithAND(NxRK10, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat10 = new FuzzyRuleConsequent();
  thenAtapTutupCepat10->addOutput(Cepat);

  FuzzyRule *fuzzyRule10 = new FuzzyRule(10, NxRKxRT10, thenAtapTutupCepat10);
  fuzzy->addFuzzyRule(fuzzyRule10);


   //FUZZY RULE11

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxRK11 = new FuzzyRuleAntecedent();
  NxRK11->joinWithAND(N, RK);

  FuzzyRuleAntecedent *NxRKxS11 = new FuzzyRuleAntecedent();
  NxRKxS11->joinWithAND(NxRK11, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal11 = new FuzzyRuleConsequent();
  thenAtapBukaNormal11->addOutput(Normal);

  FuzzyRule *fuzzyRule11 = new FuzzyRule(11, NxRKxS11, thenAtapBukaNormal11);
  fuzzy->addFuzzyRule(fuzzyRule11);

   



   //FUZZY RULE12

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxRK12 = new FuzzyRuleAntecedent();
  NxRK12->joinWithAND(N, RK);

  FuzzyRuleAntecedent *NxRKxTi12 = new FuzzyRuleAntecedent();
  NxRKxTi12->joinWithAND(NxRK12, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal12 = new FuzzyRuleConsequent();
  thenAtapBukaNormal12->addOutput(Normal);

  FuzzyRule *fuzzyRule12 = new FuzzyRule(12, NxRKxTi12, thenAtapBukaNormal12);
  fuzzy->addFuzzyRule(fuzzyRule12);

  
   //FUZZY RULE13
  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxSe13 = new FuzzyRuleAntecedent();
  NxSe13->joinWithAND(N, Se);

  FuzzyRuleAntecedent *NxSexRT13 = new FuzzyRuleAntecedent();
  NxSexRT13->joinWithAND(NxSe13, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat13 = new FuzzyRuleConsequent();
  thenAtapTutupCepat13->addOutput(Cepat);

  FuzzyRule *fuzzyRule13 = new FuzzyRule(13, NxSexRT13, thenAtapTutupCepat13);
  fuzzy->addFuzzyRule(fuzzyRule13);

   //FUZZY RULE14

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxSe14 = new FuzzyRuleAntecedent();
  NxSe14->joinWithAND(N, Se);

  FuzzyRuleAntecedent *NxSexS14 = new FuzzyRuleAntecedent();
  NxSexS14->joinWithAND(NxSe14, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal14 = new FuzzyRuleConsequent();
  thenAtapBukaNormal14->addOutput(Normal);

  FuzzyRule *fuzzyRule14 = new FuzzyRule(14, NxSexS14, thenAtapBukaNormal14);
  fuzzy->addFuzzyRule(fuzzyRule14);


   //FUZZY RULE15

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxSe15 = new FuzzyRuleAntecedent();
  NxSe15->joinWithAND(N, Se);

  FuzzyRuleAntecedent *NxSexTi15 = new FuzzyRuleAntecedent();
  NxSexTi15->joinWithAND(NxSe15, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal15 = new FuzzyRuleConsequent();
  thenAtapBukaNormal15->addOutput(Normal);

  FuzzyRule *fuzzyRule15 = new FuzzyRule(15, NxSexTi15, thenAtapBukaNormal15);
  fuzzy->addFuzzyRule(fuzzyRule15);

//FUZZY RULE16

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxT16 = new FuzzyRuleAntecedent();
  NxT16->joinWithAND(N, T);

  FuzzyRuleAntecedent *NxTxRT16 = new FuzzyRuleAntecedent();
  NxTxRT16->joinWithAND(NxT16, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat16 = new FuzzyRuleConsequent();
  thenAtapTutupCepat16->addOutput(Cepat);

  FuzzyRule *fuzzyRule16 = new FuzzyRule(16, NxTxRT16, thenAtapTutupCepat16);
  fuzzy->addFuzzyRule(fuzzyRule16);

   //FUZZY RULE17

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxT17 = new FuzzyRuleAntecedent();
  NxT17->joinWithAND(N, T);

  FuzzyRuleAntecedent *NxTxS17 = new FuzzyRuleAntecedent();
  NxTxS17->joinWithAND(NxT17, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal17 = new FuzzyRuleConsequent();
  thenAtapBukaNormal17->addOutput(Normal);

  FuzzyRule *fuzzyRule17 = new FuzzyRule(17, NxTxS17, thenAtapBukaNormal17);
  fuzzy->addFuzzyRule(fuzzyRule17);


   //FUZZY RULE18

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *NxT18 = new FuzzyRuleAntecedent();
  NxT18->joinWithAND(N, T);

  FuzzyRuleAntecedent *NxTxTi18 = new FuzzyRuleAntecedent();
  NxTxTi18->joinWithAND(NxT18, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal18 = new FuzzyRuleConsequent();
  thenAtapBukaNormal18->addOutput(Normal);

  FuzzyRule *fuzzyRule18 = new FuzzyRule(18, NxTxTi18, thenAtapBukaNormal18);
  fuzzy->addFuzzyRule(fuzzyRule18);

 //FUZZY RULE19

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxRK19 = new FuzzyRuleAntecedent();
  PxRK19->joinWithAND(P, RK);

  FuzzyRuleAntecedent *PxRKxRT19 = new FuzzyRuleAntecedent();
  PxRKxRT19->joinWithAND(PxRK19, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat19 = new FuzzyRuleConsequent();
  thenAtapTutupCepat19->addOutput(Cepat);

  FuzzyRule *fuzzyRule19 = new FuzzyRule(19, PxRKxRT19, thenAtapTutupCepat19);
  fuzzy->addFuzzyRule(fuzzyRule19);

   //FUZZY RULE20

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxRK20 = new FuzzyRuleAntecedent();
  PxRK20->joinWithAND(P, RK);

  FuzzyRuleAntecedent *PxRKxS20 = new FuzzyRuleAntecedent();
  PxRKxS20->joinWithAND(PxRK20, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal20 = new FuzzyRuleConsequent();
  thenAtapBukaNormal20->addOutput(Normal);

  FuzzyRule *fuzzyRule20 = new FuzzyRule(20, PxRKxS20, thenAtapBukaNormal20);
  fuzzy->addFuzzyRule(fuzzyRule20);


   //FUZZY RULE21

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxRK21 = new FuzzyRuleAntecedent();
  PxRK21->joinWithAND(P, RK);

  FuzzyRuleAntecedent *PxRKxTi21 = new FuzzyRuleAntecedent();
  PxRKxTi21->joinWithAND(PxRK21, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal21 = new FuzzyRuleConsequent();
  thenAtapBukaNormal21->addOutput(Normal);

  FuzzyRule *fuzzyRule21 = new FuzzyRule(21, PxRKxTi21, thenAtapBukaNormal21);
  fuzzy->addFuzzyRule(fuzzyRule21);

   //FUZZY RULE22
  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxSe22 = new FuzzyRuleAntecedent();
  PxSe22->joinWithAND(P, Se);

  FuzzyRuleAntecedent *PxSexRT22 = new FuzzyRuleAntecedent();
  PxSexRT22->joinWithAND(PxSe22, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat22 = new FuzzyRuleConsequent();
  thenAtapTutupCepat22->addOutput(Cepat);

  FuzzyRule *fuzzyRule22 = new FuzzyRule(22, PxSexRT22, thenAtapTutupCepat22);
  fuzzy->addFuzzyRule(fuzzyRule22);

   //FUZZY RULE23

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxSe23 = new FuzzyRuleAntecedent();
  PxSe23->joinWithAND(P, Se);

  FuzzyRuleAntecedent *PxSexS23 = new FuzzyRuleAntecedent();
  PxSexS23->joinWithAND(PxSe23, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal23 = new FuzzyRuleConsequent();
  thenAtapBukaNormal23->addOutput(Normal);

  FuzzyRule *fuzzyRule23 = new FuzzyRule(23, PxSexS23, thenAtapBukaNormal23);
  fuzzy->addFuzzyRule(fuzzyRule23);


   //FUZZY RULE24

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxSe24 = new FuzzyRuleAntecedent();
  PxSe24->joinWithAND(P, Se);

  FuzzyRuleAntecedent *PxSexTi24 = new FuzzyRuleAntecedent();
  PxSexTi24->joinWithAND(PxSe24, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal24 = new FuzzyRuleConsequent();
  thenAtapBukaNormal24->addOutput(Normal);

  FuzzyRule *fuzzyRule24 = new FuzzyRule(24, PxSexTi24, thenAtapBukaNormal24);
  fuzzy->addFuzzyRule(fuzzyRule24);

//FUZZY RULE25

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxT25 = new FuzzyRuleAntecedent();
  PxT25->joinWithAND(P, T);

  FuzzyRuleAntecedent *PxTxRT25 = new FuzzyRuleAntecedent();
  PxTxRT25->joinWithAND(PxT25, RT); 

  FuzzyRuleConsequent *thenAtapTutupCepat25 = new FuzzyRuleConsequent();
  thenAtapTutupCepat25->addOutput(Cepat);

  FuzzyRule *fuzzyRule25 = new FuzzyRule(25, PxTxRT25, thenAtapTutupCepat25);
  fuzzy->addFuzzyRule(fuzzyRule25);

   //FUZZY RULE26

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxT26 = new FuzzyRuleAntecedent();
  PxT26->joinWithAND(P, T);

  FuzzyRuleAntecedent *PxTxS26 = new FuzzyRuleAntecedent();
  PxTxS26->joinWithAND(PxT26, S); 

  FuzzyRuleConsequent *thenAtapBukaNormal26 = new FuzzyRuleConsequent();
  thenAtapBukaNormal26->addOutput(Normal);

  FuzzyRule *fuzzyRule26 = new FuzzyRule(26, PxTxS26, thenAtapBukaNormal26);
  fuzzy->addFuzzyRule(fuzzyRule26);


   //FUZZY RULE27

  //suhu, kelembapan, tekanan
  FuzzyRuleAntecedent *PxT27 = new FuzzyRuleAntecedent();
  PxT27->joinWithAND(P, T);

  FuzzyRuleAntecedent *PxTxTi27 = new FuzzyRuleAntecedent();
  PxTxTi27->joinWithAND(PxT27, Ti); 

  FuzzyRuleConsequent *thenAtapBukaNormal27 = new FuzzyRuleConsequent();
  thenAtapBukaNormal27->addOutput(Normal);

  FuzzyRule *fuzzyRule27 = new FuzzyRule(27, PxTxTi27, thenAtapBukaNormal27);
  fuzzy->addFuzzyRule(fuzzyRule27);  

 

 
}
