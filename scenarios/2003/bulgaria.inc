
##############################
# Country definition for BUL #
##############################

country =
{ tag                 = BUL
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 50
  manpower            = 19
  capital             = 321
  transports          = 30
  escorts             = 0
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = USA value = 90 access = yes }
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
  }
  SpyInfo                = {  country = "BUL" NumberOfSpies = 6  } 
   nationalprovinces      = {  318 323 325 324 321 320 319 326 317 307 322 333 328  } 
   ownedprovinces         = {  318 323 325 324 321 320 319 326 317 322 307  } 
   controlledprovinces    = {  318 323 325 324 321 320 319 326 317 322 307  }
   claimedprovinces = { 331 334 }
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					#Army Equip
                                        2000 2050
                                        2010 2060
					2200 2210
					2300 2310
					2400 2410
					2500 2510
					2600 2610
					2700 2710
					2800 2810
					#Army Org
                                        1000 1050
                                        1010 1060
					1300 1310
					1400 1410
                                        1500 1510
					1260
					1960
					1900 1910
					1800
					#Aircraft
					4900
                                        4800
                                        4750 4760
                                        4700 4710
                                        4640
                                        4400
                                        4550
                                        4100 4110
                                        4000 4010 4020
					#Land Docs
					6010 6020
					6600 6610
					6910
					6920
					6100 6110 6120 6140 6160 6170 6200
					#Air Docs
					9020 9510 9520
					9050 9060 9070 9090 9120
					#Secret Weapons
					7010 7060 7070
                                        #Navy Techs
                                        3000 3010
                                        3590
                                        3700
                                        3850 3860
                                        #Navy Doctrines
                                        8900 8910
                                        8950 8960
                                        8400
                                        8000 8010
                                        8500 8510
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 9
    political_left    = 5
    free_market       = 6
    freedom           = 8
    professional_army = 4
    defense_lobby     = 4
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 7200 id = 1 }
    location = 321
    name     = "Suhopqtni vojski na Bqlgarija"    
    division =
    { id       = { type = 7200 id = 2 }
      name     = "2-a 'tundzhanska' lekopehotna brigada"
      strength = 100
      type     = cavalry
      model    = 1
    }
    division =
    { id       = { type = 7200 id = 3 }
      name     = "5-a 'shipchenska' mehanizirana brigada"
      strength = 100
      type     = cavalry
      model    = 1
    }  
    division =
    { id       = { type = 7200 id = 4 }
      name     = "61-a 'strjamska' mehanizirana brigada"
      strength = 100
      type     = cavalry
      model    = 1
    }
    division =
    { id            = { type = 7200 id = 5 }
      name          = "68-a brigada 'Spetzialni sili'"
      strength      = 100
      type          = bergsjaeger
      model         = 13
      extra         = engineer
      brigade_model = 0
    }
  }
  # ###################################
  # NAVY
  # ###################################
  navalunit =
  { id       = { type = 7200 id = 300 }
    location = 325
    base     = 325
    name     = "Suhopqtni vojski na Bqlgarija"
    division =
    { id    = { type = 7200 id = 301 }
      name  = "Smeli"
      type  = destroyer
      model = 0
    }
    division =
    { id    = { type = 7200 id = 302 }
      name  = "Slava"
      type  = submarine
      model = 0
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 7200 id = 200 }
    location = 321
    base     = 321
    name     = "22nd Attack Air Base"
    division =
    { id       = { type = 7200 id = 201 }
      name     = "22 Attack Squadron"
      type     = cas
      strength = 49
      model    = 0
    }
  }
  airunit =
  { id       = { type = 7200 id = 203 }
    location = 325
    base     = 325
    name     = "3rd Fighter Air Base"
    division =
    { id       = { type = 7200 id = 204 }
      name     = "3 Fighter Squadron"
      type     = interceptor
      strength = 40
      model    = 2
    }
  }
}
