# #############################
# Country definition for CHI #
# #############################

country = {
	tag = CHI
	# Resource Reserves
	energy = 1000
	metal = 1000
	rare_materials = 500
	oil = 500
	supplies = 500
	money = 80
	manpower = 60
	capital = 1362
	transports = 100
	escorts = 0
	diplomacy = { }
	SpyInfo                = {  country = "CHI"  NumberOfSpies = 3  } 
   nationalprovinces      = {       
 1259 1260 1255 
  
 
 1333 1261 1303 1339 1334 1336 1340 1341 1319 1323 1322 1324 1325 1326 1316 1317 1344 1342 1337  1338 1345 1346 1347 1348  1357 1358  1359 1360 1354 1353 1318 1355 1309  1311 1312 1310  1304   1302  1258 1262 1257  1296 1292 1293 1297 1298  1305 1306 1291 1313 1307  1308  1356 1160 1349     1335    1314 1315    1267 1256   1320 1321  1299  1343  1300 1301 1350 1351 1352      
            
 1389 1390    1385 1386 1387 1388 
  
 
  1378   1365 1376 1377  1375 510 1380 1381 1382 1383  1369 1370 1373  1379 1367 1361 1374 1368  
      
  1241 1247 1246 1251  1242 1254  1331 1332  1252 1253 1248 1249 1250 1327  1243 1244 1245  1328 1329  1330   

 1202 1204 1212 1205 1199 1203 1200 1206 1213 1237  1207 1220 1218 1236 1201 1208 1209     1210 1211 1214   1215  1216 1235 1217 1197 1198   
            
 1269 1268 1270 1271 1264 1263 1272 1265 1266 1283 1284 1285   
       
 1294 1290 1286 1287 1288 1289 1295 
      
 1273 1279 1280 1281 1277 1274 1275 1282 
       
 1278 1276  
       
 1219 1238  1240 1239 
    
  1371 1372  
    
  1362 1364 1363  
  
  1384  } 
   ownedprovinces         = {  1361 1362 1363 1364  } 
   controlledprovinces    = {  1361 1362 1363 1364  } 
	techapps = {
		# Industry
		5010 5020 5030
		5040 5050 5060
		5070 5080 5090
		5110 5120 5130
		5140 5150 5160
		5170 5180 5190
		5210 5220 5230
		5240 5250 5260
		5270 5280 5290
		# Army Equip
		2200 2210 2220
		2230 2800 2810
		2820 2830 2600
		2610 2620 2630
		2700 2710 2720
		2730 2400 2410
		2420 2430 2300
		2310 2000 2010
		2500 2510 2520
		2530 # Army Org
		1900 1910 1920
		1930 1260 1270
		1700 1800 1810
		1820 1000 1010
		1500 1510 1200
		1210 1300 1310
		1320 1330 1400
		1410 1420 1430
		1600 1650 # Aircraft
		4100 4110 4120
		4000 4010 4020
		4400 4410 4640
		4800 4810 4820
		4700 4710 4720
		4750 4760 4770
		4900 4910 4920
		# Land Docs
		6930 6010 6020
		6600 6610 6100
		6110 6120 6130
		6140 6150 6160
		6170 6200 6210
		6220 6230 6240
		6250 6260 6270
		6300 6310 6320
		6330 6340 6350
		6360 6370 # Air Docs
		9040 9510 9520
		9530 9540 9050
		9060 9070 9100
		9110 9120 9130
		9140 9150 9180
		9190 9200 # Secret Weapons
		7010 7060 7070
		7080 7330 7310
		7320 # Navy Techs
		3000 3010 3020
		3030 3100 3700
		3710 3590 3850
		3860 3870 3880
		# Navy Doctrines
		8900 8910 8920
		8950 8960 8970
		8400 8410 8000
		8010 8020 8500
		8510 8520 8100
		8110 8120 8600
		8610 8620
	}
	policy = {
		date = { year = 0 month = march day = 0 }
		democratic = 9
		political_left = 6
		free_market = 7
		freedom = 8
		professional_army = 5
		defense_lobby = 4
		interventionism = 5
	}
	# ####################################
	# ARMY
	# ####################################
	landunit = {
		id = { type = 21000 id = 1 }
		location = 1362
		name = "Aviation and Special Forces Command"
		division = {
			experience = 10
			id = { type = 21000 id = 2 }
			name = "Special Forces Brigade"
			strength = 100
			type = bergsjaeger
			model = 0
			extra = engineer
			brigade_model = 4
		}
		division = {
			id = { type = 21000 id = 3 }
			name = "601st Air Cavalry Brigade"
			strength = 100
			type = militia
			model = 2
		}
		division = {
			id = { type = 21000 id = 4 }
			name = "603rd Air Cavalry Brigade"
			strength = 100
			type = militia
			model = 2
		}
	}
	landunit = {
		id = { type = 21000 id = 6 }
		location = 1362
		name = "Marine Corps Command"
		division = {
			id = { type = 21000 id = 7 }
			name = "66th Marine Brigade"
			strength = 100
			type = marine
			model = 0
		}
		division = {
			id = { type = 21000 id = 8 }
			name = "77th Marine Brigade"
			strength = 100
			type = marine
			model = 0
		}
		division = {
			id = { type = 21000 id = 9 }
			name = "99th Marine Brigade"
			strength = 100
			type = marine
			model = 0
		}
	}
	landunit = {
		id = { type = 21000 id = 10 }
		location = 1362
		name = "6th Army Corps"
		division = {
			id = { type = 21000 id = 11 }
			name = "Republic of China Army HQ"
			strength = 100
			type = hq
			model = 2
			extra = heavy_armor
			brigade_model = 3
		}
		division = {
			id = { type = 21000 id = 13 }
			name = "542nd Armor Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
		division = {
			id = { type = 21000 id = 14 }
			name = "584th Armor Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
                division = {
			id = { type = 21000 id = 12 }
			name = "269th Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 21000 id = 15 }
			name = "3rd Infantry Brigade"
			strength = 100
			type = mechanized
			model = 2
		}
	}
	landunit = {
		id = { type = 21000 id = 16 }
		location = 1361
		name = "8th Army Corps"
                division = {
			id = { type = 21000 id = 18 }
			name = "564th Armor Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
		division = {
			id = { type = 21000 id = 17 }
			name = "298th Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 21000 id = 19 }
			name = "4th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 2
		}
	}
	landunit = {
		id = { type = 21000 id = 20 }
		location = 1363
		name = "10th Army Corps"
		division = {
			id = { type = 21000 id = 22 }
			name = "586th Armor Brigade"
			strength = 100
			type = light_armor
			model = 1
		}
                division = {
			id = { type = 21000 id = 21 }
			name = "200th Mechanized Brigade"
			strength = 100
			type = cavalry
			model = 2
		}
		division = {
			id = { type = 21000 id = 23 }
			name = "5th Infantry Brigade"
			strength = 100
			type = mechanized
			model = 2
		}
	}
	landunit = {
		id = { type = 21000 id = 24 }
		location = 1362
		name = "Hua-Tung Defense Command"
		division = {
			id = { type = 21000 id = 25 }
			name = "1st Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
		division = {
			id = { type = 21000 id = 26 }
			name = "2nd Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
	}
	landunit = {
		id = { type = 21000 id = 27 }
		location = 1362
		name = "Kinmen Defense Command"
		division = {
			id = { type = 21000 id = 28 }
			name = "3rd Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
		division = {
			id = { type = 21000 id = 29 }
			name = "4th Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
		division = {
			id = { type = 21000 id = 30 }
			name = "5th Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
		division = {
			id = { type = 21000 id = 31 }
			name = "5th Armored Brigade"
			strength = 100
			type = light_armor
			model = 1
			locked = yes
		}
	}
	landunit = {
		id = { type = 21000 id = 32 }
		location = 1362
		name = "Matzu Defense Command"
		division = {
			id = { type = 21000 id = 33 }
			name = "6th Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
		division = {
			id = { type = 21000 id = 34 }
			name = "7th Infantry Brigade"
			strength = 100
			type = garrison
			model = 0
			locked = yes
		}
	}
	# ####################################
	# NAVY
	# ####################################
	navalunit = {
		id = { type = 21000 id = 200 }
		location = 1362
		base = 1362
		name = "124th Attack Squadron"
		division = {
			id = { type = 21000 id = 201 }
			name = "Kang Ding"
			type = destroyer
			model = 6
		}
		division = {
			id = { type = 21000 id = 203 }
			name = "Si Ning"
			type = destroyer
			model = 6
		}
		division = {
			id = { type = 21000 id = 204 }
			name = "Wu Chang"
			type = destroyer
			model = 6
		}
		division = {
			id = { type = 21000 id = 205 }
			name = "Di Hua"
			type = destroyer
			model = 6
		}
		division = {
			id = { type = 21000 id = 206 }
			name = "Kun Ming"
			type = destroyer
			model = 6
		}
		division = {
			id = { type = 21000 id = 207 }
			name = "Cheng Du"
			type = destroyer
			model = 6
		}
	}
	navalunit = {
		id = { type = 21000 id = 208 }
		location = 1362
		base = 1362
		name = "146th Attack Squadron"
		division = {
			id = { type = 21000 id = 209 }
			name = "Cheng Kung"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 210 }
			name = "Cheng Ho"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 211 }
			name = "Chi Kuang"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 212 }
			name = "Yueh Fei"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 213 }
			name = "Tzu I"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 214 }
			name = "Pan Chao"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 215 }
			name = "Chang Chien"
			type = destroyer
			model = 5
		}
		division = {
			id = { type = 21000 id = 216 }
			name = "Tian Dan"
			type = destroyer
			model = 5
		}
	}
	navalunit = {
		id = { type = 21000 id = 217 }
		location = 1362
		base = 1362
		name = "131st Patrol Squadron"
		division = {
			id = { type = 21000 id = 218 }
			name = "Chien Yang"
			type = light_cruiser
			model = 3
		}
		division = {
			id = { type = 21000 id = 219 }
			name = "Liao Yang"
			type = light_cruiser
			model = 3
		}
		division = {
			id = { type = 21000 id = 220 }
			name = "Shao Yang"
			type = light_cruiser
			model = 3
		}
		division = {
			id = { type = 21000 id = 221 }
			name = "Te Yang"
			type = light_cruiser
			model = 3
		}
	}
	navalunit = {
		id = { type = 21000 id = 234 }
		location = 1362
		base = 1362
		name = "168th Patrol Squadron"
		division = {
			id = { type = 21000 id = 235 }
			name = "Chen Yang"
			type = light_cruiser
			model = 3
		}
		division = {
			id = { type = 21000 id = 236 }
			name = "Shen Yang"
			type = light_cruiser
			model = 3
		}
		division = {
			id = { type = 21000 id = 237 }
			name = "Yun Yang"
			type = light_cruiser
			model = 3
		}
		division = {
			id = { type = 21000 id = 238 }
			name = "Chi Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 239 }
			name = "Fong Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 240 }
			name = "Fen Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 241 }
			name = "Lan Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 242 }
			name = "Hae Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 243 }
			name = "Hwai Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 244 }
			name = "Ning Yang"
			type = destroyer
			model = 3
		}
		division = {
			id = { type = 21000 id = 245 }
			name = "Yi Yang"
			type = destroyer
			model = 3
		}
	}
	navalunit = {
		id = { type = 21000 id = 246 }
		location = 1362
		base = 1362
		name = "27th Amphibious Squadron"
		division = {
			id = { type = 21000 id = 247 }
			name = "1st Transport Fleet"
			type = transport
			model = 3
		}
		division = {
			id = { type = 21000 id = 251 }
			name = "2nd Transport Fleet"
			type = transport
			model = 3
		}
		division = {
			id = { type = 21000 id = 256 }
			name = "3rd Transport Fleet"
			type = transport
			model = 3
		}
	}
	# ####################################
	# AIR FORCE
	# ####################################
	airunit = {
		id = { type = 21000 id = 100 }
		location = 1362
		base = 1362
		name = "401th Tactical Fighter Wing"
		division = {
			id = { type = 21000 id = 101 }
			name = "367th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 102 }
			name = "345th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 103 }
			name = "382nd Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
	}
	airunit = {
		id = { type = 21000 id = 104 }
		location = 1362
		base = 1362
		name = "427th Tactical Fighter Wing"
		division = {
			id = { type = 21000 id = 105 }
			name = "288th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 106 }
			name = "210th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 107 }
			name = "233rd Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
	}
	airunit = {
		id = { type = 21000 id = 108 }
		location = 1362
		base = 1362
		name = "443rd Tactical Fighter Wing"
		division = {
			id = { type = 21000 id = 109 }
			name = "109th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 110 }
			name = "55th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 111 }
			name = "173rd Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
	}
	airunit = {
		id = { type = 21000 id = 112 }
		location = 1362
		base = 1362
		name = "455th Tactical Fighter Wing"
		division = {
			id = { type = 21000 id = 113 }
			name = "453rd Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 114 }
			name = "432nd Fighter Squadron"
			type = interceptor
			strength = 100
			model = 8
		}
		division = {
			id = { type = 21000 id = 115 }
			name = "499th Fighter Squadron"
			type = multi_role
			strength = 100
			model = 7
		}
	}
	airunit = {
		id = { type = 21000 id = 116 }
		location = 1362
		base = 1362
		name = "737th Tactical Fighter Wing"
		division = {
			id = { type = 21000 id = 117 }
			name = "444th Fighter Squadron"
			type = multi_role
			strength = 100
			model = 7
		}
		division = {
			id = { type = 21000 id = 118 }
			name = "421st Fighter Squadron"
			type = interceptor
			strength = 100
			model = 7
		}
		division = {
			id = { type = 21000 id = 119 }
			name = "427th Fighter Squadron"
			type = interceptor
			strength = 100
			model = 7
		}
	}
	airunit = {
		id = { type = 21000 id = 120 }
		location = 1362
		base = 1362
		name = "1st Transport Wing"
		division = {
			id = { type = 21000 id = 121 }
			name = "1st Transport Regiment"
			type = transport_plane
			strength = 100
			model = 2
		}
	}
}
