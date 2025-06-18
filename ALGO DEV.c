//definir la structure par ismail
Procedure RemplirTab(var tab: array of Facture; n: Integer);
Var
  i: Integer;
Begin
  For i := 0 To n - 1 Do
  Begin
    Write('Numéro : '); Readln(tab[i].numero);
    Write('Montant : '); Readln(tab[i].montant);
    Write('Objet : '); Readln(tab[i].objet);
    Write('ID Étudiant : '); Readln(tab[i].idEtudiant);
  End;
End;


//remplir tab par ismail
Function SommeTab(tab: array of Facture; n: Integer): Real;
Var
  i: Integer;
  somme: Real;
Begin
  somme := 0;
  For i := 0 To n - 1 Do
    somme := somme + tab[i].montant;
  SommeTab := somme;
End


//afficher tab par thierno
Procedure AfficheTab(tab: array of Facture; n: Integer);
Var
  i: Integer;
Begin
  For i := 0 To n - 1 Do
  Begin
    Writeln('Facture ', i+1);
    Writeln('Numéro : ', tab[i].numero);
    Writeln('Montant : ', tab[i].montant:0:2);
    Writeln('Objet : ', tab[i].objet);
    Writeln('ID Étudiant : ', tab[i].idEtudiant);
    Writeln('-------------------------');
  End;
End;

//somme tab par thierno
Function SommeTab(tab: array of Facture; n: Integer): Real;
Var
  i: Integer;
  somme: Real;
Begin
  somme := 0;
  For i := 0 To n - 1 Do
    somme := somme + tab[i].montant;
  SommeTab := somme;
End;


//fontion min tab par ousmane
🔹 Fonction minimum
pascal
Copier
Modifier
Function MinTab(tab: array of Facture; n: Integer): Real;
Var
  i: Integer;
  min: Real;
Begin
  min := tab[0].montant;
  For i := 1 To n - 1 Do
    If tab[i].montant < min Then
      min := tab[i].montant;
  MinTab := min;
End;

//fontion max tab par ousmane
Function MaxTab(tab: array of Facture; n: Integer): Real;
Var
  i: Integer;
  max: Real;
Begin
  max := tab[0].montant;
  For i := 1 To n - 1 Do
    If tab[i].montant > max Then
      max := tab[i].montant;
  MaxTab := max;
End;


//fonction somme par objet par alhousseynou
Function SommeParObjet(tab: array of Facture; n: Integer; obj: String): Real;
Var
  i: Integer;
  somme: Real;
Begin
  somme := 0;
  For i := 0 To n - 1 Do
    If tab[i].objet = obj Then
      somme := somme + tab[i].montant;
  SommeParObjet := somme;
End

//procedure facture par etudiant par alhousseynou
Procedure FactureParEtudiant(tab: array of Facture; n: Integer; id: Integer);
Var
  i: Integer;
Begin
  For i := 0 To n - 1 Do
    If tab[i].idEtudiant = id Then
    Begin
      Writeln('Facture ID ', tab[i].numero, ' - Montant : ', tab[i].montant:0:2, ' € - Objet : ', tab[i].objet);
    End;
End;


//methode main par alhousseynou
Var
  tabFactures: array[0..99] of Facture;
  n, idRecherche: Integer;
Begin
  Write('Combien de factures ? '); Readln(n);
  RemplirTab(tabFactures, n);
  Writeln('Affichage des factures :');
  AfficheTab(tabFactures, n);
  Writeln('Somme totale : ', SommeTab(tabFactures, n):0:2);
  Writeln('Montant minimum : ', MinTab(tabFactures, n):0:2);
  Writeln('Montant maximum : ', MaxTab(tabFactures, n):0:2);
  Writeln('Somme pour objet "inscription" : ', SommeParObjet(tabFactures, n, 'inscription'):0:2);
  Write('Entrer ID étudiant à rechercher : '); Readln(idRecherche);
  FactureParEtudiant(tabFactures, n, idRecherche);
End.




