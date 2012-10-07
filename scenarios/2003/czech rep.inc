
##############################
# Country definition for CZE #
##############################

country =
{ tag                 = CZE
  # Resource Reserves
  energy              = 1000
  metal               = 1000
  rare_materials      = 500
  oil                 = 500
  supplies            = 500
  money               = 50
  manpower            = 42
  capital             = 207
  # NATO
  diplomacy =
  { relation = { tag = BEL value = 200 access = yes }
    relation = { tag = BUL value = 200 access = yes }
    relation = { tag = CAN value = 200 access = yes }
    relation = { tag = USA value = 150 access = yes }
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
  SpyInfo                = {  country = "CZE" NumberOfSpies = 7  } 
   nationalprovinces      = {  200 206 205 197 199 207 198 201 196 202 204 203  } 
   ownedprovinces         = {  200 206 205 197 199 207 198 201 196 202 204 203  } 
   controlledprovinces    = {  200 206 205 197 199 207 198 201 196 202 204 203  }
  techapps            = {
					#Industry
					5010 5020 5030 5040 5050 5060 5070 5080 5090
					5110 5120 5130 5140 5150 5160 5170 5180 5190
					#Army Equip
					2200 2210 2220
					2000 2010 2050 2060
					2400 2410 2420
					2300 2310 2430
					2500 2510 2520
					2600 2610 2620
					2800 2810 2820
					#Aircraft
					4800 4700 4750 4900
                                        4000 4010
                                        4400
                                        4640 4650
					#Army Org
					1000 1010 1050 1060
					1500 1510 1520
					1300 1310 1320
					1260
					1270
					1900 1910 1920 1960
					#Land Docs
					6100 6110 6120 6160
					6200 6210 6220 6260
					6910 6920
					6010 6020
					6600 6610
					#Air Docs
					9030 9510 9520 9530
					9050 9060 9070
					#Secret Weapons
					7010 7060 7070
					7310 7320 7330					
                        }
  policy =
  { date              = { year = 0 month = march day = 0 }
    democratic        = 10
    political_left    = 9
    free_market       = 7
    freedom           = 9
    professional_army = 10
    defense_lobby     = 3
    interventionism   = 5
  }
  # #####################################
  # ARMY
  # #####################################
  landunit =
  { id       = { type = 8900 id = 1 }
    location = 207
    name     = "Armáda Ceské republiky"
    division =
    { id            = { type = 8900 id = 2 }
      name          = "4. brigáda rychlého nasazení"
      strength      = 100
      type          = mechanized
      model         = 2
    }
    division =
    { id            = { type = 8900 id = 3 }
      name          = "7. mechanizovaná brigáda"
      strength      = 100
      type          = cavalry
      model         = 2
    }
  }
  landunit =
  { id       = { type = 8900 id = 4 }
    location = 207
    name     = "Territorial Defense Forces HQ"
    division =
    { id       = { type = 8900 id = 5 }
      name     = "21st Territorial Defense Brigade"
      strength = 100
      type     = mechanized
      model    = 1
    }
  }
  # ####################################
  # AIR FORCE
  # ####################################
  airunit =
  { id       = { type = 8900 id = 100 }
    location = 207
    base     = 207
    name     = "Vzdusné síly ACR"
    division =
    { id       = { type = 8900 id = 101 }
      name     = "21. základna taktického letectva"
      type     = interceptor
      strength = 50
      model    = 1
    }
    division =
    { id       = { type = 8900 id = 103 }
      name     = "24. základna dopravního letectva"
      type     = transport_plane
      strength = 50
      model    = 1
    }
  }
}
