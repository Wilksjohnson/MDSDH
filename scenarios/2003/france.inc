
##############################
# Country definition for FRA #
##############################
           
country =
{ tag                 = FRA
  regular_id          = U72
  capital             = 55
  # Resource Reserves
  nuke                = 30
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 300
  manpower            = 60
  transports          = 180
  escorts             = 0
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = CZE value = 200 access = yes }
    relation = { tag = DEN value = 200 access = yes }
    relation = { tag = EST value = 200 access = yes }
    relation = { tag = USA value = 100 }
    relation = { tag = GER value = 200 access = yes }
    relation = { tag = GRE value = 200 access = yes }
    relation = { tag = HUN value = 200 access = yes }
    relation = { tag = ICL value = 200 access = yes }
    relation = { tag = ITA value = 200 access = yes }
    relation = { tag = LAT value = 200 access = yes }
    relation = { tag = LIT value = 200 access = yes }
    relation = { tag = LUX value = 200 access = yes }
    relation = { tag = HOL value = 200 access = yes }
    relation = { tag = NOR value = 200 access = yes }
    relation = { tag = POL value = 200 access = yes }
    relation = { tag = POR value = 200 access = yes }
    relation = { tag = ROM value = 200 access = yes }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = SLV value = 200 access = yes }
    relation = { tag = SPA value = 200 access = yes }
    relation = { tag = TUR value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
    relation = { tag = CON value = 100 access = yes }
    relation = { tag = U82 value = 150 access = yes }
    relation = { tag = U08 value = 100 access = yes }
    relation = { tag = U96 value = 100 access = yes }
    relation = { tag = U95 value = 100 access = yes }
    relation = { tag = U84 value = 150 access = yes }
    relation = { tag = U93 value = 100 access = yes }
    relation = { tag = MAD value = 100 access = yes }
    relation = { tag = GUI value = 100 access = yes }
    relation = { tag = GAB value = 150 access = yes }
    relation = { tag = CAM value = 100 access = yes }
    relation = { tag = BEN value = 100 access = yes }
    relation = { tag = U85 value = 100 access = yes }
    relation = { tag = U94 value = 100 access = yes }
    relation = { tag = U88 value = 150 access = yes }
    relation =
    { tag        = U14
      value      = 150
      access     = yes
    }
  }
  SpyInfo                = {  country = "FRA" NumberOfSpies = 9  } 
   # Togoland 
   # Metropolitan France 
   nationalprovinces      = { 85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68  62  65  66  54  63 105 107  104 100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  43  44  47  72 73 93  48 95 64 91 83 88 106 96 97 76 98 102 92 102 53 46 41 56 101 103
          2000 996 1767 1768 1000
                             } 
   # Metropolitan France 
   ownedprovinces         = {  85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68  62  65  66  54  63 105 104  
                              100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  43  44  47  72 73 93 
         48 95 64 91 83 88 106 96 97 76 
          98 103 92  
        102 53 46 41 56 101 1586 1585 1740 1743 1744 1767 1768 2000 2135 996 1000
                             } 
   # Togoland 
   # Metropolitan France 
   controlledprovinces    = {  85 90 87 86 94 89 81 82 80 70 84 79 67 40 77 71 78 74 75 69 68  62  65  66  54  63 105 104  
                              100  52  51  49  59  50  99  45  55  60  61  37  38  39  57  58  42  43  44  47  72 73 93 
         48 95 64 91 83 88 106 96 97 76 
          98 103 92  
        102 53 46 41 56 101 1586 1585 1740 1743 1744 1767 1768 2000 2135 996 1000
                             }
	claimedprovinces = {
                            1752 #French West Indies
                            1585 1586 1730 1740 1743 1744 #French Pacific Island
                            2135 #Saint Pierre island near Newfoundland
						}
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
					#Army Equip
					2200 2210 2220 2230
					2000 2010
                                        2050 2060 2070
					2110 2150
					2300 2310 2320 2330
					2400 2410 2420 2430
					2500 2510 2520 2530
					2600 2610 2620 2630
					2700 2710 2720 2730
					2800 2810 2820 2830
					#Army Org
					1980 1970 1960
					1260 1270
					1000 1010
                                        1050 1060 1070
					1150
					1500 1510 1520 1530
					1200 1210 1220 1230
					1300 1310 1320 1330
					1400 1410 1420 1430
					1700 1710 1720
					1900 1910 1920 1930
					1800 1810 1820
					1600 1610
					1650 1660
					#Aircraft
					4100 4110 4120 4130
					4000 4010
					4640 4650 4660 4670
					4600 4610
					4800 4810 4820
					4700 4710 4720
					4750 4760 4770
					4400 4410
					4300 4310
					4900 4910 4920
					4500 4510
					#Land Docs
					6010 6030 6050 6070 6080
					6930
					6600 6620
					6700 6720
					6100 6110 6120 6130 6140 6150 6160 6170
					6200 6210 6220 6230 6240 6250 6260 6270
					6300 6310 6320 6330 6340 6350 6360 6370
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9090 9110 9120
					9130 9140 9150 9170 9190 9200
					9210
					9450 9460
					#Secret Weapons
					7010
					7020 7030 7040 7050
					7060 7070 7080
					7100 7110 7120
					7180 7190 7200
                                        7330 7310 7320
                                        #Navy Doctrines
                                        8900 8910 8920 8930
                                        8950 8960 8970
                                        8400 8410 8420
                                        8000 8010 8020 8030
                                        8500 8510 8520 8530
                                        8100 8110 8120
                                        8600 8610 8620
                                        8200
                                        8700
                                        8300 8310 8320
                                        8800 8810 8820
                                        #Navy Techs
                                        3000 3010 3020 3030
                                        3100 3110 3120
                                        3400 3410 3420
                                        3590 3600
                                        3700 37700 3710 37710 3720
                                        3800 3810 38810 3820 38820
                                        3850 3860 3870 3880
                                        3900 3910 3920
                        }
  blueprints          = { 3610 }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 6
    free_market       = 7
    freedom           = 9
    professional_army = 10
    defense_lobby     = 4
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 10600 id = 1 }
    location = 52
    name     = "Commandement des Forces Terrestres"
    division =
    { id            = { type = 10600 id = 2 }
      name          = "CFT HQ"
      strength      = 100
      type          = hq
      model         = 1
    }
  }
  landunit =
  { id       = { type = 10600 id = 3 }
    location = 99
    name     = "1re Brigade Mécanisée"
    division =
    { id            = { type = 10600 id = 4 }
      name          = "1re Brigade Mécanisée"
      strength      = 100
      type          = cavalry
      model         = 3
    }
  }
  landunit =
  { id       = { type = 10600 id = 5 }
    location = 107
    name     = "2e Brigade Blindée"
    division =
    { id            = { type = 10600 id = 6 }
      name          = "2e Brigade Blindée"
      strength      = 100
      type          = light_armor
      model         = 11
    }
  }
  landunit =
  { id       = { type = 10600 id = 7 }
    location = 713
    name     = "3e Brigade Mécanisée"
    division =
    { id            = { type = 10600 id = 8 }
      name          = "3e Brigade Mécanisée"
      strength      = 100
      type          = cavalry
      model         = 3
    }
  }
  landunit =
  { id       = { type = 10600 id = 9 }
    location = 82
    name     = "6e Brigade Légère Blindée"
    division =
    { id            = { type = 10600 id = 10 }
      name          = "6e Brigade Légère Blindée"
      strength      = 100
      type          = mechanized   # mech cavalry bde
      model         = 3
    }
  }
  landunit =
  { id       = { type = 10600 id = 11 }
    location = 97
    name     = "7e Brigade Blindée"
    division =
    { id            = { type = 10600 id = 12 }
      name          = "7e Brigade Blindée"
      strength      = 100
      type          = light_armor
      model         = 11
    }
  }
  landunit =
  { id       = { type = 10600 id = 13 }
    location = 62
    name     = "9e Brigade Légère Blindée de Marine"
    division =
    { id            = { type = 10600 id = 14 }
      name          = "9e Brigade Légère Blindée de Marine"
      strength      = 100
      type          = marine
      model         = 12
    }
  }
  landunit =
  { id       = { type = 10600 id = 15 }
    location = 77
    name     = "11e Brigade Parachutiste"
    division =
    { id            = { type = 10600 id = 16 }
      name          = "11e Brigade Parachutiste"
      strength      = 100
      type          = paratrooper
      model         = 16
    }
  }
  landunit =
  { id       = { type = 10600 id = 17 }
    location = 90
    name     = "27e Brigade d'Infanterie de Montagne"
    division =
    { id            = { type = 10600 id = 18 }
      name          = "27e Brigade d'Infanterie de Montagne"
      strength      = 100
      type          = bergsjaeger
      model         = 14
    }
  }
  landunit =
  { id       = { type = 10600 id = 19 }
    location = 83
    name     = "Brigade des Forces Spéciales"
    division =
    { experience    = 15
      id            = { type = 10600 id = 20 }
      name          = "Brigade des Forces Spéciales" # 1 para assault 1 para recon and 1 heli rgt.
      strength      = 100
      type          = bergsjaeger
      model         = 14
      extra         = engineer
      brigade_model = 0
    }
  }
  landunit =
  { id       = { type = 10600 id = 21 }
    location = 833
    name     = "Forces françaises de Djibouti"
    division =
    { experience    = 15
      id       = { type = 10600 id = 22 }
      name     = "13e DBLE/5e RIAOM"
      strength = 100
      type     = bergsjaeger
      model    = 14
    }
  }
  landunit =
  { id       = { type = 10600 id = 23 }
    location = 2000
    name     = "Forces armées de Guyane"
    division =
    { experience    = 15
      id       = { type = 10600 id = 24 }
      name     = "3e REI/9e RIMa"
      strength = 30
      type     = bergsjaeger
      model    = 14
    }
  }
 # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 10600 id = 200 }
    location = 69
    base     = 69
    name     = "Flotte Atlantique"
    division =
    { id    = { type = 10600 id = 202 }
      name  = "Tourville"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10600 id = 203 }
      name  = "Primauguet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 204 }
      name  = "Latouche-Tréville"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 205 }
      name  = "Ventôse"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10600 id = 206 }
      name  = "Germinal"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10600 id = 210 }
      name  = "Siroco"
      type  = transport
      model = 3
    }
    division =
    { id    = { type = 10600 id = 211 }
      name  = "1re Flottille de Convois"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10600 id = 212 }
    location = 86
    base     = 86
    name     = "Flotte Méditerranéenne"
    division =
    { id    = { type = 10600 id = 213 }
      name  = "Duquesne"
      type  = light_cruiser
      model = 0
    }
    division =
    { id    = { type = 10600 id = 214 }
      name  = "Cassard"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 215 }
      name  = "Georges Leygues"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 216 }
      name  = "Dupleix"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 217 }
      name  = "Montcalm"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 218 }
      name  = "Jean de Vienne"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 219 }
      name  = "La Fayette"
      type  = destroyer
      model = 3
    }
    division =
    { id    = { type = 10600 id = 220 }
      name  = "Courbet"
      type  = destroyer
      model = 3
    }
    division =
    { id    = { type = 10600 id = 221 }
      name  = "Aconit"
      type  = destroyer
      model = 3
    }
    division =
    { id    = { type = 10600 id = 222 }
      name  = "Guepratte"
      type  = destroyer
      model = 3
    }
  }
  navalunit =
  { id       = { type = 10600 id = 230 }
    location = 86
    base     = 86
    name     = "Flotte Sous-Marine de Méditerranée"
    division =
    { id    = { type = 10600 id = 231 }
      name  = "Casablanca"
      type  = submarine
      model = 14
    }
    division =
    { id    = { type = 10600 id = 232 }
      name  = "Émeraude"
      type  = submarine
      model = 14
    }
    division =
    { id    = { type = 10600 id = 233 }
      name  = "Améthyste"
      type  = submarine
      model = 15
    }
    division =
    { id    = { type = 10600 id = 234 }
      name  = "Perle"
      type  = submarine
      model = 15
    }
  }
  navalunit =
  { id       = { type = 10600 id = 235 }
    location = 86
    base     = 86
    name     = "Flotte de Transport de Méditerranée"
    division =
    { id    = { type = 10600 id = 236 }
      name  = "Foudre"
      type  = transport
      model = 3
    }
    division =
    { id    = { type = 10600 id = 237 }
      name  = "2e Flottille de Convois"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10600 id = 240 }
    location = 1582
    base     = 1582
    name     = "Flotte du Pacifique"
    division =
    { id    = { type = 10600 id = 241 }
      name  = "Prairial"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10600 id = 242 }
      name  = "Nivôse"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10600 id = 243 }
      name  = "Vendémiaire"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10600 id = 244 }
      name  = "3e Flottille de Convois"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10600 id = 246 }
    location = 1002
    base     = 1002
    name     = "Flotte de l'Océan Indien"
    division =
    { id    = { type = 10600 id = 247 }
      name  = "Floréal"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 10600 id = 248 }
      name  = "4e Flottille de Convois"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 10600 id = 249 }
    location = 978
    base     = 978
    name     = "Groupe de Combat Charles de Gaulle"
    division =
    { id            = { type = 10600 id = 250 }
      name          = "Charles de Gaulle"
      type          = escort_carrier
      model         = 2
    }
    division =
    { id    = { type = 10600 id = 251 }
      name  = "De Grasse"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 10600 id = 252 }
      name  = "Jean Bart"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 253 }
      name  = "Surcouf"
      type  = destroyer
      model = 3
    }
    division =
    { id    = { type = 10600 id = 254 }
      name  = "La Motte-Picquet"
      type  = light_cruiser
      model = 1
    }
    division =
    { id    = { type = 10600 id = 255 }
      name  = "Rubis"
      type  = submarine
      model = 14
    }
    division =
    { id    = { type = 10600 id = 256 }
      name  = "Saphir"
      type  = submarine
      model = 14
    }
  }
  navalunit =
  { id       = { type = 10600 id = 257 }
    location = 86
    base     = 86
    name     = "Force Océanique Stratégique"
    division =
    { id    = { type = 10600 id = 258 }
      name  = "Le Triomphant"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10600 id = 259 }
      name  = "Le Téméraire"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10600 id = 260 }
      name  = "Le Vigilant"
      type  = heavy_cruiser
      model = 2
    }
    division =
    { id    = { type = 10600 id = 261 }
      name  = "Le Terrible"
      type  = heavy_cruiser
      model = 2
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  airunit =
  { id       = { type = 10600 id = 100 }
    location = 89
    base     = 89
    name     = "Commandement des Forces Aériennes Stratégiques"
    division =
    { id       = { type = 10600 id = 101 }
      name     = "EC 2/4 La Fayette"
      type     = tactical_bomber
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 10600 id = 102 }
      name     = "EC 3/4 Limousin"
      type     = tactical_bomber
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 10600 id = 104 }
    location = 55
    base     = 55
    name     = "30ème Escadrille"
    division =
    { id       = { type = 10600 id = 105 }
      name     = "EC 1/2 Cigognes"
      type     = multi_role
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10600 id = 106 }
      name     = "EC 2/5 Île-de-France"
      type     = multi_role
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 10600 id = 107 }
      name     = "EC 1/7 Provence"
      type     = multi_role
      strength = 100
      model    = 2
    }
  }
  airunit =
  { id       = { type = 10600 id = 108 }
    location = 106
    base     = 106
    name     = "Base Aérienne 133 Nancy-Ochey"
    division =
    { id       = { type = 10600 id = 109 }
      name     = "EC 1/3 Navarre"
      type     = tactical_bomber
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 10600 id = 110 }
      name     = "EC 2/3 Champagne"
      type     = tactical_bomber
      strength = 100
      model    = 3
    }
    division =
    { id       = { type = 10600 id = 111 }
      name     = "EC 3/3 Ardennes"
      type     = tactical_bomber
      strength = 100
      model    = 3
    }
  }
  airunit =
  { id       = { type = 10600 id = 112 }
    location = 104
    base     = 104
    name     = "7ème Escadrille"
    division =
    { id       = { type = 10600 id = 113 }
      name     = "EC 3/11 Corse"
      type     = tactical_bomber
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10600 id = 114 }
      name     = "EC 1/12 Cambrésis"
      type     = multi_role
      strength = 100
      model    = 1
    }
    division =
    { id       = { type = 10600 id = 115 }
      name     = "EC 2/30 Normandie-Niemen"
      type     = multi_role
      strength = 100
      model    = 1
    }
  }
  airunit =
  { id       = { type = 10600 id = 116 }
    location = 77
    base     = 77
    name     = "2ème Escadrille"
    division =
    { id       = { type = 10600 id = 117 }
      name     = "EC 3/33 Lorraine"
      type     = multi_role
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10600 id = 118 }
      name     = "EC 4/33 Vexin"
      type     = multi_role
      strength = 100
      model    = 2
    }
  }
  airunit =
  { id       = { type = 10600 id = 120 }
    location = 55
    base     = 55
    name     = "Escadrille de Transport Aérien"
    division =
    { id       = { type = 10600 id = 121 }
      name     = "ETM 1/40 Moselle"
      type     = transport_plane
      strength = 100
      model    = 2
    }
    division =
    { id       = { type = 10600 id = 122 }
      name     = "ETM  2/40 Médoc"
      type     = transport_plane
      strength = 100
      model    = 2
    }
  }
  # ###################################
  # Under Development
  # ###################################
  division_development =
  { id    = { type = 10600 id = 300 }
    name  = "Mistral"
    type  = transport
    model = 4
    cost  = 22
    date  = { day = 11 month = march year = 2004 }
  }
  division_development =
  { id    = { type = 10600 id = 301 }
    name  = "Tonnerre"
    type  = transport
    model = 4
    cost  = 22
    date  = { day = 3 month = june year = 2005 }
  }
}
