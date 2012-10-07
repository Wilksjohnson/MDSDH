
##############################
# Country definition for IND #
##############################

country =
{ tag                 = IND
  # Resource Reserves
  nuke                = 9
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 150
  manpower            = 1100
  capital             = 1459
  transports          = 180
  escorts             = 0
  diplomacy           = {
    relation = { tag = U74 value = 50 }
    relation = { tag = PAK value = -180 }
    relation =
    { tag        = NEP
      value      = 170
      access     = yes
      guaranteed = { day = 22 month = march year = 1003 }
    }
    relation = { tag = GER value = 100 }
    relation = { tag = FRA value = 100 }
    relation = { tag = ENG value = 100 }
    relation = { tag = ITA value = 100 }
    relation = { tag = SPA value = 100 }
    relation = { tag = MAD value = 120 access = yes }
    relation = { tag = MOZ value = 120 access = yes }
 }
nationalprovinces      = { 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1461 1462 1531 1463 1527 1525 1517 1512 1487 1493 1494 1501  1502 1503 1495 1504 1448 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1540 1612 1513 1421 1439 1440 1441 1443 1455 1458 1442 }
ownedprovinces         = { 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1461 1462 1531 1463 1527 1525 1517 1512 1487 1493 1494 1501  1502 1503 1495 1504 1448 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1540 1612 1513 1421 1439 1440 1441 1443 1455 1458 1442 } 
controlledprovinces    = { 1519 1520 1468 1528 1481 1469 1478 1451 1454 1486 1490 1508 1479 1480 1516 1488 1453 1489 1491 1505 1506 1507 1492 1485 1470 1446 1447 1471 1476 1483 1477 1482 1484 1521 1522 1518 1523 1524 1459 1460 1461 1462 1531 1463 1527 1525 1517 1512 1487 1493 1494 1501  1502 1503 1495 1504 1448 1500 1496 1514 1472 1535 1526 1497 1452 1473 1464 1465 1498 1499 1474 1466 1515 1475 1467 1540 1612 1513 1421 1439 1440 1441 1443 1455 1458 1442 }
claimedprovinces       = {  1539 1278  }

SpyInfo = { country = "IND" NumberOfSpies = 3  } 
techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
					#Army Equip
					2200 2210 2220
					2000 2010
					2050 2060
					2110
					2300 2310 2320
					2400 2410 2420
					2500 2510 2520
					2600 2610 2620
					2700 2710 2720
					2800 2810 2820
					#Army Org
					1000 1010 1050 1060
					1980
					1900 1910
					1260
					1800
					1500 1510
					1200 1210
					1300 1310
					1400 1410
					1700
					#Aircraft
					4800 4810 4820
					4700 4710 4720
					4750 4760 4770
					4900 4910
					4640
					4570
                                        4000 4010 4020
                                        4100 4110 4120 4130
                                        4400 4410
                                        4550
                                        4600 4610
					#Land Docs
					6930
					6010 6030 6040
					6600 6620
					6100 6110 6120 6140 6150 6160 6170
					6200 6210 6220 6240 6250 6260 6270
					#Air Docs
					9020 9510 9520
					9450 9460
					9050 9060 9070 9090 9100 9110 9120
					9130 9140 9150 9170 9180 9190 9200
					#Secret Weapons
					7010
					7020 7030 7040 7050
					7060 7070
					7100 7110
					7180 7190 7200
                                        7330 7310
                                        #Navy Techs
                                        3000 3010 3020
                                        3100 3110
                                        3400
                                        3590 3600
                                        3700 37700 3710 37710 3720
                                        3800
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960 8970
                                        8400 8410
                                        8000 8010 8020
                                        8500 8510 8520
                                        8100 8110 8120
                                        8600 8610 8620
                                        8300 8310
                                        8800
                        }
	blueprints = { 1150 2150 3900 3810 3820 }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 10
    free_market       = 7
    freedom           = 7
    professional_army = 8
    defense_lobby     = 4
    interventionism   = 7
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 12300 id = 1 }
    location = 1540
    name     = "Northern Command"
    division =
    { id       = { type = 12300 id = 2 }
      name     = "NORCOM HQ"
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 12300 id = 3 }
      name     = "41st Artillery Division"
      strength = 100
      type     = garrison
      model    = 8
    }
  }
  landunit =
  { id       = { type = 12300 id = 4 }
    location = 1540
    name     = "XIV Corps"
    division =
    { id       = { type = 12300 id = 5 }
      name     = "3rd Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id            = { type = 12300 id = 6 }
      name          = "1st Bde. - 8th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 13
    }
    division =
    { id            = { type = 12300 id = 7 }
      name          = "2nd Bde. - 8th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 13
    }
    division =
    { id            = { type = 12300 id = 8 }
      name          = "3rd Bde. - 8th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 13
    }
  }
  landunit =
  { id       = { type = 12300 id = 9 }
    location = 1540
    name     = "XV Corps"
    division =
    { id       = { type = 12300 id = 10 }
      name     = "19th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 11 }
      name     = "28th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 12 }
    location = 1540
    name     = "XVI Corps"
    division =
    { id            = { type = 12300 id = 13 }
      name          = "10th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id       = { type = 12300 id = 14 }
      name     = "25th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 15 }
      name     = "39th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 16 }
    location = 1463
    name     = "Western Command"
    division =
    { id       = { type = 12300 id = 17 }
      name     = "WESTCOM HQ"
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 12300 id = 18 }
      name     = "40th Artillery Division"
      strength = 100
      type     = garrison
      model    = 8
    }
  }
  landunit =
  { id       = { type = 12300 id = 19 }
    location = 1527
    name     = "II Corps"
    division =
    { id            = { type = 12300 id = 20 }
      name          = "1st Armoured Division"
      strength      = 100
      type          = armor
      model         = 19
    }
    division =
    { id            = { type = 12300 id = 21 }
      name          = "14th Armor Brigade"
      strength      = 100
      type          = light_armor
      model         = 4
    }
    division =
    { id            = { type = 12300 id = 22 }
      name          = "14th RAPID"
      strength      = 100
      type          = infantry
      model         = 1
      extra         = heavy_armor
      brigade_model = 2
    }
    division =
    { id            = { type = 12300 id = 23 }
      name          = "22nd Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 24 }
    location = 1463
    name     = "IX Corps"
    division =
    { id       = { type = 12300 id = 25 }
      name     = "26th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 26 }
      name     = "29th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 27 }
      name     = "2nd Armoured Brigade"
      strength = 100
      type     = light_armor
      model    = 4
    }
    division =
    { id       = { type = 12300 id = 28 }
      name     = "3rd Armoured Brigade"
      strength = 100
      type     = light_armor
      model    = 4
    }
  }
  landunit =
  { id       = { type = 12300 id = 29 }
    location = 1531
    name     = "X Corps"
    division =
    { id            = { type = 12300 id = 30 }
      name          = "6th Armoured Brigade"
      strength      = 100
      type          = light_armor
      model         = 4
    }
    division =
    { id            = { type = 12300 id = 31 }
      name          = "18th RAPID"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 32 }
      name          = "24th RAPID"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 33 }
      name          = "16th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 34 }
    location = 1531
    name     = "XI Corps"
    division =
    { id            = { type = 12300 id = 35 }
      name          = "23rd Armoured Brigade"
      strength      = 100
      type          = light_armor
      model         = 4
    }
    division =
    { id            = { type = 12300 id = 36 }
      name          = "55th Mechanized Brigade"
      strength      = 100
      type          = cavalry
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 37 }
      name          = "7th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 38 }
      name          = "9th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 39 }
      name          = "15th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 40 }
    location = 1516
    name     = "Southern Command"
    division =
    { id       = { type = 12300 id = 41 }
      name     = "SOUTHCOM HQ"
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 12300 id = 42 }
      name     = "50th Parachute Brigade"
      strength = 100
      type     = paratrooper
      model    = 15
    }
    division =
    { id       = { type = 12300 id = 43 }
      name     = "41st Artillery Division"
      strength = 100
      type     = garrison
      model    = 8
    }
  }
  landunit =
  { id       = { type = 12300 id = 44 }
    location = 1525
    name     = "XII Corps"
    division =
    { id       = { type = 12300 id = 45 }
      name     = "4th Armoured Brigade"
      strength = 100
      type     = light_armor
      model    = 4
    }
    division =
    { id       = { type = 12300 id = 46 }
      name     = "340th Mechanized Brigade"
      strength = 100
      type     = cavalry
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 47 }
      name     = "11th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 48 }
      name     = "12th Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 49 }
    location = 1480
    name     = "XXI Corps"
    division =
    { id            = { type = 12300 id = 50 }
      name          = "31st Armoured Division"
      strength      = 100
      type          = armor
      model         = 12
      extra         = heavy_armor
      brigade_model = 1
    }
    division =
    { id            = { type = 12300 id = 51 }
      name          = "36th RAPID"
      strength      = 100
      type          = infantry
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 52 }
      name          = "54th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
  }
  landunit =
  { id       = { type = 12300 id = 53 }
    location = 1461
    name     = "Central Command"
    division =
    { id       = { type = 12300 id = 54 }
      name     = "CENTCOM HQ"
      strength = 100
      type     = hq
      model    = 0
    }
  }
  landunit =
  { id       = { type = 12300 id = 55 }
    location = 1461
    name     = "I Corps"
    division =
    { id            = { type = 12300 id = 56 }
      name          = "33rd Armoured Division"
      strength      = 100
      type          = armor
      model         = 12
      extra         = heavy_armor
      brigade_model = 1
    }
    division =
    { id            = { type = 12300 id = 57 }
      name          = "4th Infantry Division"
      strength      = 100
      type          = motorized
      model         = 1
    }
    division =
    { id            = { type = 12300 id = 58 }
      name          = "1st Bde. - 6th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 13
    }
    division =
    { id            = { type = 12300 id = 59 }
      name          = "2nd Bde. - 6th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 13
    }
    division =
    { id            = { type = 12300 id = 60 }
      name          = "3rd Bde. - 6th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 13
    }
  }
  landunit =
  { id       = { type = 12300 id = 61 }
    location = 1447
    name     = "Eastern Command"
    division =
    { id       = { type = 12300 id = 62 }
      name     = "EASTCOM HQ"
      strength = 100
      type     = hq
      model    = 0
    }
    division =
    { id       = { type = 12300 id = 63 }
      name     = "23rd Infantry Division"
      strength = 100
      type     = motorized
      model    = 1
    }
    division =
    { id       = { type = 12300 id = 64 }
      name     = "42nd Artillery Division"
      strength = 100
      type     = garrison
      model    = 8
    }
  }
  landunit =
  { id       = { type = 12300 id = 65 }
    location = 1441
    name     = "III Corps"
    division =
    { id            = { type = 12300 id = 66 }
      name          = "1st Bde. - 2nd Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 67 }
      name          = "2nd Bde. - 2nd Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 68 }
      name          = "3rd Bde. - 2nd Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 69 }
      name          = "1st Bde. - 57th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 70 }
      name          = "2nd Bde. - 57th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 71 }
      name          = "3rd Bde. - 57th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
  }
  landunit =
  { id       = { type = 12300 id = 72 }
    location = 1455
    name     = "IV Corps"
    division =
    { id            = { type = 12300 id = 73 }
      name          = "1st Bde. - 5th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 74 }
      name          = "2nd Bde. - 5th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 75 }
      name          = "3rd Bde. - 5th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 76 }
      name          = "1st Bde. - 21st Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 77 }
      name          = "2nd Bde. - 21st Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 78 }
      name          = "3rd Bde. - 21st Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
  }
  landunit =
  { id       = { type = 12300 id = 79 }
    location = 1446
    name     = "XXXIII Corps"
    division =
    { id            = { type = 12300 id = 80 }
      name          = "1st Bde. - 17th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 81 }
      name          = "2nd Bde. - 17th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 82 }
      name          = "3rd Bde. - 17th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 83 }
      name          = "1st Bde. - 20th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 84 }
      name          = "2nd Bde. - 20th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 85 }
      name          = "3rd Bde. - 20th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 86 }
      name          = "1st Bde. - 27th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 87 }
      name          = "2nd Bde. - 27th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
    division =
    { id            = { type = 12300 id = 88 }
      name          = "3rd Bde. - 27th Mtn Division"
      strength      = 100
      type          = bergsjaeger
      model         = 12
    }
  }
# ###################################
# NAVY
# ###################################
navalunit ={ id = { type = 12300 id = 300 }
	location = 1447
	base     = 1447
	name     = "Western Fleet"
	division = { id = { type = 12300 id = 301 } name = "INS Viraat" type = escort_carrier model = 0 }
        division = { id = { type = 12300 id = 302 } name = "INS Mysore" type = light_cruiser model = 1 }
	division = { id = { type = 12300 id = 303 } name = "INS Mumbai" type = light_cruiser model = 1 }
        division = { id = { type = 12300 id = 304 } name = "INS Rajput" type = light_cruiser model = 0 }
        division = { id = { type = 12300 id = 305 } name = "INS Rana" type  = light_cruiser model = 0 }
	division = { id = { type = 12300 id = 306 } name = "INS Ranvijay" type = light_cruiser model = 0 }
	division = { id = { type = 12300 id = 307 } name = "INS Talwar" type = destroyer model = 1 }
	division = { id = { type = 12300 id = 308 } name = "INS Trishul" type = destroyer model = 1 }
	division = { id = { type = 12300 id = 309 } name = "INS Brahmaputra" type = destroyer model = 1 }
	division = { id = { type = 12300 id = 310 } name = "INS Beas" type = destroyer model = 1 }
	division = { id = { type = 12300 id = 311 } name = "INS Gomati" type = destroyer model = 1 }
	}
navalunit = { id = { type = 12300 id = 330 }
	location = 1517
	base     = 1517
	name     = "Western Fleet Submarines"
	division = { id = { type = 12300 id = 331 } name = "INS Vagli" type = submarine model = 0 }
	division = { id = { type = 12300 id = 332 } name = "INS Karanj" type = submarine model = 0 }
	division = { id = { type = 12300 id = 333 } name = "INS Shankush" type = submarine model = 2 }
	division = { id = { type = 12300 id = 334 } name = "INS Shalki" type = submarine model = 2 }
	}
navalunit = { id = { type = 12300 id = 335 }
	location = 1517
	base     = 1517
	name     = "Eastern Fleet"
	division = { id = { type = 12300 id = 336 } name = "INS Delhi" type = light_cruiser model = 1 }
	division = { id = { type = 12300 id = 337 } name = "INS Ranjit" type = light_cruiser model = 0 }
	division = { id = { type = 12300 id = 338 } name = "INS Ranvir" type = light_cruiser model = 0 }
	division = { id = { type = 12300 id = 339 } name = "INS Himgiri" type = destroyer model = 0 }
	division = { id = { type = 12300 id = 340 } name = "INS Dunagiri" type = destroyer model = 0 }
	division = { id = { type = 12300 id = 341 } name = "INS Vindhyagiri" type = destroyer model = 0 }
	division = { id = { type = 12300 id = 342 } name = "INS Godavari" type = destroyer model = 0 }
	division = { id = { type = 12300 id = 343 } name = "INS Ganga" type = destroyer model = 0 }
	}
navalunit = { id = { type = 12300 id = 363 }
	location = 1447
	base     = 1447
	name     = "Eastern Fleet Transports"
	division = { id    = { type = 12300 id = 364 } name  = "1st Transport Fleet" type  = transport model = 0 }
        division = { id    = { type = 12300 id = 365 } name  = "2nd Transport Fleet" type  = transport model = 0 }
	division = { id    = { type = 12300 id = 366 } name  = "3rd Transport Fleet" type  = transport model = 0 }
	}
navalunit = { id = { type = 12300 id = 374 }
	location = 1447
	base     = 1447
	name     = "Eastern Fleet Submarines"
	division = { id = { type = 12300 id = 375 } name = "INS Shankul" type = submarine model = 2 }
	division = { id = { type = 12300 id = 376 } name = "INS Shishumar" type = submarine model = 2 }
	division = { id = { type = 12300 id = 377 } name = "INS Sindhugosh" type = submarine model = 4 }
	division = { id = { type = 12300 id = 378 } name = "INS Sindhudvaj" type = submarine model = 4 }
	division = { id = { type = 12300 id = 379 } name = "INS Sindhuraj" type = submarine model = 4 }
	division = { id = { type = 12300 id = 380 } name = "INS Sindhuvir" type = submarine model = 4 }
	division = { id = { type = 12300 id = 381 } name = "INS Sindhuratma" type = submarine model = 4 }
	division = { id = { type = 12300 id = 382 } name = "INS Sindhukesari" type = submarine model = 4 }
	division = { id = { type = 12300 id = 383 } name = "INS Sindhukirti" type = submarine model = 4 }
	division = { id = { type = 12300 id = 384 } name = "INS Sindhuvijay" type = submarine model = 4 }
	division = { id = { type = 12300 id = 385 } name = "INS Sindhurajshak" type = submarine model = 4 }
	division = { id = { type = 12300 id = 386 } name = "INS Sindhushastra" type = submarine model = 4 }
	division = { id = { type = 12300 id = 387 } name = "INS Vela" type = submarine model = 0 }
	division = { id = { type = 12300 id = 388 } name = "INS Vagir" type = submarine model = 0 }
	}
# ####################################
# AIR FORCE
# ####################################
airunit = { id = { type = 12300 id = 200 }
	location = 1461
	base     = 1461
	name     = "Central Air Command"
	division = { id = { type = 12300 id = 201 } name = "40th Fighter Squadron" type = multi_role strength = 100 model = 3 }
	division = { id = { type = 12300 id = 202 } name = "11th Fighter Squadron" type = multi_role strength = 100 model = 3 }
        division = { id = { type = 12300 id = 203 } name = "18th Fighter Squadron" type = multi_role strength = 80 model = 2 }
	}
airunit = { id = { type = 12300 id = 204 }
	location = 1447
	base     = 1447
	name     = "40th Figther Wing"
	division = { id = { type = 12300 id = 205 } name = "66th Fighter Squadron" type = multi_role strength = 80 model = 2 }
        division = { id = { type = 12300 id = 206 } name = "22nd Fighter Squadron" type = interceptor strength = 100 model = 2 }
        division = { id = { type = 12300 id = 207 } name = "37th Fighter Squadron" type = interceptor strength = 100 model = 2 }
	}
airunit = { id = { type = 12300 id = 208 }
	location = 1495
	base     = 1495
	name     = "20th Fighter Wing"
        division = { id = { type = 12300 id = 209 } name = "21st Fighter Squadron" type = interceptor strength = 100 model = 1 }
        division = { id = { type = 12300 id = 210 } name = "14th Fighter Squadron" type = interceptor strength = 100 model = 1 }
        division = { id = { type = 12300 id = 211 } name = "16th Fighter Squadron" type = interceptor strength = 100 model = 1 }
	}
airunit = { id = { type = 12300 id = 212 }
	location = 1517
	base     = 1517
	name     = "Eastern Air Command 1"
	division = { id = { type = 12300 id = 213 } name = "29th Fighter Squadron" type = interceptor strength = 100 model = 1 }
        division = { id = { type = 12300 id = 214 } name = "2nd Fighter Squadron" type = interceptor strength = 100 model = 1 }
        division = { id = { type = 12300 id = 215 } name = "3rd Fighter Squadron" type = interceptor strength = 100 model = 1 }
	}
airunit = { id = { type = 12300 id = 216 }
    location = 1459
    base     = 1459
    name     = "27th Ground Attack Wing"
        division = { id = { type = 12300 id = 217 } name = "33rd Ground Attack Squadron" type = cas strength = 100 model = 0 }
	division = { id = { type = 12300 id = 218 } name = "6th Ground Attack Squadron" type = cas strength = 100 model = 0 }
	division = { id = { type = 12300 id = 219 } name = "8th Ground Attack Squadron" type = cas strength = 100 model = 0 }
	division = { id = { type = 12300 id = 220 } name = "15th Ground Attack Squadron" type = cas strength = 100 model = 0 }
	}
airunit = { id = { type = 12300 id = 221 }
    location = 1459
    base     = 1459
    name     = "Western Air Command 1"
        division = { id = { type = 12300 id = 222 } name = "8th Fighter Squadron" type = interceptor strength = 100 model = 1 }
	division = { id = { type = 12300 id = 223 } name = "7th Fighter Squadron" type = interceptor strength = 100 model = 1 }
        division = { id = { type = 12300 id = 224 } name = "12th Fighter Squadron" type = interceptor strength = 100 model = 1 }
	}
airunit = { id = { type = 12300 id = 225 }
	location = 1459
	base     = 1459
	name     = "Western Air Command 2"
	division = { id = { type = 12300 id = 226 } name = "19th Ground Attack Squadron" type = cas strength = 100 model = 0 }
	division = { id = { type = 12300 id = 227 } name = "43rd Ground Attack Squadron" type = cas strength = 100 model = 0 }
	division = { id = { type = 12300 id = 228 } name = "55th Ground Attack Squadron" type = cas strength = 100 model = 0 }
	division = { id = { type = 12300 id = 229 } name = "25th Ground Attack Squadron" type = cas strength = 100 model = 0 }
	}
airunit = { id = { type = 12300 id = 230 }
	location = 1447
	base     = 1447
	name     = "Central Air Transport Command"
	division = { id = { type = 12300 id = 231 } name = "1st Air Transport Squadron" type = transport_plane strength = 100 model = 1 }
	}
# ###################################
# Under Development
# ###################################
  division_development =
  { id    = { type = 12300 id = 400 }
    name  = "INS Shivalik"
    type  = destroyer
    model = 2
    cost  = 5
    date  = { day = 29 month = august year = 2003 }
  }
  division_development =
  { id    = { type = 12300 id = 401 }
    name  = "INS Betwa"
    type  = destroyer
    model = 1
    cost  = 5
    date  = { day = 2 month = february year = 2006 }
  }
}
