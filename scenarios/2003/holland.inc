
##############################
# Country definition for HOL #
##############################

country =
{ tag                 = HOL
  regular_id          = U06
  capital             = 122
  manpower            = 22
  transports          = 80
  escorts             = 0
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 80
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = CZE value = 200 access = yes }
    relation = { tag = DEN value = 200 access = yes }
    relation = { tag = EST value = 200 access = yes }
    relation = { tag = FRA value = 200 access = yes }
    relation = { tag = GER value = 200 access = yes }
    relation = { tag = GRE value = 200 access = yes }
    relation = { tag = HUN value = 200 access = yes }
    relation = { tag = ICL value = 200 access = yes }
    relation = { tag = ITA value = 200 access = yes }
    relation = { tag = LAT value = 200 access = yes }
    relation = { tag = LIT value = 200 access = yes }
    relation = { tag = LUX value = 200 access = yes }
    relation = { tag = USA value = 200 access = yes }
    relation = { tag = NOR value = 200 access = yes }
    relation = { tag = POL value = 200 access = yes }
    relation = { tag = POR value = 200 access = yes }
    relation = { tag = ROM value = 200 access = yes }
    relation = { tag = SLO value = 200 access = yes }
    relation = { tag = SLV value = 200 access = yes }
    relation = { tag = SPA value = 200 access = yes }
    relation = { tag = TUR value = 200 access = yes }
    relation = { tag = ENG value = 200 access = yes }
  }
  SpyInfo                = {  country = "HOL" NumberOfSpies = 6  } 
   # Homeland 
   nationalprovinces      = {  125   122   123   118   119   124 120 121  } 
   # Homeland 
   ownedprovinces         = {  125   122   123   118   119   124  1762  120 121  1761  } 
   # Homeland 
   controlledprovinces         = {  125   122   123   118   119   124  1762 120 121  1761  } 
	claimedprovinces = { 1761 1762 #Netherland Antilles + Guyana (Suriname) 
	}
  techapps            = { 
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					5210 5220 5230 5240 5250 5260 5270 5280 5290
                                        #Army Equipment:
                                        2000 2050 2110
                                        2010 2060
                                        2300 2310 2320
                                        2400 2410 2420
                                        2200 2210 2220
                                        2500 2510 2520
                                        2600 2610 2620
                                        2700 2710 2720
                                        2800 2810 2820
                                        #Army Organisation:
                                        1500 1510 1520
                                        1300 1310 1320
                                        1000 1050 1110
                                                  1600
                                             1700 1710
                                             1800 1810
                                        1010 1060
					1260 1270 1900 1910 1920 1990
					#Aircraft
					4800 4810
					4750 4760
					4700 4710
					4900 4910
                                        4000 4010 4020
                                        4400
					#Land Docs
					6010 6020
					6930
					6600 6610
					6100 6110 6120 6130 6140 6150 6160 6170
					6200 6210 6220 6230 6240 6250 6260 6270
					#Air Docs
					9040 9510 9520 9530 9540
					9050 9060 9070 9110 9120
					9130 9140 9150 9190 9200
					#Secret Weapons
					7010 7060 7070 7080
					7180
					7310 7320 7330
                                        #Navy Techs
                                        3000 3010 3020
                                        3100 3110 3120
                                        3590 3600
                                        3700 3710 3720
                                        3850 3860 3870
                                        #Navy Doctrines
                                        8900 8910 8920
                                        8950 8960 8970
                                        8400 8410 8420
                                        8000 8010 8020
                                        8500 8510 8520
                                        8100 8110 8120
                                        8600 8610 8620
					
					
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 5
    free_market       = 8
    freedom           = 10
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 6
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 16500 id = 1 }
    location = 119
    name     = "11 Luchtmobiele Brigade"
    division =
    { id       = { type = 16500 id = 2 }
      name     = "11 Luchtmobiele Brigade"
      strength = 100
      type     = militia
      model    = 2
    }
  }
  landunit =
  { id       = { type = 16500 id = 3 }
    location = 118
    name     = "Koninklijke Landmacht"
    division =
    { id       = { type = 16500 id = 4 }
      name     = "13 Gemechaniseerde Brigade"
      strength = 100
      type     = cavalry
      model    = 2
    }
    division =
    { id       = { type = 16500 id = 5 }
      name     = "43 Gemechaniseerde Brigade"
      strength = 100
      type     = cavalry
      model    = 2
    }
  }
  landunit =
  { id       = { type = 16500 id = 7 }
    location = 125
    name     = "Korps Mariniers"
    division =
    { id            = { type = 16500 id = 8 }
      name          = "Mariniers Brigade"
      strength      = 100
      type          = marine
      model         = 11
    }
  }
  # #####################################
  # NAVY
  # #####################################
  navalunit =
  { id       = { type = 16500 id = 200 }
    location = 125
    base     = 125
    name     = "Koninklijke Marine"
    division =
    { id    = { type = 16500 id = 201 }
      name  = "HrMs De Zeven Provinciën"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 16500 id = 202 }
      name  = "HrMs Tromp"
      type  = light_cruiser
      model = 2
    }
    division =
    { id    = { type = 16500 id = 207 }
      name  = "HrMs Karel Doorman"   # to belgium in 2005 as Leopold I
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 209 }
      name  = "HrMs Willem van der Zaan" # to belgium in 2005 as Louise-Marie
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 210 }
      name  = "HrMs Tjerk Hiddes"   # to chile in 2004 as Almirante Riveros
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 211 }
      name  = "HrMs Van Amstel"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 212 }
      name  = "HrMs Abraham van der Hulst"  # to chile in 2004 as Blanco Encalada
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 213 }
      name  = "HrMs Van Nes"               # to portugal in 2006 as NRP Bartolomeu Dias
      type  = destroyer 
      model = 2
    }
    division =
    { id    = { type = 16500 id = 214 }
      name  = "HrMs Van Galen"           # to portugal in 2006 as NRP D. Francisco de Almeida
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 208 }
      name  = "HrMs Van Speijk"
      type  = destroyer
      model = 2
    }
    division =
    { id    = { type = 16500 id = 203 }
      name  = "HrMs Jacob van Heemskerck" # to chile in 2005 as Almirante Latorre
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 16500 id = 204 } # to chile in 2005 as Capitán Prat
      name  = "HrMs Witte de With"
      type  = destroyer
      model = 1
    }
    division =
    { id    = { type = 16500 id = 215 }
      name  = "HrMs Rotterdam"
      type  = transport
      model = 2
    }
    division =
    { id    = { type = 16500 id = 216 }
      name  = "Transport flotilla one"
      type  = transport
      model = 0
    }
  }
  navalunit =
  { id       = { type = 16500 id = 217 }
    location = 122
    base     = 122
    name     = "Dutch Submarine Command"
    division =
    { id    = { type = 16500 id = 218 }
      name  = "HrMs Walrus"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 16500 id = 219 }
      name  = "HrMs Zeeleeuw"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 16500 id = 220 }
      name  = "HrMs Dolfijn"
      type  = submarine
      model = 4
    }
    division =
    { id    = { type = 16500 id = 221 }
      name  = "HrMs Bruinvis"
      type  = submarine
      model = 4
    }
  }
  # #####################################
  # AIR FORCE
  # #####################################
  airunit =
  { id       = { type = 16500 id = 100 }
    location = 122
    base     = 122
    name     = "Koninklijke Luchtmacht"
    division =
    { id       = { type = 16500 id = 101 }
      name     = "1 Wing"
      type     = interceptor
      strength = 100
      model    = 3
    }
  }
  # ###################################
  # Under Development
  # ###################################
  division_development =
  { id    = { type = 16500 id = 301 }
    name  = "HrMs De Ruyter"
    type  = light_cruiser
    model = 2
    cost  = 5
    date  = { day = 24 month = august year = 2004 }
  }
  division_development =
  { id    = { type = 16500 id = 302 }
    name  = "HrMs Evertsen"
    type  = light_cruiser
    model = 2
    cost  = 5
    date  = { day = 18 month = july year = 2005 }
  }
  division_development =
  { id    = { type = 16500 id = 303 }
    name  = "HrMs Johan de Witt"
    type  = transport
    model = 2
    cost  = 22
    date  = { day = 12 month = september year = 2007 }
  }
}

