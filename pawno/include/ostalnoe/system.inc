RandomPrize(playerid, id)
{
	if(id == 1)
	{
		new prize1 = random(28);
		switch(prize1)
		{
			case 0..9:
			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[599][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 599;
				gConteiner[playerid][PrizeItem] = 1288;
				contprizer[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[592][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 592;
				gConteiner[playerid][PrizeItem] = 19472;
				contprizer[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[316][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 316;
				gConteiner[playerid][PrizeItem] = 13646;
				contprizer[playerid] = 1;
			}
		}
		new prize2 = random(30);
		switch(prize2)
		{
			case 0..5:
			{
				strmid(gConteiner[id][pPrize2], ItemsInfo[636][ItemName2], 0, 60);
				gConteiner[playerid][pPrize2Col] = 1;
				gConteiner[playerid][PrizeItems2] = 636;
				gConteiner[playerid][PrizeItem2] = 489;
				contprizer2[playerid] = 1;
			}
			case 6..11:
  			{
				strmid(gConteiner[id][pPrize2], ItemsInfo[367][ItemName2], 0, 60);
				gConteiner[playerid][pPrize2Col] = 1;
				gConteiner[playerid][PrizeItems2] = 367;
				gConteiner[playerid][PrizeItem2] = 11736;
				contprizer2[playerid] = 1;
    		}
			case 12..30:
			{
			    switch(random(20))
			    {
					case 0..11:
					{
					    new prizes = 1+random(10);
						strmid(gConteiner[id][pPrize2], ItemsInfo[346][ItemName2], 0, 60);
						gConteiner[playerid][pPrize2Col] = prizes;
						gConteiner[playerid][PrizeItems2] = 346;
						gConteiner[playerid][PrizeItem2] = 16134;
						contprizer2[playerid] = 1;
					}
					case 12..20:
					{
					    new prizes = 1+random(13);
						strmid(gConteiner[id][pPrize2], ItemsInfo[345][ItemName2], 0, 60);
						gConteiner[playerid][pPrize2Col] = prizes;
						gConteiner[playerid][PrizeItems2] = 345;
						gConteiner[playerid][PrizeItem2] = 2936;
						contprizer2[playerid] = 1;
					}
				}
			}
		}
		new prize3 = random(28);
		switch(prize3)
		{
			case 0..9:
			{
			    new prizes = 1+random(80);
				strmid(gConteiner[id][pPrize3], ItemsInfo[354][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = prizes;
				gConteiner[playerid][PrizeItems3] = 354;
				gConteiner[playerid][PrizeItem3] = 826;
				contprizer3[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize3], ItemsInfo[591][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = 1;
				gConteiner[playerid][PrizeItems3] = 591;
				gConteiner[playerid][PrizeItem3] = 2226;
				contprizer3[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize3], ItemsInfo[655][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = 1;
				gConteiner[playerid][PrizeItems3] = 655;
				gConteiner[playerid][PrizeItem3] = 339;
				contprizer3[playerid] = 1;
			}
		}
		new prize4 = random(28);
		switch(prize4)
		{
			case 0..9:
			{
			    new prizes = 1+random(300);
				strmid(gConteiner[id][pPrize4], ItemsInfo[340][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = prizes;
				gConteiner[playerid][PrizeItems4] = 340;
				gConteiner[playerid][PrizeItem4] = 1274;
				contprizer4[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize4], ItemsInfo[392][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = 1;
				gConteiner[playerid][PrizeItems4] = 392;
				gConteiner[playerid][PrizeItem4] = 18872;
				contprizer4[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize4], ItemsInfo[623][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = 1;
				gConteiner[playerid][PrizeItems4] = 623;
				gConteiner[playerid][PrizeItem4] = 19352;
				contprizer4[playerid] = 1;
			}
		}
		new prize5 = random(28);
		switch(prize5)
		{
			case 0..9:
			{
			    new prizes = 1+random(100);
				strmid(gConteiner[id][pPrize5], ItemsInfo[316][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 316;
				gConteiner[playerid][PrizeItem5] = 13646;
				contprizer5[playerid] = 1;
			}
			case 10..18:
  			{
  			    new prizes = 1+random(100);
				strmid(gConteiner[id][pPrize5], ItemsInfo[574][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 574;
				gConteiner[playerid][PrizeItem5] = 324;
				contprizer5[playerid] = 1;
    		}
			case 19..28:
			{
			    new prizes = 1+random(200);
				strmid(gConteiner[id][pPrize5], ItemsInfo[450][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 450;
				gConteiner[playerid][PrizeItem5] = 356;
				contprizer5[playerid] = 1;
			}
		}
		new prize6 = random(26);
		switch(prize6)
		{
			case 0..9:
			{
			    new prizes = 1+random(20);
				strmid(gConteiner[id][pPrize6], ItemsInfo[525][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = prizes;
				gConteiner[playerid][PrizeItems6] = 525;
				gConteiner[playerid][PrizeItem6] = 1575;
				contprizer6[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize6], ItemsInfo[516][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = 1;
				gConteiner[playerid][PrizeItems6] = 516;
				gConteiner[playerid][PrizeItem6] = 18910;
				contprizer6[playerid] = 1;
    		}
			case 19..26:
			{
			    new prizes = 1+random(20);
				strmid(gConteiner[id][pPrize6], ItemsInfo[524][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = prizes;
				gConteiner[playerid][PrizeItems6] = 524;
				gConteiner[playerid][PrizeItem6] = 2709;
				contprizer6[playerid] = 1;
			}
		}
	}
	if(id == 3)
	{
		new prize1 = random(28);
		switch(prize1)
		{
			case 0..9:
			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[357][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 357;
				gConteiner[playerid][PrizeItem] = 338;
				contprizer[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[337][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 337;
				gConteiner[playerid][PrizeItem] = 2045;
				contprizer[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[323][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 2;
				gConteiner[playerid][PrizeItems] = 323;
				gConteiner[playerid][PrizeItem] = 1895;
				contprizer[playerid] = 1;
			}
		}
		new prize2 = random(20);
		switch(prize2)
		{
			case 0..1:
			{
				strmid(gConteiner[id][pPrize2], ItemsInfo[374][ItemName2], 0, 60);
				gConteiner[playerid][pPrize2Col] = 1;
				gConteiner[playerid][PrizeItems2] = 374;
				gConteiner[playerid][PrizeItem2] = 495;
				contprizer2[playerid] = 1;
			}
			case 2..20:
			{
			    switch(random(20))
			    {
					case 0..11:
					{
					    new prizes = 1+random(10);
						strmid(gConteiner[id][pPrize2], ItemsInfo[345][ItemName2], 0, 60);
						gConteiner[playerid][pPrize2Col] = prizes;
						gConteiner[playerid][PrizeItems2] = 345;
						gConteiner[playerid][PrizeItem2] = 16134;
						contprizer2[playerid] = 1;
					}
					case 12..20:
					{
					    new prizes = 1+random(13);
						strmid(gConteiner[id][pPrize2], ItemsInfo[345][ItemName2], 0, 60);
						gConteiner[playerid][pPrize2Col] = prizes;
						gConteiner[playerid][PrizeItems2] = 345;
						gConteiner[playerid][PrizeItem2] = 2936;
						contprizer2[playerid] = 1;
					}
				}
			}
		}
		new prize3 = random(28);
		switch(prize3)
		{
			case 0..9:
			{
			    new prizes = 1+random(80);
				strmid(gConteiner[id][pPrize3], ItemsInfo[354][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = prizes;
				gConteiner[playerid][PrizeItems3] = 354;//cotton
				gConteiner[playerid][PrizeItem3] = 826;
				contprizer3[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize3], ItemsInfo[667][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = 1;
				gConteiner[playerid][PrizeItems3] = 667;
				gConteiner[playerid][PrizeItem3] = 18636;//police cap
				contprizer3[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize3], ItemsInfo[383][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = 1;
				gConteiner[playerid][PrizeItems3] = 383;//подарок
				gConteiner[playerid][PrizeItem3] = 19057;
				contprizer3[playerid] = 1;
			}
		}
		new prize4 = random(28);
		switch(prize4)
		{
			case 0..9:
			{
			    new prizes = 1+random(100);
				strmid(gConteiner[id][pPrize4], ItemsInfo[340][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = prizes;
				gConteiner[playerid][PrizeItems4] = 340;
				gConteiner[playerid][PrizeItem4] = 1274;
				contprizer4[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize4], ItemsInfo[392][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = 1;
				gConteiner[playerid][PrizeItems4] = 392;
				gConteiner[playerid][PrizeItem4] = 18872;
				contprizer4[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize4], ItemsInfo[623][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = 1;
				gConteiner[playerid][PrizeItems4] = 623;
				gConteiner[playerid][PrizeItem4] = 19352;
				contprizer4[playerid] = 1;
			}
		}
		new prize5 = random(28);
		switch(prize5)
		{
			case 0..9:
			{
			    new prizes = 1+random(30);
				strmid(gConteiner[id][pPrize5], ItemsInfo[575][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 675;
				gConteiner[playerid][PrizeItem5] = 19517;
				contprizer5[playerid] = 1;
			}
			case 10..18:
  			{
  			    new prizes = 1+random(50);
				strmid(gConteiner[id][pPrize5], ItemsInfo[316][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 316;
				gConteiner[playerid][PrizeItem5] = 13646;
				contprizer5[playerid] = 1;
    		}
			case 19..28:
			{
			    new prizes = 1+random(100);
				strmid(gConteiner[id][pPrize5], ItemsInfo[450][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 450;
				gConteiner[playerid][PrizeItem5] = 356;
				contprizer5[playerid] = 1;
			}
		}
		new prize6 = random(26);
		switch(prize6)
		{
			case 0..9:
			{
			    new prizes = 1+random(5);
				strmid(gConteiner[id][pPrize6], ItemsInfo[315][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = prizes;
				gConteiner[playerid][PrizeItems6] = 315;
				gConteiner[playerid][PrizeItem6] = 1895; //silverrulet
				contprizer6[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize6], ItemsInfo[347][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = 1;
				gConteiner[playerid][PrizeItems6] = 347;
				gConteiner[playerid][PrizeItem6] = 19315;//тушка оленя
				contprizer6[playerid] = 1;
    		}
			case 19..26:
			{
				strmid(gConteiner[id][pPrize6], ItemsInfo[665][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = 1;
				gConteiner[playerid][PrizeItems6] = 665;
				gConteiner[playerid][PrizeItem6] = 19055;//podarok aks
				contprizer6[playerid] = 1;
			}
		}
	}
	if(id == 4)//business
	{
		new prize1 = random(28);
		switch(prize1)
		{
			case 0..9:
			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[668][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 668; //maska CJ
				gConteiner[playerid][PrizeItem] = 18963;
				contprizer[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[605][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 1;
				gConteiner[playerid][PrizeItems] = 605; //molot
				gConteiner[playerid][PrizeItem] = 19631;
				contprizer[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize1], ItemsInfo[316][ItemName2], 0, 60);
				gConteiner[playerid][pPrize1Col] = 3;
				gConteiner[playerid][PrizeItems] = 316; //gold rulet
				gConteiner[playerid][PrizeItem] = 13646;
				contprizer[playerid] = 1;
			}
		}
		new prize2 = random(20);
		switch(prize2)
		{
			case 0..1:
			{
				strmid(gConteiner[id][pPrize2], ItemsInfo[644][ItemName2], 0, 60);
				gConteiner[playerid][pPrize2Col] = 1;
				gConteiner[playerid][PrizeItems2] = 644;
				gConteiner[playerid][PrizeItem2] = 487;
				contprizer2[playerid] = 1;
			}
			case 2..20:
			{
			    switch(random(20))
			    {
					case 0..11:
					{
					    new prizes = 1+random(100);
						strmid(gConteiner[id][pPrize2], ItemsInfo[346][ItemName2], 0, 60);
						gConteiner[playerid][pPrize2Col] = prizes;
						gConteiner[playerid][PrizeItems2] = 346;
						gConteiner[playerid][PrizeItem2] = 16134;
						contprizer2[playerid] = 1;
					}
					case 12..20:
					{
					    new prizes = 1+random(100);
						strmid(gConteiner[id][pPrize2], ItemsInfo[345][ItemName2], 0, 60);
						gConteiner[playerid][pPrize2Col] = prizes;
						gConteiner[playerid][PrizeItems2] = 345;
						gConteiner[playerid][PrizeItem2] = 2936;
						contprizer2[playerid] = 1;
					}
				}
			}
		}
		new prize3 = random(28);
		switch(prize3)
		{
			case 0..9:
			{
			    new prizes = 1+random(80);
				strmid(gConteiner[id][pPrize3], ItemsInfo[354][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = prizes;
				gConteiner[playerid][PrizeItems3] = 354;//cotton
				gConteiner[playerid][PrizeItem3] = 826;
				contprizer3[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize3], ItemsInfo[667][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = 1;
				gConteiner[playerid][PrizeItems3] = 667;
				gConteiner[playerid][PrizeItem3] = 18636;//police cap
				contprizer3[playerid] = 1;
    		}
			case 19..28:
			{
			    new prizes = 1+random(2);
				strmid(gConteiner[id][pPrize3], ItemsInfo[603][ItemName2], 0, 60);
				gConteiner[playerid][pPrize3Col] = prizes;
				gConteiner[playerid][PrizeItems3] = 603;//launch stick
				gConteiner[playerid][PrizeItem3] = 1649;
				contprizer3[playerid] = 1;
			}
		}
		new prize4 = random(28);
		switch(prize4)
		{
			case 0..9:
			{
			    new prizes = 1+random(1000);
				strmid(gConteiner[id][pPrize4], ItemsInfo[340][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = prizes;
				gConteiner[playerid][PrizeItems4] = 340;
				gConteiner[playerid][PrizeItem4] = 1274;
				contprizer4[playerid] = 1;
			}
			case 10..18:
  			{
  			    new prizes = 1+random(3);
				strmid(gConteiner[id][pPrize4], ItemsInfo[599][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = prizes;
				gConteiner[playerid][PrizeItems4] = 599;
				gConteiner[playerid][PrizeItem4] = 1288;
				contprizer4[playerid] = 1;
    		}
			case 19..28:
			{
				strmid(gConteiner[id][pPrize4], ItemsInfo[623][ItemName2], 0, 60);
				gConteiner[playerid][pPrize4Col] = 1;
				gConteiner[playerid][PrizeItems4] = 623;
				gConteiner[playerid][PrizeItem4] = 19352;
				contprizer4[playerid] = 1;
			}
		}
		new prize5 = random(28);
		switch(prize5)
		{
			case 0..9:
			{
			    new prizes = 1+random(150);
				strmid(gConteiner[id][pPrize5], ItemsInfo[445][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 445;
				gConteiner[playerid][PrizeItem5] = 348;
				contprizer5[playerid] = 1;
			}
			case 10..18:
  			{
  			    new prizes = 1+random(150);
				strmid(gConteiner[id][pPrize5], ItemsInfo[447][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 447;
				gConteiner[playerid][PrizeItem5] = 349;
				contprizer5[playerid] = 1;
    		}
			case 19..28:
			{
			    new prizes = 1+random(300);
				strmid(gConteiner[id][pPrize5], ItemsInfo[450][ItemName2], 0, 60);
				gConteiner[playerid][pPrize5Col] = prizes;
				gConteiner[playerid][PrizeItems5] = 450;
				gConteiner[playerid][PrizeItem5] = 356;
				contprizer5[playerid] = 1;
			}
		}
		new prize6 = random(26);
		switch(prize6)
		{
			case 0..9:
			{
			    new prizes = 1+random(10);
				strmid(gConteiner[id][pPrize6], ItemsInfo[316][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = prizes;
				gConteiner[playerid][PrizeItems6] = 316;
				gConteiner[playerid][PrizeItem6] = 13646; //голд рулетка
				contprizer6[playerid] = 1;
			}
			case 10..18:
  			{
				strmid(gConteiner[id][pPrize6], ItemsInfo[406][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = 1;
				gConteiner[playerid][PrizeItems6] = 406;
				gConteiner[playerid][PrizeItem6] = 19085;//повязка на глаз
				contprizer6[playerid] = 1;
    		}
			case 19..26:
			{
			    new prizes = 1+random(20);
				strmid(gConteiner[id][pPrize6], ItemsInfo[666][ItemName2], 0, 60);
				gConteiner[playerid][pPrize6Col] = prizes;
				gConteiner[playerid][PrizeItems6] = 666;
				gConteiner[playerid][PrizeItem6] = 11704;//маска демона
				contprizer6[playerid] = 1;
			}
		}
	}
	SaveAccount(id);
	return 1;
}
///stocks
stock CreateContainerTD(playerid)
{
	td_containertd[0] = TextDrawCreate(203.806732, 146.416702, "ld_beat:chit");
	TextDrawLetterSize(td_containertd[0], 0.000000, 0.000000);
	TextDrawTextSize(td_containertd[0], 23.426069, 25.666658);
	TextDrawAlignment(td_containertd[0], 1);
	TextDrawColor(td_containertd[0], -10270721);
	TextDrawSetShadow(td_containertd[0], 0);
	TextDrawSetOutline(td_containertd[0], 0);
	TextDrawFont(td_containertd[0], 4);
	TextDrawSetPreviewModel(td_containertd[0], 2729);
	TextDrawSetPreviewRot(td_containertd[0], 0.000000, 0.000000, 0.000000, 1.000000);

	td_containertd[1] = TextDrawCreate(203.869689, 278.666809, "ld_beat:chit");
	TextDrawLetterSize(td_containertd[1], 0.000000, 0.000000);
	TextDrawTextSize(td_containertd[1], 23.426069, 25.666658);
	TextDrawAlignment(td_containertd[1], 1);
	TextDrawColor(td_containertd[1], -10270721);
	TextDrawSetShadow(td_containertd[1], 0);
	TextDrawSetOutline(td_containertd[1], 0);
	TextDrawFont(td_containertd[1], 4);
	TextDrawSetPreviewModel(td_containertd[1], 2729);
	TextDrawSetPreviewRot(td_containertd[1], 0.000000, 0.000000, 0.000000, 1.000000);

	td_containertd[2] = TextDrawCreate(426.012145, 147.250106, "ld_beat:chit");
	TextDrawLetterSize(td_containertd[2], 0.000000, 0.000000);
	TextDrawTextSize(td_containertd[2], 23.426069, 25.666658);
	TextDrawAlignment(td_containertd[2], 1);
	TextDrawColor(td_containertd[2], -10270721);
	TextDrawSetShadow(td_containertd[2], 0);
	TextDrawSetOutline(td_containertd[2], 0);
	TextDrawFont(td_containertd[2], 4);
	TextDrawSetPreviewModel(td_containertd[2], 2729);
	TextDrawSetPreviewRot(td_containertd[2], 0.000000, 0.000000, 0.000000, 1.000000);

	td_containertd[3] = TextDrawCreate(425.606750, 278.916961, "ld_beat:chit");
	TextDrawLetterSize(td_containertd[3], 0.000000, 0.000000);
	TextDrawTextSize(td_containertd[3], 23.426069, 25.666658);
	TextDrawAlignment(td_containertd[3], 1);
	TextDrawColor(td_containertd[3], -10270721);
	TextDrawSetShadow(td_containertd[3], 0);
	TextDrawSetOutline(td_containertd[3], 0);
	TextDrawFont(td_containertd[3], 4);
	TextDrawSetPreviewModel(td_containertd[3], 2729);
	TextDrawSetPreviewRot(td_containertd[3], 0.000000, 0.000000, 0.000000, 1.000000);

	td_containertd[4] = TextDrawCreate(447.095214, 160.750000, "usebox");
	TextDrawLetterSize(td_containertd[4], 0.000000, 14.414258);
	TextDrawTextSize(td_containertd[4], 206.023437, 0.000000);
	TextDrawAlignment(td_containertd[4], 1);
	TextDrawColor(td_containertd[4], 0);
	TextDrawUseBox(td_containertd[4], true);
	TextDrawBoxColor(td_containertd[4], -10270721);
	TextDrawSetShadow(td_containertd[4], 0);
	TextDrawSetOutline(td_containertd[4], 0);
	TextDrawFont(td_containertd[4], 0);

	td_containertd[5] = TextDrawCreate(441.004394, 153.166656, "usebox");
	TextDrawLetterSize(td_containertd[5], 0.000000, 16.081483);
	TextDrawTextSize(td_containertd[5], 213.519775, 0.000000);
	TextDrawAlignment(td_containertd[5], 1);
	TextDrawColor(td_containertd[5], 134744217);
	TextDrawUseBox(td_containertd[5], true);
	TextDrawBoxColor(td_containertd[5], 286529023);
	TextDrawSetShadow(td_containertd[5], 0);
	TextDrawSetOutline(td_containertd[5], 0);
	TextDrawFont(td_containertd[5], 0);

	td_containertd[6] = TextDrawCreate(268.931243, 155.166687, "CONTAINER");
	TextDrawLetterSize(td_containertd[6], 0.331932, 1.524166);
	TextDrawAlignment(td_containertd[6], 1);
	TextDrawColor(td_containertd[6], -1);
	TextDrawSetShadow(td_containertd[6], 0);
	TextDrawSetOutline(td_containertd[6], 0);
	TextDrawBackgroundColor(td_containertd[6], 51);
	TextDrawFont(td_containertd[6], 1);
	TextDrawSetProportional(td_containertd[6], 1);

	td_containertd[7] = TextDrawCreate(328.496795, 155.000045, "");
	TextDrawLetterSize(td_containertd[7], 0.331932, 1.524166);
	TextDrawAlignment(td_containertd[7], 1);
	TextDrawColor(td_containertd[7], -10205185);
	TextDrawSetShadow(td_containertd[7], 0);
	TextDrawSetOutline(td_containertd[7], 0);
	TextDrawBackgroundColor(td_containertd[7], 51);
	TextDrawFont(td_containertd[7], 1);
	TextDrawSetProportional(td_containertd[7], 1);

	td_container[playerid][0] = CreatePlayerTextDraw(playerid, 239.414352, 182.583343, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][0], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][0], 45.915084, 50.166656);
	PlayerTextDrawAlignment(playerid, td_container[playerid][0], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][0], 80);
	PlayerTextDrawUseBox(playerid, td_container[playerid][0], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][0], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][0], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][0], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][0], 5);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][0], true);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][0], 2729);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][0], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][1] = CreatePlayerTextDraw(playerid, 303.665100, 182.416671, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][1], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][1], 45.915084, 50.166656);
	PlayerTextDrawAlignment(playerid, td_container[playerid][1], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][1], 80);
	PlayerTextDrawUseBox(playerid, td_container[playerid][1], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][1], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][1], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][1], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][1], 5);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][1], true);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][1], 2729);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][1], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][2] = CreatePlayerTextDraw(playerid, 368.853332, 182.250000, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][2], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][2], 45.915084, 50.166656);
	PlayerTextDrawAlignment(playerid, td_container[playerid][2], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][2], 80);
	PlayerTextDrawUseBox(playerid, td_container[playerid][2], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][2], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][2], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][2], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][2], 5);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][2], true);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][2], 2729);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][2], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][3] = CreatePlayerTextDraw(playerid, 239.072052, 242.333282, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][3], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][3], 45.915084, 50.166656);
	PlayerTextDrawAlignment(playerid, td_container[playerid][3], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][3], 80);
	PlayerTextDrawUseBox(playerid, td_container[playerid][3], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][3], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][3], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][3], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][3], 5);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][3], true);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][3], 2729);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][3], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][4] = CreatePlayerTextDraw(playerid, 303.791168, 240.999954, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][4], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][4], 45.915084, 50.166656);
	PlayerTextDrawAlignment(playerid, td_container[playerid][4], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][4], 80);
	PlayerTextDrawUseBox(playerid, td_container[playerid][4], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][4], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][4], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][4], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][4], 5);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][4], true);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][4], 2729);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][4], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][5] = CreatePlayerTextDraw(playerid, 368.979461, 240.833312, "LD_SPAC:white");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][5], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][5], 45.915084, 50.166656);
	PlayerTextDrawAlignment(playerid, td_container[playerid][5], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][5], 80);
	PlayerTextDrawUseBox(playerid, td_container[playerid][5], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][5], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][5], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][5], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][5], 5);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][5], true);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][5], 2729);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][5], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][6] = CreatePlayerTextDraw(playerid, 286.455261, 187.916656, "prize1");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][6], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][6], -46.852119, 43.749980);
	PlayerTextDrawAlignment(playerid, td_container[playerid][6], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][6], -1);
	PlayerTextDrawUseBox(playerid, td_container[playerid][6], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][6], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][6], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][6], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][6], 5);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][6], 0);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][6], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][7] = CreatePlayerTextDraw(playerid, 306.476104, 185.916671, "prize2");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][7], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][7], 39.824295, 43.749980);
	PlayerTextDrawAlignment(playerid, td_container[playerid][7], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][7], -1);
	PlayerTextDrawUseBox(playerid, td_container[playerid][7], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][7], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][7], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][7], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][7], 5);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][7], 0);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][7], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][8] = CreatePlayerTextDraw(playerid, 372.132232, 185.750000, "prize3");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][8], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][8], 39.824295, 43.749980);
	PlayerTextDrawAlignment(playerid, td_container[playerid][8], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][8], -1);
	PlayerTextDrawUseBox(playerid, td_container[playerid][8], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][8], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][8], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][8], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][8], 5);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][8], 0);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][8], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][9] = CreatePlayerTextDraw(playerid, 242.414688, 245.083282, "prize4");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][9], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][9], 39.824295, 43.749980);
	PlayerTextDrawAlignment(playerid, td_container[playerid][9], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][9], -1);
	PlayerTextDrawUseBox(playerid, td_container[playerid][9], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][9], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][9], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][9], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][9], 5);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][9], 0);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][9], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][10] = CreatePlayerTextDraw(playerid, 307.133819, 244.916610, "prize5");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][10], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][10], 39.824295, 43.749980);
	PlayerTextDrawAlignment(playerid, td_container[playerid][10], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][10], -1);
	PlayerTextDrawUseBox(playerid, td_container[playerid][10], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][10], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][10], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][10], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][10], 5);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][10], 0);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][10], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][11] = CreatePlayerTextDraw(playerid, 372.321472, 244.166610, "prize6");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][11], 0.000000, 0.000000);
	PlayerTextDrawTextSize(playerid, td_container[playerid][11], 39.824295, 43.749980);
	PlayerTextDrawAlignment(playerid, td_container[playerid][11], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][11], -1);
	PlayerTextDrawUseBox(playerid, td_container[playerid][11], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][11], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][11], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][11], 0);
	PlayerTextDrawFont(playerid, td_container[playerid][11], 5);
	PlayerTextDrawSetPreviewModel(playerid, td_container[playerid][11], 0);
	PlayerTextDrawSetPreviewRot(playerid, td_container[playerid][11], 0.000000, 0.000000, 0.000000, 1.000000);

	td_container[playerid][12] = CreatePlayerTextDraw(playerid, 239.882873, 221.083343, "");//text1
	PlayerTextDrawLetterSize(playerid, td_container[playerid][12], 0.101888, 0.865000);
	PlayerTextDrawAlignment(playerid, td_container[playerid][12], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][12], 0x19ff00FF);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][12], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][12], 1);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][12], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][12], 1);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][12], 1);

	td_container[playerid][13] = CreatePlayerTextDraw(playerid, 304.133422, 220.916656, "");//text2
	PlayerTextDrawLetterSize(playerid, td_container[playerid][13], 0.101888, 0.865000);
	PlayerTextDrawAlignment(playerid, td_container[playerid][13], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][13], 0x19ff00FF);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][13], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][13], 1);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][13], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][13], 1);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][13], 1);

	td_container[playerid][14] = CreatePlayerTextDraw(playerid, 372.600830, 220.749938, "");//text3
	PlayerTextDrawLetterSize(playerid, td_container[playerid][14], 0.101888, 0.865000);
	PlayerTextDrawAlignment(playerid, td_container[playerid][14], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][14], 0x19ff00FF);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][14], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][14], 1);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][14], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][14], 1);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][14], 1);

	td_container[playerid][15] = CreatePlayerTextDraw(playerid, 241.477523, 281.833435, "");//text4
	PlayerTextDrawLetterSize(playerid, td_container[playerid][15], 0.101888, 0.865000);
	PlayerTextDrawAlignment(playerid, td_container[playerid][15], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][15], 0x19ff00FF);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][15], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][15], 1);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][15], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][15], 1);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][15], 1);

	td_container[playerid][16] = CreatePlayerTextDraw(playerid, 305.727874, 280.500061, "");//text5
	PlayerTextDrawLetterSize(playerid, td_container[playerid][16], 0.101888, 0.865000);
	PlayerTextDrawAlignment(playerid, td_container[playerid][16], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][16], 0x19ff00FF);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][16], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][16], 1);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][16], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][16], 1);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][16], 1);

	td_container[playerid][17] = CreatePlayerTextDraw(playerid, 369.978454, 280.916717, "");//text6
	PlayerTextDrawLetterSize(playerid, td_container[playerid][17], 0.101888, 0.865000);
	PlayerTextDrawAlignment(playerid, td_container[playerid][17], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][17], 0x19ff00FF);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][17], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][17], 1);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][17], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][17], 1);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][17], 1);

	td_container[playerid][18] = CreatePlayerTextDraw(playerid, 428.697174, 155.166687, "X");
	PlayerTextDrawLetterSize(playerid, td_container[playerid][18], 0.266339, 1.115833);
	PlayerTextDrawTextSize(playerid, td_container[playerid][18], 435.725006, 0.583333);
	PlayerTextDrawAlignment(playerid, td_container[playerid][18], 1);
	PlayerTextDrawColor(playerid, td_container[playerid][18], -9857025);
	PlayerTextDrawUseBox(playerid, td_container[playerid][18], true);
	PlayerTextDrawBoxColor(playerid, td_container[playerid][18], -256);
	PlayerTextDrawSetShadow(playerid, td_container[playerid][18], 0);
	PlayerTextDrawSetOutline(playerid, td_container[playerid][18], 0);
	PlayerTextDrawBackgroundColor(playerid, td_container[playerid][18], 51);
	PlayerTextDrawFont(playerid, td_container[playerid][18], 2);
	PlayerTextDrawSetProportional(playerid, td_container[playerid][18], 1);
	PlayerTextDrawSetSelectable(playerid, td_container[playerid][18], true);
}
stock CreateVozdushShar(playerid,idobj)
{
	for(new i = 0; i < 2; i++)PlayerTextDrawDestroy(playerid, PlayerText:sharvibor_TD[playerid][i]);
	for(new i = 0; i < 18; i++) PlayerTextDrawDestroy(playerid, PlayerText:tdshar_TD_PTD[playerid][i]);
	labeltext[playerid] = Create3DTextLabel("{F79E45}[ Воздушный Шар ]\n\n{F5CC02}Чтобы занять пассажирское место нажмите `G`\n{FF6347}Управлене доступно только для владельца{ffffff}", -1, 7.77, 7.77, 7.77, 50.0, 0, 1 ); // Создаём текст
	new Float:X, Float:Y, Float:Z, Float:A;
	DestroyDynamicObject(sharid[playerid]);
	Delete3DTextLabel(shartext[playerid]);
	GetPlayerPos(playerid, X, Y, Z);
	GetPlayerFacingAngle(playerid, A);
	PlayerInfo[playerid][plveh] = CreateVehicle(487, X, Y, Z, A, -1, -1, -1);
	LinkVehicleToInterior(PlayerInfo[playerid][plveh], 100);
	DestroyDynamicObject(objectshar[playerid]);
	objectshar[playerid] = CreateDynamicObject(idobj, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, 0.000000, -1, -1, -1, 300.000000);
	AttachDynamicObjectToVehicle(objectshar[playerid], PlayerInfo[playerid][plveh], 0.000000, -0.000000, -1.000000, 0.000000, 0.000000, -0.000000);
	Attach3DTextLabelToVehicle(labeltext[playerid], PI[playerid][plveh], 0.0, 0.0, 2.0 );
	AC_PutPlayerInVehicle(playerid, PlayerInfo[playerid][plveh], 0);
	Fuel[PlayerInfo[playerid][plveh]] = 90.0;
	new carid = GetPlayerVehicleID(playerid);
	SetEngineStatus(carid,true, playerid);
/*	RemovePlayerAttachedObjectEx(playerid, 5);
	RemovePlayerAttachedObjectEx(playerid, 3);
	RemovePlayerAttachedObjectEx(playerid, 2);
	RemovePlayerAttachedObjectEx(playerid, 1);
	RemovePlayerAttachedObjectEx(playerid, 4);
*/	GameTextForPlayer(playerid,"Vozdushnyy shar",3000,1);
	SetEngineStatus(PlayerInfo[playerid][plveh], true, playerid);
	new sarprogs[60];
	pTemp[playerid][pSharProgress2] = 0;
	format(sarprogs,sizeof(sarprogs),"0",pTemp[playerid][pSharProgress2]);
	PlayerTextDrawSetString(playerid, tdshar_TD_PTD[playerid][9],sarprogs);
	HideTDSpeed(playerid);
	CancelSelectTextDraw(playerid);
	return true;
}
stock CreateKorzina(playerid,idobj)
{
	if(GetPlayerState(playerid)!=1) return SendClientMessage(playerid,COLOR_RED, !"[Ошибка]{FFFFFF} Вы уже находитесь в транспорте!");
   	if(GetPlayerInterior(playerid) > 0) return SendClientMessage(playerid,COLOR_RED, !"[Ошибка]{FFFFFF} Использовать в интерьере нельзя!");
	if(PlayerInfo[playerid][plveh]!=-1)DestroyVehicle(PlayerInfo[playerid][plveh]);
    RemovePlayerAttachedObjectEx(playerid, 5);
	GetPlayerPos(playerid, Xshar[playerid],Yshar[playerid],Zshar[playerid]);
	sharid[playerid] = CreateDynamicObject(idobj, Xshar[playerid],Yshar[playerid],Zshar[playerid]-1, 0.0, 0.0, 0.0);
	SetDynamicObjectMaterial(sharid[playerid], 1, 16644, "a51_detailstuff", "roucghstonebrtb", 0x00000000);
	SetDynamicObjectMaterial(sharid[playerid], 2, 16644, "a51_detailstuff", "roucghstonebrtb", 0x00000000);
	SetDynamicObjectMaterial(sharid[playerid], 3, 16644, "a51_detailstuff", "roucghstonebrtb", 0x00000000);
	RemovePlayerAttachedObject(playerid, 1);
	new string[100];
	format(string, sizeof(string), "{3CB371}Чтобы собрать воздушный шар\nНажмите H\n\n{FFFFFF}[Владелец %s]",PN(playerid));
	shartext[playerid] = Create3DTextLabel(string, COLOR_WHITE, Xshar[playerid],Yshar[playerid],Zshar[playerid], 300.0, 0, 1 );
	return true;
}
CreateIspugTD(playerid)
{
	ispug_PTD[playerid][0] = CreatePlayerTextDraw(playerid, -227.6666, -158.0296, "Box"); // пусто
	PlayerTextDrawLetterSize(playerid, ispug_PTD[playerid][0], 0.0000, 90.0333);
	PlayerTextDrawTextSize(playerid, ispug_PTD[playerid][0], 1255.0000, 0.0000);
	PlayerTextDrawAlignment(playerid, ispug_PTD[playerid][0], 1);
	PlayerTextDrawColor(playerid, ispug_PTD[playerid][0], -1);
	PlayerTextDrawUseBox(playerid, ispug_PTD[playerid][0], 1);
	PlayerTextDrawBoxColor(playerid, ispug_PTD[playerid][0], 255);
	PlayerTextDrawBackgroundColor(playerid, ispug_PTD[playerid][0], 255);
	PlayerTextDrawFont(playerid, ispug_PTD[playerid][0], 1);
	PlayerTextDrawSetProportional(playerid, ispug_PTD[playerid][0], 1);
	PlayerTextDrawSetShadow(playerid, ispug_PTD[playerid][0], 0);

	ispug_PTD[playerid][1] = CreatePlayerTextDraw(playerid, 47.6666, -87.6665, ""); // пусто
	PlayerTextDrawTextSize(playerid, ispug_PTD[playerid][1], 523.0000, 565.0000);
	PlayerTextDrawAlignment(playerid, ispug_PTD[playerid][1], 1);
	PlayerTextDrawColor(playerid, ispug_PTD[playerid][1], -1);
	PlayerTextDrawFont(playerid, ispug_PTD[playerid][1], 5);
	PlayerTextDrawSetProportional(playerid, ispug_PTD[playerid][1], 0);
	PlayerTextDrawSetShadow(playerid, ispug_PTD[playerid][1], 0);
	PlayerTextDrawSetPreviewModel(playerid, ispug_PTD[playerid][1], 11704);
	PlayerTextDrawSetPreviewRot(playerid, ispug_PTD[playerid][1], 0.0000, 0.0000, 0.0000, 1.0000);
	return 1;
}
KladProg(playerid)
{
	if(pTemp[playerid][pKladProgress] >= 1)
	{
		if(pTemp[playerid][pKladProgress] <= 15)
		{
			switch(random(7))
			{
				case 0..3:
					{
						GameTextForPlayer(playerid, "~g~PRESS: ~r~N", 1500, 3);
      					pTemp[playerid][pKladKey] = 1;
	    			}
				case 4..7:
   					{
   	    				GameTextForPlayer(playerid, "~g~PRESS: ~r~Y", 1500, 3);
   						pTemp[playerid][pKladKey] = 2;
		    		}
			}
		}
		else if(pTemp[playerid][pKladProgress] >= 15)
		{
			new string[300], random_prize = random(19);
			pTemp[playerid][pKladProgress] = 0;
			pTemp[playerid][pKladKey] = 0;
			ClearAnimations(playerid);
			strmid(pTemp[playerid][pKladOtevet], KladInfo[random_prize][kladOtvet], 0, 256);
			pTemp[playerid][pKladVopID] = random_prize;
			GameTextForPlayer(playerid, "~g~SUCCESSFULLY", 3000, 3);
			format(string, sizeof(string),"{FFFFFF}\n\nДля того, чтобы взломать замок,\nвам необходима ответить на вопрос-загадку!\n\nВопрос:\n%s\n\nВведите ответ в пустое контекстное поле:\n\n", KladInfo[random_prize][kladStory]);
			ShowPlayerDialogEx(playerid,3736,DIALOG_STYLE_INPUT,"{FFFFFF}Взлом | {DC4747}Клад",string,"»","X");
		}
	}
	return true;
}
stock CreateAutoBazarTable(id)
{
	static string[144], color[30];
	new Float:X, Float:Y, Float:Z, Float:A;
	new Float:X_1, Float:Y_1, Float:Z_1, Float:X_2, Float:Z_2, Float:X_3, Float:A_1;
	new carid = autoBazarInfo[id][autoBazarCarID];
	new number = GetVehicleID(carid);
	X = autoBazarInfo[id][autoBazarPosX];
	Y = autoBazarInfo[id][autoBazarPosY];
	Z = autoBazarInfo[id][autoBazarPosZ];
	A = autoBazarInfo[id][autoBazarZAngle];
	if(A == 90)
	{
	    X_1 = X-4.288819;
	    Y_1 = Y-0.024048;
	    Z_1 = Z-0.122114;

	    X_2 = X-5.368897;
	    Z_2 = Z-2.509254;

	    X_3 = X-2.808838;

	    A_1 = 0;
	}
	else if(A == 270)
	{
	    X_1 = X+4.288819;
	    Y_1 = Y+0.024048;
	    Z_1 = Z-0.122114;

	    X_2 = X+5.368897;
	    Z_2 = Z-2.509254;

	    X_3 = X+2.808838;

	    A_1 = 180;
	}

	static twinturbo[18];
	static supreme[8];
	twinturbo[0] = EOS;
	supreme[0] = EOS;
	if(CarInfo[number][cTwinTurbo]) twinturbo = "TWINTURBO PACKAGE";
	if(CarInfo[number][cSupreme]) supreme = "SUPREME";

	switch(random(5))
	{
	    case 0: color = "bluedirt1";
	    case 1: color = "greendirt1";
	    case 2: color = "purpledirt1";
	    case 3: color = "reddirt1";
	    case 4: color = "yellowdirt1";
	}

	format(string, sizeof(string), "%s\n{5FC470}$%d\n\n\n \n", VehicleName[GetVehicleModel(carid) - 400], autoBazarInfo[id][autoBazarCost]);
	autoBazarInfo[id][autoBazarObject][0] = CreateDynamicObject(18663, X_1, Y_1, Z_1, 0.000000, 25.000000, A_1, -1, -1, -1, STREAMER_OBJECT_SD, 150.0); // 0
	SetDynamicObjectMaterialText(autoBazarInfo[id][autoBazarObject][0], 0, string, 140, "Ariel", 40, 1, 0xFFFFFFFF, 0, 1);

	format(string, sizeof(string), "\n\n\n{FFFF00}%s\n%s{FFFFFF}\nВладелец: %s\n{999999}id: %d", twinturbo, supreme, PN(autoBazarInfo[id][autoBazarplayerid]), carid);
	autoBazarInfo[id][autoBazarObject][1] = CreateDynamicObject(18663, X_1, Y_1, Z_1, 0.000000, 25.000000, A_1, -1, -1, -1, STREAMER_OBJECT_SD, 150.0); // 0
	SetDynamicObjectMaterialText(autoBazarInfo[id][autoBazarObject][1], 0, string, 140, "Ariel", 30, 1, 0xFFFFFFFF, 0, 1);

	autoBazarInfo[id][autoBazarObject][2] = CreateDynamicObject(19980, X_2, Y_1, Z_2, -25.000000, 0.000000, A-180, -1, -1, -1, STREAMER_OBJECT_SD, 150.0); // 3
	SetDynamicObjectMaterial(autoBazarInfo[id][autoBazarObject][2], 2, 19655, "mattubes", color, 0);
	SetDynamicObjectMaterial(autoBazarInfo[id][autoBazarObject][2], 1, 16640, "a51", "banding9_64HV", 0);
	SetDynamicObjectMaterial(autoBazarInfo[id][autoBazarObject][2], 0, 16640, "a51", "banding9_64HV", 0);

	autoBazarInfo[id][autoBazarObject][3] = CreateDynamicObject(19980, X_3, Y_1, Z_2, -25.000000, 0.000000, A, -1, -1, -1, STREAMER_OBJECT_SD, 150.0); // 3
	SetDynamicObjectMaterial(autoBazarInfo[id][autoBazarObject][3], 2, 16640, "a51", "banding9_64HV", 0);
	SetDynamicObjectMaterial(autoBazarInfo[id][autoBazarObject][3], 1, 16640, "a51", "banding9_64HV", 0);
	SetDynamicObjectMaterial(autoBazarInfo[id][autoBazarObject][3], 0, 16640, "a51", "banding9_64HV", 0);
//	autoBazarInfo[i][autoBazarLabel2] = CreateDynamic3DTextLabel("Для покупки нажмите N", -1, X_1-0.3, Y_1, Z_1, 5.0, INVALID_PLAYER_ID, INVALID_VEHICLE_ID);//1

}

stock DestroyAutoBazarTable(id) for(new i; i < 4; i++) DestroyDynamicObject(autoBazarInfo[id][autoBazarObject][i]);
OrelAndReshkaWin(playerid)
{
	new dice = random(11),string[300], orel[32] = "Орёл", reshka[32] = "Решка";
	switch(dice)
	{
		case 0..5:
	    {
  			format(string,sizeof(string),"%s поймал(а) монетку, выпал: Орёл.",PN(playerid));
			ProxDetector(25,playerid,string,COLOR_ME);
			if(!strcmp(orel, StatusMoneta[playerid], true))
			{
				format(string,sizeof(string),"Победил %s - %s.",PN(playerid),StatusMoneta[playerid]);
				ProxDetector(25,playerid,string,COLOR_DOCHAT);
				GiveMoney(playerid, OrelMoney[playerid]);
				GiveMoney(OrelName[playerid], -OrelMoney[OrelName[playerid]]);
				GameTextForPlayer(playerid, "~g~YOU WIN!", 4200, 3);
				GameTextForPlayer(OrelName[playerid], "~r~YOU LOSE!", 4200, 3);
				GiveBizMoney(BizEntered[playerid], OrelMoney[playerid]/250);
			}
			else
			{
				format(string,sizeof(string),"Победил %s - %s.",PN(OrelName[playerid]),StatusMoneta[OrelName[playerid]]);
				ProxDetector(25,playerid,string,COLOR_DOCHAT);
				GiveMoney(OrelName[playerid], OrelMoney[OrelName[playerid]]);
				GiveMoney(playerid, -OrelMoney[playerid]);
				GameTextForPlayer(OrelName[playerid], "~g~YOU WIN!", 4200, 3);
				GameTextForPlayer(playerid, "~r~YOU LOSE!", 4200, 3);
				GiveBizMoney(BizEntered[playerid], OrelMoney[playerid]/250);
			}
		}
		case 6..11:
		{
			format(string,sizeof(string),"%s поймал(а) монетку, выпал: Решка.",PN(playerid));
			ProxDetector(25,playerid,string,COLOR_ME);
			if(!strcmp(reshka, StatusMoneta[playerid], true))
			{
				format(string,sizeof(string),"Победил %s - %s.",PN(playerid),StatusMoneta[playerid]);
				ProxDetector(25,playerid,string,COLOR_DOCHAT);
				GiveMoney(playerid, OrelMoney[playerid]);
				GiveMoney(OrelName[playerid], -OrelMoney[OrelName[playerid]]);
				GameTextForPlayer(playerid, "~g~YOU WIN!", 4200, 3);
				GameTextForPlayer(OrelName[playerid], "~r~YOU LOSE!", 4200, 3);
				GiveBizMoney(BizEntered[playerid], OrelMoney[playerid]/250);
			}
			else
			{
				format(string,sizeof(string),"Победил %s - %s.",PN(OrelName[playerid]),StatusMoneta[OrelName[playerid]]);
				ProxDetector(25,playerid,string,COLOR_DOCHAT);
				GiveMoney(OrelName[playerid], OrelMoney[OrelName[playerid]]);
				GiveMoney(playerid, -OrelMoney[playerid]);
				GameTextForPlayer(OrelName[playerid], "~g~YOU WIN!", 4200, 3);
				GameTextForPlayer(playerid, "~r~YOU LOSE!", 4200, 3);
				GiveBizMoney(BizEntered[playerid], OrelMoney[playerid]/250);
			}
		}
	}
	OrelMoney[playerid] = 0;
	OrelMoney[OrelName[playerid]] = 0;
	ZapretOrel[playerid] = 0;
	ZapretOrel[OrelName[playerid]] = 0;
	StatusMoneta[playerid] = "0";
	StatusMoneta[OrelName[playerid]] = "0";
	OrelName[OrelName[playerid]]= INVALID_PLAYER_ID;
	OrelName[playerid] = INVALID_PLAYER_ID;
	return 1;
}
InfoNeftAll()
{
	new textinfoo[512];
	for(new i;i<COUNT_NEFT;i++)
	{
		format(textinfoo,sizeof(textinfoo),"{F3ED8E}Добыча за 32 секунд(ы): от 181.0 до 192.0 литров\nВ наличии: %d.00 литров\n\n{9AF38E}Стоимость за 200.0 литров (бочка): 9000$\nЧтобы купить бочку нажмите 'H'", CountNeft[i]/*CountNeft[i]*/);
	    if (i == 0) InfoNeft[0] = CreateDynamic3DTextLabel(textinfoo, -1, 2634.5854,470.6533,12.2185, 20.0);
	    if (i == 1) InfoNeft[1] = CreateDynamic3DTextLabel(textinfoo, -1, 1361.7429,-262.6564,13.3253, 20.0);
     	if (i == 2) InfoNeft[2] = CreateDynamic3DTextLabel(textinfoo, -1, -3043.7104,-249.6205,11.8927, 20.0);
	}
	CreatePickup(1559,1,2634.5854,470.6533,12.2185,-1); // 1
	CreatePickup(1559,1,1361.7429,-262.6564,13.3253,-1); // 2
	CreatePickup(1559,1,-3043.7104,-249.6205,11.8927,-1); // 3
}
Nefttext()
{
    new textinfoo[512];
    for(new i;i<COUNT_NEFT;i++)
	{
		format(textinfoo,sizeof(textinfoo),"{F3ED8E}Добыча за 32 секунд(ы): от 181.0 до 192.0 литров\nВ наличии: %d.00 литров\n\n{9AF38E}Стоимость за 200.0 литров (бочка): 9000$\nЧтобы купить бочку нажмите 'H'", CountNeft[i]);
	    UpdateDynamic3DTextLabelText(InfoNeft[i],COLOR_WHITE,textinfoo);
	}
}
forward AddNeft(playerid);
public AddNeft()
{
    for(new i;i<COUNT_NEFT;i++)
	{
		if(CountNeft[i] < 1000000) CountNeft[i] += random(11) + 181;
		else CountNeft[i] = 1000000;
	}
	Nefttext();
}
forward OrelTimer(playerid);
public OrelTimer(playerid)
{
    OrelAndReshkaWin(playerid);
    return true;
}
forward CloseGateConteiner(playerid);
public CloseGateConteiner(playerid) MoveDynamicObject(ConteinerGate, -1751.366333, 140.461945, 3.314430, BARRIER_SPEED, 0.000000, 90.000000, 270.000000);
stock AntiReAction1(playerid)
{
    new string[200];
    if((gettime()-timed[playerid])<60)
    {
        adminwarnings1[playerid]++;
        }else{
        adminwarnings1[playerid]=0;
        timed[playerid]=gettime();
    }
    if(adminwarnings1[playerid]==4)
    {
        if(remove_adm!=false)
        {
            PI[playerid][pAdmin] = 0;
            mysql_format(mysql, string, sizeof(string), "DELETE FROM admin WHERE name = '%s'", playerid);
			mysql_tquery(mysql, string, "", "");
        }
        SendClientMessage(playerid, 0xFF0000AA, "[Анти-Слив]: {ffffff}Система сняла вас с Админки за попытку слива");
        SendClientMessage(playerid, 0xFF0000AA, "[Анти-Слив]: {ffffff}Если система вас сняла ложно, делайте скрин и кидайте Основателю");
        PI[playerid][pAdmin] = 0;
    }
    return true;
}
//анти-бот
stock GetNumberOfPlayersOnThisIP(test_ip[])
{
	new against_ip[32+1];
	new x = 0;
	new ip_count = 0;
	for(x=0; x<MAX_PLAYERS; x++)
	{
		if(IsPlayerConnected(x))
		{
			GetPlayerIp(x,against_ip,32);
			if(!strcmp(against_ip,test_ip)) ip_count++;
		}
	}return ip_count;
}
forward AngelColco(playerid);
public AngelColco(playerid)
{
	if(PI[playerid][pSlotItem][0] == 19197)
	{
	    if(PI[playerid][pHealth] == 100) return 0;
	    new Float:Health=PI[playerid][pHealth];
		if(!IsPlayerConnected(playerid)) return false;
		Health += 5;
		J_SetPlayerHealth(playerid,Health);
	}
	return true;
}
stock ShowDamageTextDrawForPlayer(playerid, hitplayerid, idweapon, Float:amount)
{
    new weapname[32],
        damages[32 + 12];

    GetWeaponName(idweapon, weapname, sizeof(weapname));
    if(!idweapon) {
    	weapname = "Fist";
    }

    format(damages,sizeof(damages),"%s - %s -%.2f", PN(playerid), weapname, amount);
    PlayerTextDrawSetString(hitplayerid, td_damage[hitplayerid][1], damages);
    PlayerTextDrawShow(hitplayerid, td_damage[hitplayerid][1]);

    format(damages,sizeof(damages),"%s - %s +%.2f", PN(hitplayerid), weapname, amount);
    PlayerTextDrawSetString(playerid, td_damage[playerid][0], damages);
    PlayerTextDrawShow(playerid, td_damage[playerid][0]);

    return SetTimerEx("@____HideDamageTextDraws", 5000, false, "ii", playerid, hitplayerid);
}
@____HideDamageTextDraws(playerid, hitplayerid);
@____HideDamageTextDraws(playerid, hitplayerid)
{
	PlayerTextDrawHide(hitplayerid, td_damage[hitplayerid][1]);
    PlayerTextDrawHide(playerid, td_damage[playerid][0]);
    return 1;
}

