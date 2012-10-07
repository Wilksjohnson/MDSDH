
##############################
# Country definition for SAL #
##############################

#####################
# Country main data #
#####################

country = { tag = SAL
# Resource Reserves 
energy                 = 240
metal                  = 120
rare_materials         = 60
transports = 100
oil                    = 500
supplies               = 500
money                  = 10
manpower               = 11
capital                = 2079

policy = { date = { year = 0 month = january day = 0 }
	democratic        = 5 
	political_left    = 2 
	freedom           = 5 
	free_market       = 5 
	professional_army = 4 
	defense_lobby     = 5 
	interventionism   = 3 
	}
nationalprovinces   = { 2079 }
ownedprovinces      = { 2079 }
controlledprovinces = { 2079 }
techapps = {
#Industry:
5010 5020 5030
5040 5050
5070      5090
				#Army Equip:
				2200 2400 2500
				2600 2800
	#Army Org:
	1260 1300 1900
	1980
#Army Doc:
6010 6020 6100 6110
6160 6600 6610 6910
	#Secret Tech:
		7330
	}

diplomacy =  { relation = { tag = HON value = 100 } relation = { tag = USA value = 100 } }
SpyInfo = {  country = "SAL" NumberOfSpies = 2  }
	headofstate            = { type = 9 id = 345001 }
	headofgovernment       = { type = 9 id = 345002 }
	foreignminister        = { type = 9 id = 345003 }
	armamentminister       = { type = 9 id = 345004 }
	ministerofsecurity     = { type = 9 id = 345005 }
	ministerofintelligence = { type = 9 id = 345006 }
	chiefofstaff           = { type = 9 id = 345007 }
	chiefofarmy            = { type = 9 id = 345008 }
	chiefofnavy            = { type = 9 id = 345009 }
	chiefofair             = { type = 9 id = 345010 }

landunit = { id = { type = 21600 id = 70 }
	name     = "Ejercito del Salvador"
	location = 2079 
	Division =  { id = { type = 21600 id = 7000 } name = "I Brigada de Infantería" strength = 40 type = infantry model = 5 extra = anti_air brigade_model = 0 }
	}
}
