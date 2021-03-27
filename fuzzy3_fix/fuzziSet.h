void fuzziSet () {

//
//*******************FUZZY INPUT********************
//


   //FuzzyInput Suhu
  FuzzyInput *suhu = new FuzzyInput(1);
  suhu->addFuzzySet(D);//Dingin
  suhu->addFuzzySet(N);//Normal
  suhu->addFuzzySet(P);//Panas

  fuzzy->addFuzzyInput(suhu);

   //FuzzyInput Kelembapan
  FuzzyInput *kelembapan = new FuzzyInput(2);
  kelembapan->addFuzzySet(RK);//Rendah
  kelembapan->addFuzzySet(Se);//Sedang
  kelembapan->addFuzzySet(T);//Tinggi

  fuzzy->addFuzzyInput(kelembapan);


  //FuzzyInput Sensor Tekanan Udara
  FuzzyInput *tudara = new FuzzyInput(3);
  tudara->addFuzzySet(RT);//Rendah
  tudara->addFuzzySet(S);//Sedang
  tudara->addFuzzySet(Ti);//Tinggi

  fuzzy->addFuzzyInput(tudara);



//
//***************FUZZY OUTPUT******************
//

  //FuzzyOutput Atap
  FuzzyOutput *motor = new FuzzyOutput(1);
  motor->addFuzzySet(Normal);
  motor->addFuzzySet(Cepat);

  fuzzy->addFuzzyOutput(motor);



}
